#include <stdio.h>
#include <stdlib.h>
#include "Predefine.h"
extern struct student *Delete_N(struct student *head);
extern struct student *Delete_n(struct student *head);
extern struct student *Delete_s(struct student *head);
extern void Query_N(struct student *head);
extern void Query_n(struct student *head);
extern void Query_s(struct student *head);
extern struct student *Insert(struct student *head);
extern struct student *Editor(struct student *head);
extern void Output(struct student *head);
extern void Statistic_g(struct student *head);
extern void Statistic_a(struct student *head);
extern void Interface();
extern void Interface_1();
extern void Interface_2();
extern void Exit();
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
