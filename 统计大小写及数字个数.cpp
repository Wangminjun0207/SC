#include <stdio.h>
#include <string.h>
int main()
{
	int m,n,a,i,t;
	m=0,n=0,a=0;
	char ch[100];
	printf("������һ���ַ���\n");
	gets(ch);
	t=strlen(ch);
	for(i=0;i<t-1;i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
		 	{
				m++;
				continue;
			}
		else if(ch[i]>='A' && ch[i]<='Z')
			 {
				n++;
				continue;
		   	 }
			else 
				a++;
			
	}
	printf("��д��ĸ�У�%d��\nСд��ĸ�У�%d��\n�����ַ���%d��\n",n,m,a);
}
