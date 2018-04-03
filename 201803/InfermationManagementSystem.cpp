#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int g_nNumber=0;
struct student{
	int number;
	char name[20];
	char gerden[10];
	int age;
	float mark;
	struct student *next;
};

struct student *Delete(struct student *head)
{
	int num;
	printf("please input number :");
	scanf("%d",&num);
	struct student *p1,*p2;
	if(head==NULL)
	{
		printf("\nThe list is NULL!\n");
		return head;
	}
	p1=head;
	while(p1->number!=num && p1->next!=NULL)
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1->number==num)
	{
		if(p1==head)
		head=p1->next;
		else
		p2->next=p1->next;
		free(p1);
		printf("Ddelete : %d\n",num);
		g_nNumber=g_nNumber-1;
	}
	else
		printf("%d is not been found!\n");
	return head;
}

struct student *Insert(struct student *head)
{
	struct student *stud;
	stud=(	struct student *)malloc(sizeof(	struct student));
	printf("����������ѧ�š��������Ա����䡢�ɼ�\n");
	scanf("%d%s%s%d%f",&stud->number,&stud->name,&stud->gerden,&stud->age,&stud->mark);
	struct student *p0,*p1,*p2;
	p1=head;
	p0=stud;
	if(head==NULL)
	{
		head = p0;
		p0->next=NULL;
	}
	else
	{
		while((p0->number>p1->number ) && (p1->next!=NULL))
		{
			p2=p1;
			p1=p1->next;
		}
		if(p0->number <= p1->number)
		{
			if(head==p1)
				head=p0;
			else
				p2->next=p0;
			p0->next=p1;
		}
		else
		{
			p1->next=p0;
			p0->next=NULL;
		}
	}
	g_nNumber=g_nNumber+1;
	return head;
}

struct student *Creat()
{
	struct student *head,*p1,*p2;
	head=NULL;
	p1=p2=(	struct student *)malloc(sizeof(	struct student));
	printf("����������ѧ�š��������Ա����䡢�ɼ�\n");
	scanf("%d%s%s%d%f",&p1->number,&p1->name,&p1->gerden,&p1->age,&p1->mark);
	while(p1->number!=0)
	{
		g_nNumber=g_nNumber+1;
		if(g_nNumber==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;	
		p1=(struct student *)malloc(sizeof(struct student));
		system("cls");
		printf("����������ѧ�š��������Ա����䡢�ɼ�\n");
		scanf("%d%s%s%d%f",&p1->number,&p1->name,&p1->gerden,&p1->age,&p1->mark);
	}
	return head;
 } 
 
 struct student Query(struct student *head)
 {
	struct student *p1;
	p1=head;
	int num;
	printf("Please input the student number you want to query :");
	scanf("%d",&num);
	while(p1->number!=num && p1->next!=NULL)
	{
		p1=p1->next;
	}
	if(p1->number==num)
		printf("%d\t%s\t%s\t%d\t%.2f\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark);
	else
		printf("%d is not been found!\n",num);
 }
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
			printf("����������ѧ�š��������Ա����䡢�ɼ�\n");
			scanf("%d%s%s%d%f",&p1->number,&p1->name,&p1->gerden,&p1->age,&p1->mark);
		}
	else
		printf("%d is not been found!\n");
		return head;
}

 int Interface()
 {
 	system("cls");
 	puts("1.���ѧ��");
 	puts("2.��ѯѧ��");
 	puts("3.�༭ѧ��");
 	puts("4.ɾ��ѧ��");
 	puts("5.��ӡȫ��");
 	puts("6.�˳�����");
 }
 
struct student Output(struct student *head)
{
	struct student *p1;
	p1=head;
	while(p1!=NULL)
	{
		printf("%d\t%s\t%s\t%d\t%.2f\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark);
		p1=p1->next;
	}
}
 
int Exit()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t====================================" );
	puts("\t\t\t\t\t\t| ��л����ʹ�ã��ټ�!              |");
	puts("\t\t\t\t\t\t| Thank you for your use, goodbye! |");
	puts("\t\t\t\t\t\t====================================\n\n\n\n\n\n\n\n\n\n\n\n");
	exit(1);
}

int main(int argc, char *argv[])
{	
	struct student *head,*head_1;
	int selectkey;
	head = Creat();
	Interface();
	printf("��ѡ����Ҫʵ�ֵĹ���:"); 
 	scanf("%d",&selectkey);
	switch(selectkey)
		{
			case 1:printf("���ѧ��\n");head_1=Insert(head);break;
			case 2:printf("��ѯѧ��\n");Query(head);break;
			case 3:printf("�༭ѧ��\n");head_1=Editor(head);break;
			case 4:printf("ɾ��ѧ��\n");head_1=Delete(head);break;
			case 5:printf("��ӡȫ��\n");Output(head);break;
			case 6:printf("�˳�����\n");Exit();break;
		}
	return 0;
}
