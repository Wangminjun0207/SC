#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Guess()
{
	int guess;
	int magic;
	int counter = 0;
	srand(time(0));
	magic = rand()%11;
	do
	{
		counter++;
		printf("��������Ҫ�µ����֣� 0~10 ����");
		scanf("%d",&guess);
		if(guess == magic)
		{
			printf("���¶��ˣ�\n");
			break;
		}
		else if(guess > magic)
		{
			printf("���µ�̫���ˣ�\n");
			continue; 
		}
		else
		{
			printf("���µ�̫С�ˣ�\n");
			continue; 
		}
	}while(counter < 5); 	
	return 0;
}

int Judge()
{
	return 0;
}
int main()
{
	Guess();
	Judge();
	return 0;
}
