#include <stdio.h>
long Fact(int);
long Comb(int , int);
int main(int argc, char *argv[])
{
	int m,k;
	do{
		puts("Please input m,k :");
		scanf("%d%d",&m,&k);
	}while(m<0 || k<0 || m<k);
	printf("%ld\n",Comb(m,k));
	return 0;
} 
/*******************************************
���������������´����滻 :
int main(int argc, char *argv[])
{
	int m,k;
	long s; 
	do{
		puts("Please input m,k :");
		scanf("%d%d",&m,&k);
	}while(m<0 || k<0 || m<k);
	s=Comb(m,k);
	printf("%ld\n",s);
	return 0;
} 
*******************************************/
long Comb(int a, int b)
{
	long result;
	result = Fact(a)/(Fact(b)*Fact(a-b));
	return result;
}

long Fact(int a)
{
	long result;
    if(a==0 || a==1)
		return 1;
	else
		result = a*Fact(a-1);
	return result;
}
/***********************************************
���ú����ĵݹ����������Ҳ��������һ�´����滻��
 long Fact(int a)
{
	long result=1;
    for(int i=1;i<a;i++)
    result = result * i;
	return result;
}
����Ҳ��ȫ����ʵ�ֽ׳˼���Ĺ��� 
************************************************/ 
