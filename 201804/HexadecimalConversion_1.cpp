#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
int countw;
//************************
int start()//��ʼ����
{
	system("color 3f");
	printf("\t****************************\n");
	printf("\t============================\n");
    printf("\t====��1.ʮ����ת�����ơ�====\n");
	printf("\t====��2.������תʮ���ơ�====\n");
	printf("\t====��3.ʮ����ת�˽��ơ�====\n");
	printf("\t====��4.�˽���תʮ���ơ�====\n");
	printf("\t====��5.ʮ����תʮ�����ơ�==\n");
	printf("\t====��6.ʮ������תʮ���ơ�==\n");
	printf("\t============================\n");
	printf("\t****************************\n");
		return 0;
}
//***************************************

int ten_two1(double x)//��������
{int n=(int)x;
	if(n>=0)
	{
		int temp=n/2;
		int count=0,a[32];
		a[count]=n%2;
		while(temp!=0)//������Ϊ��;�㷨����2ȡ��
		{
			a[count+1]=temp%2;
			temp=temp/2;
			count++;
		}
		printf("%f�Ķ�������:",x);
		for(;count>=0;count--)
			printf("%d",a[count]);
	}
	if(n<0)
	{
		long t=-n;
		int temp;
		int count=0,a[32];
		temp=t/2;
		a[count]=t%2;
		while(temp!=0)
		{
			a[count+1]=temp%2;
			temp=temp/2;
			count++;
		}
		printf("%f�Ķ�������:-",x);
		for(;count>=0;count--)
			printf("%d",a[count]);
	}
     printf(".");
	return 0;
}
//**********************************
int ten_two2(double num)//С������
{   num=fabs(num);
	long x=(long)num;
	num=num-x;
	int n[32]={0},i=0,j;
	num=num*2;
	n[i]=(int)num;
	num=num-(int)num;


		while(i<countw-1)//������λС��
		{    i++;
			num=num*2;
			n[i]=(int)num;
			num=num-(int)num;//ȡС������
		}
		for(j=0;j<=i;j++)
			printf("%d",n[j]);
		
	return 0;
}
//***************************
//������ת��ʮ����
int two_ten()
{system("cls");
	printf("�����������:");
    char a[16],b[16],c[16];
	scanf("%s",a);
	double temp=0;
	int sum=0,i=0,j=0,k=0,t;
	//��ȡ�������ֵ�����b
	while(a[i]!='\0')
	{
		b[j]=a[i];
		j++;
		i++;
		if(a[i]=='.')
			break;
	}
	b[j]='\0';//�ַ�����ӽ����ַ�
    t=j+1;//ֱ��ȡ��С��������������c

	while(a[t]!='\0')
	{
		c[k]=a[t];
		k++;
		t++;
	}
	c[k]='\0';
	//printf("\t%s\t",c);


	for(i=strlen(b)-1;i>=0;i--)
	{
		if(b[i]=='1')
		{
			sum+=(int)pow(2,i+1);
		}
	}
	//С������
     i=0;
	while(c[i]!='\0')
	{
		temp+=pow(2,-(i+1));
		i++;
	}

	
	printf("%s��ʮ������:%f",a,sum+temp);
return 0;}
//************ʮ����ת������
int ten_eight()
{
	system("cls");
	printf("������ʮ������:");
	double x;
	int n,count,a[32];
	scanf("%lf",&x);
    printf("������С�������λ��:");
    scanf("%d",&countw);
//****************��������
	n=(int)x;
	if(n>=0)
	{
		count=0;
		a[count]=n%8;
		n=n/8;
		while(n!=0)
		{
			count++;
			a[count]=n%8;
			n=n/8;
		}
		printf("%f�İ˽�������",x);
		for(;count>=0;count--)
		{
			printf("%d",a[count]);
		}
//****С������
		double m;
		m=x-(int)x;//printf("\t%f\t",m);
		int b[16],i=0;
		b[i]=(int)(m*8);//��8ȡ��
		m=m*8-b[i];	
		while(i<=countw-2)
		{
			i++;
			b[i]=(int)(m*8);
			m=m*8-b[i];
		}
		printf(".");
		//printf("i=%d\n",i);
		for(int j=0;j<=i;j++)
			printf("%d",b[j]);

	}
return 0;}

//�˽���תʮ����
int eight_ten()
{    char w[16]={0};
     int a=0,n;
	printf("������˽�����:");
	scanf("%s",&w);
//	puts(w);
	n=strlen(w);
	for(int i=0;i<=strlen(w)-1;i++)
	{
		a+=(w[i]-'0')*pow(8,n-1);
		n--;
	}
	printf("%s��ʮ����Ϊ:%d",w,a);
	
return 0;}


int ten_sixteen()
{   int n,temp,i=0,j,t;
    char  a[16]; 
	system("cls");
	printf("������ʮ������:");
	scanf("%d",&n);
	t=n%16;
	if(t>9)
		a[i]=t+'a'-10;
	else
		a[i]=t+'0'-0;
	temp=n/16;
	while(temp!=0)
	{
		i++;
		t=temp%16;
		if(t>9)
			a[i]=t+'a'-10;
		else
			a[i]=t+'0'-0;
		temp=temp/16;
	}
	for(j=i;j>=0;j--)
	{
		printf("%c",a[j]);
	}
return 0;}


int sixteen_ten()
{   
	system("cls");
	int n=0,i,t;
	char a[16];
	puts("������ʮ�����Ƶ���:");
	scanf("%s",a);
	t=strlen(a);
	for(i=0;i<=strlen(a)-1;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{	n+=(a[i]-48)*pow(16,t-1);

		}
		else
		{
			n+=(a[i]-87)*pow(16,t-1);
	
		}
		t--;
	}
	printf("\n%s��ʮ������Ϊ:%d\n",a,n);
	return 0;
}


int main()
{  
loop:
	start();
	 int choice,j;//ѡ�����ת��
	 double num;
	 printf("ѡ�����ת��:");
	 scanf("%d",&choice);


	 switch(choice)
	 {
	 case 1:
	 system("cls");
     printf("������Ҫת��������:");
	 scanf("%lf",&num);
  	 printf("������С�������λ��:");
     scanf("%d",&countw);
	 ten_two1(num);
	 ten_two2(num);
	 printf("\n��1���أ�2�˳�\n");
	 scanf("%d",&j);
	 if(j==1)
	 {system("cls");
		 goto loop;
	 }
	 break;
	 case 2:
		 two_ten();
		 printf("\n��1���أ�2�˳�\n");
		 scanf("%d",&j);
		 if(j==1)
		 {system("cls");
		 goto loop;
		 }
		 break;
	case 3:
		 ten_eight();
		 printf("\n��1���أ�2�˳�\n");
		 scanf("%d",&j);
		 if(j==1)
		 {system("cls");
		 goto loop;
		 }
		 break;
	case 4:
		system("cls");
		 eight_ten();
         printf("\n��1���أ�2�˳�\n");
		 scanf("%d",&j);
		 if(j==1)
		 {system("cls");
		 goto loop;
		 }
		 break;
	case 5:
		ten_sixteen();
		printf("\n��1���أ�2�˳�\n");
		scanf("%d",&j);
		if(j==1)
		 {system("cls");
		 goto loop;
		 }
		 break;
	case 6:
		sixteen_ten();
      	printf("\n��1���أ�2�˳�\n");
		scanf("%d",&j);
		if(j==1)
		 {system("cls");
		 goto loop;
		 }
		 break;


	 }



return 0;
}
