#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int Ascending(int*);  
int Descending(int*);
int Interface();
int g_nNumber;
int g_nX;
int main(int argc, char *argv[])
{
	int *arr,n;
	srand(time(0)) ;
	printf("���������鳤�ȣ�");
	scanf("%d",&g_nNumber);
	arr=(int *)malloc(g_nNumber*sizeof(int)); //�����ڴ� 
	for(int i=0;i<g_nNumber-1;i++)
	arr[i]=rand()%9901+100;
	printf("ԭ����Ϊ��\n");
	for(int i=0;i<g_nNumber-1;i++)
	{
		printf("%d\t",arr[i]);
		if((i+1)%10 == 0)
		printf("\n");
	}
	printf("\n��������Ҫ��������֣�100~10000����");
	scanf("%d",&g_nX);
	do{
	system("cls");
	Interface();
	scanf("%d",&n);
	switch(n){
		case 1:Ascending(arr);break;
		case 2:Descending(arr);break;
		case 3:exit(1); 
		default:printf("ѡ��Ĺ�������\n");
	}
	printf("����%d������������Ϊ��\n",g_nX);
	for(int i=0;i<g_nNumber;i++)
	{
		printf("%7d",arr[i]);
		if((i+1)%10 == 0)
		printf("\n");
	}
	printf("\n");
	system("pause");
	}while(n==1 || n==2);
	return 0;
}

/* ������������ */ 
int Ascending(int *p)
{
	int temp;
	for(int i=1;i<=g_nNumber-2;i++)
	for(int j=0;j<g_nNumber-i-1;j++)
	{
		if(p[j]>p[j+1])
		{
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
		}
		else
		; 
	}
	int i=g_nNumber-2;
	while(i>=0 && p[i]>g_nX)
	{
		p[i+1]=p[i];
		i--;
	}
	p[i+1]=g_nX;
	return 0;
}

/*  ���н�������  */
int Descending(int *p)
{
	int temp;
	for(int i=1;i<=g_nNumber-2;i++)
	for(int j=0;j<g_nNumber-i-1;j++)
	{
		if(p[j]<p[j+1])
		{
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
		}
		else
		; 
	}
	int i=g_nNumber-2;
	while(i>=0 && p[i]<g_nX)
	{
		p[i+1]=p[i];
		i--;
	}
	p[i+1]=g_nX;
	return 0;
}

//�˵����� 
int Interface()
{
	puts("��ѡ����Ҫ���Ĳ���");
	puts("==================="); 
	puts("1.����             ");
	puts("2.����             ");
	puts("3.�˳�             ");
	puts("===================");
	return 0;
}

