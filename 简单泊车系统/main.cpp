#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include "car.h"
int g_nCarNumber = 0;			//ͣ����Ŀǰͣ�������� 
extern struct Car *ParkCar(struct Car *head);
extern void WriteToFile(struct Car *head);
extern struct Car *ReadFromFile(struct Car *head);
extern void WriteToFile_1(struct Car *car);
extern struct Car *TakeCar(struct Car *head);
extern void Interface();
extern void Exit();
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	struct Car *head,*head_1;
	head = head_1 = NULL;
	head =  ReadFromFile(head);
	int selectkey;
	Interface();
	scanf("%d",&selectkey);
	do
	{
		switch(selectkey)
		{
		case 1:system("cls");
			   printf("��ѡ�����ͣ������\n\n");
			   head_1 = ParkCar(head);
			   head  = head_1;
			   break;
		case 2:system("cls");
			   printf("��ѡ�����ȡ������\n\n");
			   head_1 = TakeCar(head);
			   head  = head_1;
			   break;
		case 3:system("cls");
			   printf("��ѡ����ǲ�ѯ��¼����\n\n");
			   break;
		case 4:system("cls");
			   printf("��ѡ�����ͣ���������ѯ����\n\n");
			   break;
		case 0:system("cls");
		       Exit();
			   break;
		}
	}while(selectkey != 0); 
	return 0;
}
