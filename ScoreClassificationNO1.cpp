#include <stdio.h>
int main()
{
	int a;
	printf("������һ��0~100֮����Ч��(����)������\n");
	scanf("%d",&a);
	if (a<60)
	{
		printf("%d������",a);
	}
	else
	{
		if (a<=80)
		{
			printf("%d�Ǽ���",a);
		}
		else
		{
			if (a<=100)
			{
				printf("%d�����㣡",a);
			}
			else
			{
				printf("������ĳɼ�����");
			}
		}
	}
	 
 } 
