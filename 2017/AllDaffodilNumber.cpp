#include <stdio.h>
int main()
{
	int r;
	scanf("%d",&r);
	int a,b,c;
	a=r/100;
	b=r%100/10;
	c=r%10;
	if(r==a*a+b*b+c*c)
	printf("%d��ˮ�ɻ�����\n",r);
	else
	printf("%d����ˮ�ɻ�����\n",r);
	return 0;
}
