#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "car.h"

extern void WriteToFile(struct Car *head);
extern void WriteToFile_1(struct Car *car);
extern int g_nCarNumber;
 
/*���ճ��ƺ�ȡ��������һ���ṹ��ָ�� */ 
struct Car *TakeCar(struct Car *head)
{
	char Number[10];
	printf("�����복�ƺ�:");
	scanf("%s",&Number);
	struct Car *p1,*p2;
	if(head == NULL)   //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		return head;
	}
		p1 = head;
		while((strcmp(Number,p1->carNmber)!=0) && p1->next!=NULL)  //�����������ճ��ƺŽ��в��� 
		{
			p2=p1;
			p1=p1->next;
		}
		if((strcmp(Number,p1->carNmber)==0))   //�ҵ��ó� 
		{
			printf("������ȡ�����ڣ�");
			scanf("%s",&p1->takeDate);
			printf("������ȡ��ʱ�䣺");
			scanf("%s",&p1->takeTime);
			printf("������ͣ�����ã�");
			scanf("%d",&p1->parkCarCost);
			WriteToFile_1(p1);
			if(p1==head)
			head=p1->next;
			else 
			p2->next=p1->next;
			free(p1);
			printf("�Ѿ�ȡ�� : %s\n",Number);
			g_nCarNumber=g_nCarNumber-1;
		}
	else                //û���ҵ��ó� 
		printf("%s is not been found!\n",Number);
	WriteToFile(head);
	system("pause");
	return head;
}
