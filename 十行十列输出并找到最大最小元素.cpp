#include <stdio.h>
#include <stdlib.h> //����������������� 
#include <time.h>   //����ʹ������������ 
int main()
{
	int a[10][10],max,min;
	srand(time(0));
	printf("10��10�ж�ά�������Ϊ��\n"); 
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++)
			{
				a[i][j]=rand()%100;
				printf("a[%d][%d]=%d\t",i,j,a[i][j]);
			if((j+1)%5==0)
				printf("\n");
			}
			max=min=a[0][0];
		for(int i=0;i<10;i++)
			for(int j=0;j<10;j++)
			{
			if(max<a[i][j])
				max=a[i][j];
			if(min>a[i][j])
				min=a[i][j];
			}
			printf("��СԪ�أ� %d \n���Ԫ�أ� %d\n",min,max);	
}
