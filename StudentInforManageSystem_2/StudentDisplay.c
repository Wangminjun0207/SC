#include "Predefine.h"

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
