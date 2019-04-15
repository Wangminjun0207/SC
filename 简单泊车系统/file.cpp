#include <stdio.h>
#include <stdlib.h>
#include "car.h"
extern int g_nCarNumber;
 
void WriteToFile(struct Car *head)
 {
 	FILE *fp; // ָ���ļ���ָ�� 
 	struct Car *p;// ָ��ṹ��struct��ָ�� 
 	if(NULL == head)
 	{
 		printf("\nThe list is NULL!\n");
		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ�	 }
	}
 	if((fp = fopen("parkCar_file.txt","w"))==NULL) // ���ļ����ҽ����жϣ��Ƿ�� 
 	{
 		printf("Can not open the file!(parkCar_file.txt)\n");
 		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ� 
	}
	p = head;
	while(p != NULL)
	{
		fprintf(fp,"%s %s %s %s %s %s",p->parkingNumber,p->carNmber,p->carHost,p->carType,p->parkDate,p->parkTime);
		p = p->next;
	}; 
	fclose(fp);
	printf("File write finished!\n");
 }

struct Car *ReadFromFile(struct Car *head)
 {
 	FILE *fp; 
 	struct Car *p1,*p2;
 	if((fp = fopen("parkCar_file.txt","r"))==NULL) // ���ļ����ҽ����жϣ��Ƿ�� 
 	{
 		printf("Can not open the file!(parkCar_file.txt)\n");
 		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ� 
	}
	head = p2 = p1 = (struct Car *)malloc(sizeof(struct Car));
	while(!feof(fp))
	{

		if(NULL != p1)
			fscanf(fp,"%s%s%s%s%s%s",p1->parkingNumber,p1->carNmber,p1->carHost,p1->carType,p1->parkDate,p1->parkTime);
		else
			exit(0);	
		p1=(struct Car *)malloc(sizeof(struct Car));
		p2->next = p1;
		p2 = p1;
		g_nCarNumber++;
	}
	p2->next = NULL;
	free(p1); 
	fclose(fp);
	return head;
  }
  
void WriteToFile_1(struct Car *car)
 {
 	FILE *fp; // ָ���ļ���ָ�� 
 	struct Car *p;// ָ��ṹ��struct��ָ�� 
 	if(NULL == car)
 	{
 		printf("\nThe list is NULL!\n");
		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ�	 }
	}
 	if((fp = fopen("recordDate_file.txt","a"))==NULL) // ���ļ����ҽ����жϣ��Ƿ�� 
 	{
 		printf("Can not open the file!(recordDate_file.txt)\n");
 		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ� 
	}
	p = car;
	fprintf(fp,"%s %s %s %s %s %s %s %s %f",p->parkingNumber,p->carNmber,p->carHost,p->carType,p->parkDate,p->parkTime,p->takeDate,p->takeTime,p->parkCarCost); 
	fclose(fp);
	printf("File write finished!\n");
 }
 

