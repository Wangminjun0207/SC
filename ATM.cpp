#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

/************************************************
���ﶨ����һЩȫ�ֱ���������û�����⣬��һ����������������������ģ�ȫ�ֱ�����Ҫ��g_��ͷ��������ʽ��
���磬int money=1000;Ӧ����int g_nMoney = 1000;
ԭ���������֪�������Ǹ�ȫ�ֱ���,��Ϊʲô��Moneyǰ���n�أ�
����Ϊ��һ��������淶����ͱ�����n����i��ʼ����������l��ʼ��ָ����p��ʼ���ַ���b��ʼ�����ַ�����str��ʼ����������Arr��ͷ�ģ��������ϰ�� 

*************************************************/
int g_nMoney=1000;    //g_nMoney
char g_bArr[6]={'1','2','3','4','5','6'};  //g_bArr
int g_nTime=0;        //g_iTime����g_nTime. 

/************************************************
���ﶨ���ȫ�ֺ�������Ҫ����������Ҳû�����⣬������Ӧ������ô���void���ͣ���ס��void����������Ҫ�ã���һ����int���ͣ��ں���ִ�гɹ��� return 0,���ɹ�returnһ��ֵ������-1��-10001��-10002�ȵȣ�������֪������������ˡ�
����дlogin
int UserLogin()
{
     int nErrorCode = -1;
	 if ���û��������ڣ�
	 {
	   nErrorCode = -10001;
	 }
	 elseif(�������)
	 {
	    nErrorCode = -10002;
	 }
	 else
	 {
	   nErrorCode = 0;
     }     
     return nErrorCode;	  
}


��������ĺ�������int�Ĺ����ɣ����⣬��������Ҫ��ƴ������Ҫ��ƴ������Ҫ��ƴ������������ 
*************************************************/

 

int Login();
int Interface();
int Savemoney();
int Getmoney();
int Query();
int Return();
int Login()
{
	char a[20];
	int i=0,n=1,k;
	printf("\n\t\t\t\t\t\t��ӭʹ��ATM�Զ���ȡ���\n");
	printf("\n\t\t\t\t\t\t welcome to our bank��\n");
	printf("\n\t\t\t\t\t\t  �����������˻����룺\n");
	for(n=1;n<=3;n++)
	{
		loop:
		while((a[i]=getch())!=13)
		{
			i=i+1;
			printf("*");
		}
		for(k=0;k<6;k++)
			if(a[k]!=g_bArr[k])
				break;
			if(k==6)
			{
				printf("\n������ȷ���������\n");
				Interface();
			}
			else
				{
					system("cls");
					printf("\n����������������룡\n");
					g_nTime++;
					if(g_nTime==3)
					{
						system("cls");
						printf("\n\n\t\t\t\t\t�����������������࣬�����˻���������\n\n\n\n\n\n");
						system("pause");
						Return();
					} 
					i=0;
					goto loop; 
				} 
			exit(1);
	}
	return 0;
}
int Interface()
{
	int selectkey;
	system("cls");
	while(1)
	{
		printf("\n");
		puts("\t\t\t\t\t\t=======================");
		puts("\t\t\t\t\t\t| 1.��ѯ����          |");
		puts("\t\t\t\t\t\t| 2.ȡ���          |");
		puts("\t\t\t\t\t\t| 3.����          |");
		puts("\t\t\t\t\t\t| 4.�˳�����          |");
		puts("\t\t\t\t\t\t=======================");
		printf("\n\t\t\t\t\t\t���ã���ѡ������Ҫ�ķ���\n");
		scanf("%d",&selectkey);
		switch(selectkey)
		{
		case 1:printf("\t\t\t\t\t\t\n��ѯ����\n");Query();break;
		case 2:printf("\t\t\t\t\t\t\nȡ���\n");Getmoney();break;
		case 3:printf("\t\t\t\t\t\t\n����\n");Savemoney();break;
		case 4:printf("\t\t\t\t\t\t\n�˳�����\n");Return();break;
		}
	}
	return 0;
}
int Query()
{
	system("cls");
	printf("\n\t\t\t\t\t\t�����˻����Ϊ%d\n",g_nMoney);
	system("pause");
	return 0;
}
int Getmoney()
{
	system("cls");
	int m;
	loop:
	printf("\n\t\t\t\t\t\t������Ҫȡ�Ľ�");
	scanf("%d",&m);
	if(m<=g_nMoney)
	{
		g_nMoney=g_nMoney-m;
		printf("\t\t\t\t\t\t�����˻����Ϊ��%d\n",g_nMoney);
	}
	else
	{
		printf("\t\t\t\t\t\t�����˻����㣬����������!\n");
		goto loop;
	}
	return 0;
}
int Savemoney()
{
	system("cls");
	int m;
	printf("\n\t\t\t\t\t\t��������Ҫ����Ľ�");
	scanf("%d",&m);
	g_nMoney=g_nMoney+m;
	printf("\t\t\t\t\t\t�����˻����Ϊ��%d\n",g_nMoney);
	return 0;
}
int Return()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t=======================" );
	puts("\t\t\t\t\t\t| ��л����ʹ�ã��ټ�! |");
	puts("\t\t\t\t\t\t=======================\n\n\n\n\n\n\n\n\n\n\n\n");
	exit(1);
}
int main()
{
	Login();
	return 0;
}

