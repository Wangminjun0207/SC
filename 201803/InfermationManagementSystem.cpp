/**
 *���ߣ������� 
 *ʱ�䣺2018-04-08 
 *������ѧ����Ϣ����ϵͳ���������ѧ������ѯѧ�����༭ѧ����
        ɾ��ѧ������ӡȫ�����˳�����Ĺ��� 
 */   

#include <stdio.h>             
#include <stdlib.h> 
#include <string.h>           
#include <windows.h>           
int g_nNumber=0;   //����ȫ�ֱ��������ѧ������ 
void Interface();
void Interface_1();
void Interface_2();
void Interface_3();
 
 /*
 *����һ���ṹ�壬����Ϊstudent
 *��Ա��ѧ�š��������Ա����䡢�ɼ�
 */ 
struct student{
	int number;
	char name[20];
	char gerden[10];
	int age;
	float mark;
	char ID[20];
	struct student *next;
};


/*����һ����̬�������ڴ��ѧ����Ϣ*/ 
/*
struct student *Creat()
{
	struct student *head,*p1,*p2;
	head=NULL;
	p1=p2=(	struct student *)malloc(sizeof(	struct student));
	printf("����������ѧ��\t����\t�Ա�\t����\t�ɼ�\t���֤����\n");
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
		scanf("%d%s%s%d%f",&p1->number,&p1->name,&p1->gerden,&p1->age,&p1->mark);
	}
	p2->next=NULL;
	free(p1); 
	return head;
 } 
*/

/*����ѧ��ɾ��һ��ѧ����Ϣ������һ���ṹ��ָ�� */ 
struct student *Delete_N(struct student *head)
{
	int num;
	printf("please input number :");
	scanf("%d",&num);
	struct student *p1,*p2;
	if(head==NULL)    //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		return head;
	}
	p1=head;
	while(p1->number!=num && p1->next!=NULL)  //������������ѧ�Ž��в��� 
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1->number==num)   //��һ��������ҵ���ѧ�� 
	{
		if(p1==head)
		head=p1->next;
		else 
		p2->next=p1->next;
		free(p1);
		printf("Ddelete : %d\n",num);
		g_nNumber=g_nNumber-1;
	}
	else                //�ڶ��������û���ҵ���ѧ��
		printf("%d is not been found!\n");
	system("pause");
	return head;
}

/*��������ɾ��һ��ѧ����Ϣ������һ���ṹ��ָ�� */ 
struct student *Delete_n(struct student *head)
{
	char name[20];
	int nNumber = 0;  //��¼ͬ�������� 
	printf("please input name :");
	scanf("%s",&name);
	struct student *p1,*p2;
	if(head == NULL)   //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		return head;
	}
	p1 = head;
	
	while( p1 != NULL)  //������������ѧ�Ž��в��� ��ͳ��ͬ������ 
	{
		if(strcmp(name,p1->name) == 0) 
			nNumber++;
		p1=p1->next;
	}
	if(nNumber == 1)
	{
		p1 = head;
		while((strcmp(name,p1->name)!=0) && p1->next!=NULL)  //������������ѧ�Ž��в��� 
		{
			p2=p1;
			p1=p1->next;
		}
		if((strcmp(name,p1->name)==0))   //��һ��������ҵ���ѧ�� 
		{
			if(p1==head)
			head=p1->next;
			else 
			p2->next=p1->next;
			free(p1);
			printf("Ddelete : %s\n",name);
			g_nNumber=g_nNumber-1;
		}
		system("pause");
		return head;
	}
	else if(nNumber > 1)
		{
			while(nNumber != 0)
			{
				p1 = head; 
				while((strcmp(name,p1->name)!=0) && p1->next!=NULL)  //������������ѧ�Ž��в��� 
				{
					p2=p1;
					p1=p1->next;
				}
				if((strcmp(name,p1->name)==0))   //��һ��������ҵ���ѧ�� 
				{
					if(p1==head)
					head=p1->next;
					else 
					p2->next=p1->next;
					free(p1);
					printf("Ddelete : %s\n",name);
					g_nNumber=g_nNumber-1;
				}
				nNumber--;
			 } 
			 system("pause");
			 return head;
		}
	else                //�ڶ��������û���ҵ���ѧ��
		printf("%s is not been found!\n",name);
	system("pause");
	return head;
}

/*���ճɼ�ɾ��һ��ѧ����Ϣ������һ���ṹ��ָ�� */ 
struct student *Delete_s(struct student *head)
{
	float score;
	printf("please input score :");
	scanf("%f",&score);
	struct student *p1,*p2;
	if(head==NULL)    //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		return head;
	}
	p1=head;
	while(p1->mark!=score && p1->next!=NULL)  //������������ѧ�Ž��в��� 
	{
		p2=p1;
		p1=p1->next;
	}
	if(p1->mark==score)   //��һ��������ҵ���ѧ�� 
	{
		if(p1==head)
		head=p1->next;
		else 
		p2->next=p1->next;
		free(p1);
		printf("Ddelete : %f\n",score);
		g_nNumber=g_nNumber-1;
	}
	else                //�ڶ��������û���ҵ���ѧ��
		printf("%f is not been found!\n",score);
	system("pause");
	return head;
}

/*����һ��ѧ����Ϣ������һ���ṹ��ָ�� */ 
struct student *Insert(struct student *head)
{
	struct student *stud;
	stud=(	struct student *)malloc(sizeof(	struct student));//��̬�����ڴ� 
	if(stud == NULL)
	{
		printf("�����ڴ����\n\a");
		exit(0);
	}
	printf("����������ѧ�š��������Ա����䡢�ɼ������֤����\n");
	scanf("%d%s%s%d%f%s",&stud->number,&stud->name,&stud->gerden,&stud->age,&stud->mark,&stud->ID);
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
	printf("ѧ��Ϊ %d ��ѧ����Ϣ�Ѿ�����!\n",stud->number);
	system("pause");
	g_nNumber=g_nNumber+1;
	return head;
}

 /*����ѧ�Ų�ѯһ��ѧ����Ϣ���������*/ 
void Query_N(struct student *head)
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
	if(p1->number==num)       //�ҵ���ѧ�������ѧ����Ϣ 
	{
		printf("ѧ��	����	�Ա�	����	�ɼ�	���֤����\n");
		printf("%d\t%s\t%s\t%d\t%.2f\t%s\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark,p1->ID);
	}
	else                     //δ�ҵ���ѧ�������������Ϣ 
		printf("%d is not been found!\n",num);
	system("pause");
 }
 
/*����������ѯһ��ѧ����Ϣ���������*/ 
void Query_n(struct student *head)
 {
	struct student *p1;
	p1=head;
	char name[20];
	printf("Please input the student name you want to query :");
	scanf("%s",&name);
	while((strcmp(name,p1->name)!=0) && p1->next!=NULL)
	{
		p1=p1->next;
	}
	if(strcmp(name,p1->name)==0)       //�ҵ���ѧ�������ѧ����Ϣ 
	{
		printf("ѧ��	����	�Ա�	����	�ɼ�	���֤����\n");
		printf("%d\t%s\t%s\t%d\t%.2f\t%s\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark,p1->ID);
	}
	else                     //δ�ҵ���ѧ�������������Ϣ 
		printf("%s is not been found!\n",name);
	system("pause");
 }

/*���ճɼ���ѯһ��ѧ����Ϣ���������*/ 
void Query_s(struct student *head)
 {
	struct student *p1;
	p1=head;
	float score;
	printf("Please input the student score you want to query :");
	scanf("%f",&score);
	while(p1->mark!=score && p1->next!=NULL)
	{
		p1=p1->next;
	}
	if(p1->mark==score)       //�ҵ���ѧ�������ѧ����Ϣ 
	{
		printf("ѧ��	����	�Ա�	����	�ɼ�	���֤����\n");
		printf("%d\t%s\t%s\t%d\t%.2f\t%s\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark,p1->ID);
	}
	else                     //δ�ҵ���ѧ�������������Ϣ 
		printf(" Is not been found!\n");
	system("pause");
 }

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



/*�˵����棬���������ֹ���*/ 
void Interface()
 {
 	system("cls");
 	puts("1.���ѧ��");
 	puts("2.��ѯѧ��");
 	puts("3.�༭ѧ��");
 	puts("4.ɾ��ѧ��");
 	puts("5.��ӡȫ��");
	puts("6.����ͳ��");
 	puts("7.�˳�����");
 }

/*�����˵����棬���������ֹ���*/ 
void Interface_1()
 {
 	system("cls");
 	puts("1.ѧ��");
 	puts("2.����");
 	puts("3.�ɼ�");
	puts("��ѡ������");
 }
 
 /*�����˵����棬���������ֹ���*/ 
void Interface_2()
 {
 	system("cls");
 	puts("1.����");
 	puts("2.�Ա�");
 	puts("3.����");
	puts("��ѡ������");
 }
 
  /*�����˵����棬�����°��ֹ���*/ 
 void Interface_3()
 {
 	 	puts("1.�޸�ѧ��");
		puts("2.�޸�����");
		puts("3.�޸��Ա�");
		puts("4.�޸�����");
		puts("5.�޸ĳɼ�");
		puts("6.�޸�ȫ��");
		puts("7.�޸����֤����");
		puts("0.�����޸�");
 }

/*��ӡ����ѧ����Ϣ */ 
void Output(struct student *head)
{
	struct student *p1;
	p1=head;
	printf("ѧ��	����	�Ա�	����	�ɼ�	���֤����\n");
	while(p1!=NULL)
	{
		printf("%d\t%s\t%s\t%d\t%.2f\t%s\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark,p1->ID);
		p1=p1->next;
	}
	system("pause");
}

/* �����Ա����ͳ������*/
void Statistic_g(struct student *head)
{
	int nMale = 0; // ����������� 
	int nFemale = 0; // ���Ů������ 
	struct student *p1;
	if(head==NULL)    //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		exit(0);
	}
	p1=head;
	while(p1!=NULL)  //�������������Ա����ͳ�� 
	{
		if(strcmp(p1->gerden,"male")==0)
			nMale++;
		else if(strcmp(p1->gerden,"female")==0)
			nFemale++;
		p1=p1->next;
	}
	printf("������ %d �ˣ�Ů���� %d ��!\n",nMale,nFemale);
	system("pause");
}

/* �����������ͳ������*/
void Statistic_a(struct student *head)
{
	int nAge_18 = 0; // ���18������� 
	int nAge_19 = 0;  //���19������� 
	int nAge_20 = 0; //���20������� 
	int nAge_another = 0;  //���������������� 
	struct student *p1;
	if(head==NULL)    //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		exit(0);
	}
	p1=head;
	while(p1!=NULL)  //�������������������ͳ�� 
	{
		if(p1->age==18)
			nAge_18++;
		else if(p1->age==19)
			nAge_19++; 
		else if(p1->age==20)
			nAge_20++;
		else
			nAge_another++;
		p1=p1->next;
	}
	printf("18����� %d �ˣ�19����� %d �ˣ�20����� %d �ˣ������������ %d ��!\n",
			nAge_18,nAge_19,nAge_20,nAge_another);
	system("pause");
}

/*�˳��������*/ 
int Exit()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\n\n\t\t\t\t====================================" );
	puts("\t\t\t\t| ��л����ʹ�ã��ټ�!              |");
	puts("\t\t\t\t| Thank you for your use, goodbye! |");
	puts("\t\t\t\t====================================\n\n\n\n\n\n\n\n\n\n\n\n");
	exit(0);
}

int main(int argc, char *argv[])
{	
	struct student *head,*head_1;
	int selectkey;
	int selectkey_1;
	head = NULL;
	do
	{
		Interface();
		printf("��ѡ����Ҫʵ�ֵĹ���:"); 
 		scanf("%d",&selectkey);
		switch(selectkey)
		{
			case 1:system("cls");printf("���ѧ��\n\n");head_1=Insert(head);break;
			case 2:system("cls");printf("��ѯѧ��\n\n");
				   Interface_1();
				   scanf("%d",&selectkey_1);
				   switch(selectkey_1)
				   {
						case 1:system("cls");printf("����ѧ�Ų�ѯ\n\n");Query_N(head);break;
					    case 2:system("cls");printf("����������ѯ\n\n");Query_n(head);break;
						case 3:system("cls");printf("���ճɼ���ѯ\n\n");Query_s(head);break;
				   } 
				   break;
			case 3:system("cls");printf("�༭ѧ��\n\n");head_1=Editor(head);break;
			case 4:system("cls");printf("ɾ��ѧ��\n\n");			   
				   Interface_1();
				   scanf("%d",&selectkey_1);
				   switch(selectkey_1)
				   {
						case 1:system("cls");printf("����ѧ��ɾ��\n\n");head_1=Delete_N(head);break;
					    case 2:system("cls");printf("��������ɾ��\n\n");head_1=Delete_n(head);break;
						case 3:system("cls");printf("���ճɼ�ɾ��\n\n");head_1=Delete_s(head);break;
				   } 
				   break;
			case 5:system("cls");printf("��ӡȫ��\n\n");Output(head);break;
			case 6:system("cls");printf("����ͳ��\n\n");
			       Interface_2();
				   scanf("%d",&selectkey_1);
				   switch(selectkey_1)
				   {
						case 1:system("cls");printf("��������ͳ��\n\n");printf("�ܹ��� %d �ˣ�\n\n",g_nNumber);system("pause");break;
					    case 2:system("cls");printf("�����Ա�ͳ��\n\n");Statistic_g(head);break;
						case 3:system("cls");printf("��������ͳ��\n\n");Statistic_a(head);break;
				   } 
				   break;
			case 7:system("cls");printf("�˳�����\n\n");Exit();break;
		}
		if(selectkey==1 || selectkey==3 || selectkey==4)
			head = head_1;
	}while(selectkey != 7);
	return 0;
}

