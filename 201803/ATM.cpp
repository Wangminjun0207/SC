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
int Interface_1();//����ѡ����� 
int Interface_C();//���Ĺ��ܽ��� 
int Interface_E();//Ӣ�Ĺ��ܽ��� 
int Savemoney_C();
int Getmoney_C();
int Query_C();
int Savemoney_E();
int Getmoney_E();
int Query_E();
int Return();
int Login()
{
	char a[20];
	int i=0,n=1,k;
	printf("\n\t\t\t\t\t\t��ӭʹ��ATM�Զ���ȡ���\n");
	printf("\n\t\t\t\t\t\t welcome to our bank��\n");
	printf("\n\t\t\t\t\t\t �����������˻�����\n\n\t\t\t\t\t  Please enter your account passwor��\n");
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
				printf("\n������ȷ���������\nThe password is correct, please continue!\n");
				Interface_1();
			}
			else
				{
					system("cls");
					printf("\n����������������룡\nPassword error, please re-enter.\n");
					g_nTime++;
					if(g_nTime==3)
					{
						system("cls");
						printf("\n\n\t\t\t\t\t�����������������࣬�����˻���������\nDue to too many password errors, your account has been locked!\n\n\n\n\n\n");
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

int Interface_1()
{
	int flag;
	system("cls");
	printf("\n\t\t\t\t\t\t ����ѡ��ϵͳ��������!\n");
	printf("\n\t\t\t\t\t\tPlase choose language!\n");
	puts("\t\t\t\t\t\t=======================");
	puts("\t\t\t\t\t\t| 1.����              |");
	puts("\t\t\t\t\t\t| 2.English           |");
	puts("\t\t\t\t\t\t| 3.�˳�/Exit         |");
	puts("\t\t\t\t\t\t=======================");
	scanf("%d",&flag);
	switch(flag)
		{
		case 1:Interface_C();break;
		case 2:Interface_E();break;
		case 3:Return();break;
		}
	return 0;
}

int Interface_C()
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
		puts("\t\t\t\t\t\t| 4.���ع���          |");
		puts("\t\t\t\t\t\t| 5.�˳�����          |");
		puts("\t\t\t\t\t\t=======================");
		printf("\n\t\t\t\t\t\t���ã���ѡ������Ҫ�ķ���\n");
		scanf("%d",&selectkey);
		switch(selectkey)
		{
		case 1:printf("\t\t\t\t\t\t\n��ѯ����\n");Query_C();break;
		case 2:printf("\t\t\t\t\t\t\nȡ���\n");Getmoney_C();break;
		case 3:printf("\t\t\t\t\t\t\n����\n");Savemoney_C();break;
		case 4:printf("\t\t\t\t\t\t\n���ع���\n");Interface_1();break;
		case 5:printf("\t\t\t\t\t\t\n�˳�����\n");Return();break;
		}
	}
	return 0;
}

int Interface_E()
{
	int selectkey;
	system("cls");
	while(1)
	{
		printf("\n");
		puts("\t\t\t\t\t\t=======================");
		puts("\t\t\t\t\t\t| 1.Query             |");
		puts("\t\t\t\t\t\t| 2.Withdraw          |");
		puts("\t\t\t\t\t\t| 3.Deposit           |");
		puts("\t\t\t\t\t\t| 4.Return            |");
		puts("\t\t\t\t\t\t| 5.Exit              |");
		puts("\t\t\t\t\t\t=======================");
		printf("\n\t\t\t\t\t\t Please select the service you need!\n");
		scanf("%d",&selectkey);
		switch(selectkey)
		{
		case 1:printf("\t\t\t\t\t\t\nQuery    :\n");Query_E();break;
		case 2:printf("\t\t\t\t\t\t\nWithdraw :\n");Getmoney_E();break;
		case 3:printf("\t\t\t\t\t\t\nDeposit  :\n");Savemoney_E();break;
		case 4:printf("\t\t\t\t\t\t\nReturn   :\n");Interface_1();break;
		case 5:printf("\t\t\t\t\t\t\nExit     :\n");Return();break;
		}
	}
	return 0;
 } 
 
int Query_C()
{
	system("cls");
	printf("\n\t\t\t\t\t\t�����˻����Ϊ%d\n",g_nMoney);
	system("pause");
	return 0;
}

int Getmoney_C()
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

int Savemoney_C()
{
	system("cls");
	int m;
	printf("\n\t\t\t\t\t\t��������Ҫ����Ľ�");
	scanf("%d",&m);
	g_nMoney=g_nMoney+m;
	printf("\t\t\t\t\t\t�����˻����Ϊ��%d\n",g_nMoney);
	return 0;
}

int Savemoney_E()
{
	system("cls");
	int m;
	printf("\n\t\t\t\tPlease enter the amount you want to deposit��");
	scanf("%d",&m);
	g_nMoney=g_nMoney+m;
	printf("\t\t\t\tYour account balance is %d.\n",g_nMoney);
	return 0;
}

int Getmoney_E()
{
	system("cls");
	int m;
	loop:
	printf("\n\t\t\t\tPlease input the amount you want to withdraw:");
	scanf("%d",&m);
	if(m<=g_nMoney)
	{
		g_nMoney=g_nMoney-m;
		printf("\t\t\t\t\t\tYour account balance is %d.\n",g_nMoney);
	}
	else
	{
		printf("\t\t\t\tYour account balance is insufficient, please re-enter!\n");
		goto loop;
	}
	return 0;
}

int Query_E()
{
	system("cls");
	printf("\n\t\t\t\t\t\tYour account balance is %d.\n",g_nMoney);
	system("pause");
	return 0;
}

int Return()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t====================================" );
	puts("\t\t\t\t\t\t| ��л����ʹ�ã��ټ�!              |");
	puts("\t\t\t\t\t\t| Thank you for your use, goodbye! |");
	puts("\t\t\t\t\t\t====================================\n\n\n\n\n\n\n\n\n\n\n\n");
	exit(1);
} 

int main()
{
	Login();
	return 0;
}

