#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int g_nNumber;  //�н����� 
int main(int args,char *argv[])
{
	int n,i,Max,Min,flag=0;
	int *arr;
	srand(time(0)) ;
	printf("\t\t\t����齱��������");
	scanf("%d",&n);
	printf("\t\t\t������������½�Min��");
	scanf("%d",&Min);
	printf("\t\t\t������������Ͻ�Max��");
	scanf("%d",&Max);
	arr=(int *)malloc(n*sizeof(int));
	system("cls");
	do
	{
		for(i=0;i<n;i++)
		{
			arr[i]=rand()%(Max-Min+1)+Min;  // ���� Min �� Max ���������Ϊ�齱���� 
			printf("\t\tp%d,his number is %d\n",i+1,arr[i]);
	 	} 
		g_nNumber=rand()%(Max-Min+1)+Min; // ���� Min �� Max ���������Ϊ�н����� 
		puts("Press any key to draw lottry...");
		system("pause");
	/******************************************************* 
		
		���齱�ߵĺ������н�������бȶԣ���������н�����
		����н������Լ��н��ߵı�� �����û���н��������
		�н����룬���Ҽ����齱��ֱ�������н�Ϊֹ���н��߿�
		ͬʱΪ���� 
		
	********************************************************/ 
		for(i=0;i<n;i++)
		if(arr[i]==g_nNumber)
		{
			printf("\t\tThe winter is : p%d,his number is %d\n",i+1,arr[i]);
			flag++;
		}
		if(flag==0)
		{
			puts("\t\t============================================");
			printf("\t\tNo one wins,the valid lottery number is : %d\n",g_nNumber);
			puts("\t\t============================================");
		}
		else
		{
			puts("\t\t===================================");
			printf("\t\t The valid lottery number is : %d\n",g_nNumber);
			puts("\t\t===================================");
		}
		system("pause");
		system("cls"); // �����Ļ 
	}while(flag==0);
	return 0;
}

