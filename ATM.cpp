#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
int money=1000;
char b[6]={'1','2','3','4','5','6'};
int time=0;
void login();
void jiemian();
void savemoney();
void getmoney();
void query();
void Return();
void login()
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
			if(a[k]!=b[k])
				break;
			if(k==6)
			{
				printf("\n������ȷ���������\n");
				jiemian();
			}
			else
				{
					system("cls");
					printf("\n����������������룡\n");
					time++;
					if(time==3)
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
}
void jiemian()
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
		case 1:printf("\t\t\t\t\t\t\n��ѯ����\n");query();break;
		case 2:printf("\t\t\t\t\t\t\nȡ���\n");getmoney();break;
		case 3:printf("\t\t\t\t\t\t\n����\n");savemoney();break;
		case 4:printf("\t\t\t\t\t\t\n�˳�����\n");Return();break;
		}
	}
}
void query()
{
	system("cls");
	printf("\n\t\t\t\t\t\t�����˻����Ϊ%d\n",money);
	system("pause");
	return;
}
void getmoney()
{
	system("cls");
	int m;
	loop:
	printf("\n\t\t\t\t\t\t������Ҫȡ�Ľ�");
	scanf("%d",&m);
	if(m<=money)
	{
		money=money-m;
		printf("\t\t\t\t\t\t�����˻����Ϊ��%d\n",money);
	}
	else
	{
		printf("\t\t\t\t\t\t�����˻����㣬����������!\n");
		goto loop;
	}
	return;
}
void savemoney()
{
	system("cls");
	int m;
	printf("\n\t\t\t\t\t\t��������Ҫ����Ľ�");
	scanf("%d",&m);
	money=money+m;
	printf("\t\t\t\t\t\t�����˻����Ϊ��%d\n",money);
	return;
}
void Return()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t=======================" );
	puts("\t\t\t\t\t\t| ��л����ʹ�ã��ټ�! |");
	puts("\t\t\t\t\t\t=======================\n\n\n\n\n\n\n\n\n\n\n\n");
	exit(1);
}
int main()
{
	login();
}

