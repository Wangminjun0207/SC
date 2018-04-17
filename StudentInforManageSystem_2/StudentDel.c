#include "Predefine.h"
extern void WriteToFile(struct student *head);
extern int g_nNumber;
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
		printf("%d is not been found!\n",num);
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
	
	while( p1 != NULL)  //�������������������в��� ��ͳ��ͬ������ 
	{
		if(strcmp(name,p1->name) == 0) 
			nNumber++;
		p1=p1->next;
	}
	if(nNumber == 1)
	{
		p1 = head;
		while((strcmp(name,p1->name)!=0) && p1->next!=NULL)  //�������������������в��� 
		{
			p2=p1;
			p1=p1->next;
		}
		if((strcmp(name,p1->name)==0))   //�ҵ���ѧ�� 
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
			p1 = head;
			while( p1 != NULL && nNumber >= 0)  //������������ѧ�Ž��в���
			{
				if(strcmp(name,p1->name) == 0) 
					{
						nNumber--; 
						printf("%d\t%s\t%s\t%d\t%.2f\t%s\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark,p1->ID);
					}
				p1=p1->next;
			}
			int number;
			printf("��������ͬ����������Ҫɾ����ѧ��ѧ�ţ�"); 
			scanf("%d",&number);
			p1 = head;
			while(p1->number!=number && p1->next!=NULL)  //������������ѧ�Ž��в��� 
			{
				p2=p1;
				p1=p1->next;
			}
			if(p1->number==number)   //�ҵ���ѧ�� 
			{
				if(p1==head)
				head=p1->next;
				else 
				p2->next=p1->next;
				free(p1);
				printf("Ddelete : %d\n",number);
				g_nNumber=g_nNumber-1;
			}
			system("pause");
			return head;
			/*
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
			 */
			 
		}
	else                //û���ҵ���ѧ��
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
	int number = 0;   //��¼�ɼ���ͬ������ 
	struct student *p1,*p2;
	if(head==NULL)    //��ָ������жϣ����Ƿ�Ϊ�� 
	{
		printf("\nThe list is NULL!\n");
		return head;
	}
	p1=head;
	while(p1 != NULL)  //�����������ճɼ����в��� 
	{
		if(p1->mark == score)
			number++;
		p1=p1->next;
	}
	
	if(number == 1)
	{
		p1 = head;
		while(p1->mark != score)  //�����������ճɼ����в��� 
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1==head)
			head=p1->next;
		else 
			p2->next=p1->next;
		free(p1);
		printf("Ddelete : %f\n",score);
		g_nNumber=g_nNumber-1;
		system("pause");
		return head;
	}
	else if(number > 1)
	{
		p1 = head;
		while( p1 != NULL && number >= 0)  //������������ѧ�Ž��в���
		{
			if(p1->mark == score) 
				{
					number--; 
					printf("%d\t%s\t%s\t%d\t%.2f\t%s\n",p1->number,p1->name,p1->gerden,p1->age,p1->mark,p1->ID);
				}
			p1=p1->next;
		}
		int number;
		printf("�ɼ�����ͬ����������Ҫɾ����ѧ��ѧ�ţ�"); 
		scanf("%d",&number);
		p1 = head;
		while(p1->number!=number && p1->next!=NULL)  //������������ѧ�Ž��в��� 
		{
			p2=p1;
			p1=p1->next;
		}
		if(p1->number==number)
		{
			if(p1==head)
				head=p1->next;
			else 
				p2->next=p1->next;
			free(p1);
			printf("Ddelete : %d\n",number);
			g_nNumber=g_nNumber-1;
		}
	} 
	else                //û���ҵ���ѧ��
		printf("%f is not been found!\n",score);
	system("pause");
	return head;
}

