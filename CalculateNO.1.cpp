#include <stdio.h>
float plus(float a,float b)
{
	float c;
	c=a+b;
	return c;
}
float minus(float a,float b)
{
   float c;
   c=a-b;
   return c;	
}
float multi(float a,float b)
{
	float c;
	c=a*b;
	return c;
}
float division(float a,float b)
{
	float c;
	c=a/b;
	return c;
}
int main()
{
	float a,b,c;
	int flag;
	do
	{
		printf("�ӷ�������1��\n");
		printf("����������2��\n");
		printf("�˷�������3��\n");
		printf("����������4��\n");
		printf("����������0��\n");
		scanf("%d",&flag);
		printf("������μ������ֵ��\n");
		scanf("%f %f",&a,&b);
	switch(flag)
	 {
		case 1:;c=plus(a,b);printf("�����е��Ǽӷ�������ǣ� %g\n",c);break;
		case 2:c=minus(a,b);printf("�����е��Ǽ���������ǣ� %g\n",c);break;
		case 3:c=multi(a,b);printf("�����е��ǳ˷�������ǣ� %g\n",c);break;
		case 4:c=division(a,b);printf("�����е��ǳ���������ǣ� %g\n",c);break;
		case 0:;break;
	 }	
	 printf("\n");
   }while(flag!=0);
}
