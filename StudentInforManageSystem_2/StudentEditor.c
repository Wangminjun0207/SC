#include "Predefine.h"
extern void WriteToFile(struct student *head);
extern void Interface_3();
/*�༭һ��ѧ����Ϣ������һ���ṹ��ָ�� */ 
struct student *Editor(struct student *head)
{
	struct student *p1;
	p1=head;
	int num;
	printf("Please input the student number you want to editor :");
	scanf("%d",&num);
	while(p1->number!=num && p1->next!=NULL)
	{
		p1=p1->next;
	}
	
	if(p1->number==num)
	{
		Interface_3(); 
		int selectkey;
		scanf("%d",&selectkey);
		switch(selectkey)
		{
			case 1:printf("������ѧ�ţ�");
				   scanf("%d",&p1->number); 
				   break; 
			case 2:printf("������������");
				   scanf("%s",&p1->name);
				   break;
			case 3:printf("�������Ա�");
				   scanf("%s",&p1->gerden);
				   break;
			case 4:printf("���������䣺");
				   scanf("%d",&p1->age);
				   break;
			case 5:printf("������ɼ���");
				   scanf("%f",&p1->mark);
				   break;
			case 6:	printf("����������ѧ�š��������Ա����䡢�ɼ������֤����\n");
					scanf("%d%s%s%d%f%s",&p1->number,&p1->name,&p1->gerden,&p1->age,&p1->mark,&p1->ID);
					break;
			case 7:printf("���������֤���룺");
				   scanf("%s%s%d%f%s",&p1->ID);
				   break;
			case 0:printf("ȡ���޸ģ�\n"); 
				   break;
		}
		if(selectkey != 0)
		printf("The %d is  been editor!\n",num);
	}
	else
		printf("The %d is not been found!\n",num);
	system("pause");
	return head;
}


