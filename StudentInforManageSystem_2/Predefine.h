#include <stdio.h>
#include <stdlib.h>
#include <string.h>           
#include <windows.h> 
      
int g_nNumber=0;   //����ȫ�ֱ��������ѧ������ 

 /*
 *����һ���ṹ�壬����Ϊstudent
 *��Ա��ѧ�š��������Ա����䡢�ɼ�
 */ 
struct student{
	int number;
	char name[20];
	char gerden[10];
	int age;
	float mark;
	char ID[20];
	struct student *next;
};

