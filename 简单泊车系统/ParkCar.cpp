#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "car.h"

extern int g_nCarNumber;
extern void WriteToFile(struct Car *head);

/*ͣ��������һ���ṹ��ָ�� */ 
struct Car *ParkCar(struct Car *head)
{
	struct Car *car,*p;
	char select;//�Ƿ�������ѧ����Ϣ 
	do
	{
		car = (struct Car *)malloc(sizeof(struct Car));//��̬�����ڴ� 
		if(NULL == car)
		{
			printf("�����ڴ����\n\a");
			exit(0);
		}
		printf("���³�λ�Ѿ�ͣ�����벻Ҫѡ��\n\n");
		p = head;
		while(NULL != p)
		{
			printf("%s\t",p->parkingNumber);
			p = p->next;
		}
		printf("��ѡ��λ��");
		scanf("%s",&car->parkingNumber);
		printf("�����복�ƺţ�");
		scanf("%s",&car->carNmber);
		printf("�����복��������");
		scanf("%s",&car->carHost);
		printf("�����복�ͣ�");
		scanf("%s",&car->carType);
		printf("������ͣ�����ڣ�");
		scanf("%s",&car->parkDate);
		printf("������ͣ��ʱ�䣺");
		scanf("%s",&car->parkTime);
		struct Car *p0,*p1,*p2;
		p1 = head;
		p0 = car;
		if(NULL == head)
		{
			head = p0;
			p0->next = NULL;
		}
		else
		{
			while((strcmp(p0->parkingNumber,p1->parkingNumber)>0) && (NULL != p1->next))
			{
				p2 = p1;
				p1 = p1->next;
			}
			if(strcmp(p0->parkingNumber,p1->parkingNumber)<=0)
			{
				if(head==p1)
					head = p0;
				else
					p2->next=p0;
				p0->next = p1;
			}
			else
			{
				p1->next = p0;
				p0->next = NULL;
			}
			printf("\n\n%s�Ѿ���ȫͣ����\n\n",car->carNmber);
		} 
		g_nCarNumber = g_nCarNumber + 1;
		printf("\n�Ƿ�Ҫ����ͣ���� ");
		scanf("%*c%c",&select); 
	}while(select=='y' || select=='Y');
	WriteToFile(head);
	return head;
}

