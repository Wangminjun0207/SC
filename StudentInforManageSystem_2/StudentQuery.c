 #include "Predefine.h"
 
 /*����ѧ�Ų�ѯһ��ѧ����Ϣ���������*/ 
void Query_N(struct student *head)
 {
 	if(NULL == head)
 		exit(0);
	struct student *p1;
	p1=head;
	int num;
	printf("Please input the student number you want to query :");
	scanf("%d",&num);
	/*
	*���еĲ�ѯ����������ͬ����һ������û���ж������ǲ��ǿյģ�����һ������Ҳû�У���Ĳ�ѯ��ʧ�ܣ��ó�������ģ�
	*��������Ҫ�������������ʱ���ж������Ƿ�Ϊ�ա�
	*add by wangpeng@2018/4/12 
	*/
	while(p1->number!=num && NULL != p1->next)
	{
		p1 = p1->next;
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
 	if(NULL == head)
 		exit(0);
	struct student *p1;
	p1 = head;
	char name[20];
	printf("Please input the student name you want to query :");
	scanf("%s",&name);
	while((strcmp(name,p1->name)!=0) &&NULL != p1->next)
	{
		p1 = p1->next;
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
 	if(NULL == head)
 		exit(0);
	struct student *p1;
	p1 = head;
	float score;
	printf("Please input the student score you want to query :");
	scanf("%f",&score);
	while(p1->mark!=score &&NULL != p1->next)
	{
		p1 = p1->next;
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

