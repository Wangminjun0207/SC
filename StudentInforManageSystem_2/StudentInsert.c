#include "Predefine.h"
extern void WriteToFile(struct student *head);
extern int g_nNumber;
/*����һ��ѧ����Ϣ������һ���ṹ��ָ�� */ 
struct student *Insert(struct student *head)
{
	struct student *stud;
	stud = (struct student *)malloc(sizeof(	struct student));//��̬�����ڴ� 
	if(NULL == stud)
	{
		printf("�����ڴ����\n\a");
		exit(0);
	}
	printf("����������ѧ�š��������Ա����䡢�ɼ������֤����\n");
	scanf("%d%s%s%d%f%s",&stud->number,&stud->name,&stud->gerden,&stud->age,&stud->mark,&stud->ID);
	struct student *p0,*p1,*p2;
	p1 = head;
	p0 = stud;
	if(NULL == head)
	{
		head = p0;
		p0->next = NULL;
	}
	else
	{
		while((p0->number>p1->number ) && (NULL != p1->next))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if(p0->number <= p1->number)
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
	}
	printf("ѧ��Ϊ %d ��ѧ����Ϣ�Ѿ�����!\n",stud->number);
	WriteToFile(head);
	system("pause");
	g_nNumber = g_nNumber + 1;
	return head;
}
