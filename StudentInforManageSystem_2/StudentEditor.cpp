#include "Predefine.h"

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
			printf("����������ѧ�š��������Ա����䡢�ɼ������֤����\n");
			scanf("%d%s%s%d%f%s",&p1->number,&p1->name,&p1->gerden,&p1->age,&p1->mark,&p1->ID);
			printf("The %d is  been editor!\n",num);
		}
	else
		printf("The %d is not been found!\n",num);
	system("pause");
	return head;
}

