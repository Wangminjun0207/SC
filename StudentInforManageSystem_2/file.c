 #include "Predefine.h"
 
 void WriteToFile(struct student *head)
 {
 	FILE *fp; // ָ���ļ���ָ�� 
 	struct student *p;// ָ��ṹ��struct��ָ�� 
 	if(NULL == head)
 	{
 		printf("\nThe list is NULL!\n");
		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ�	 }
	}
 	if((fp = fopen("student_file.txt","wb"))==NULL) // ���ļ����ҽ����жϣ��Ƿ�� 
 	{
 		printf("Can not open the file!\n");
 		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ� 
	}
	p = head;
	while(p != NULL)
	{
		fwrite(p,sizeof(struct student),1,fp);
		p = p->next;
	}; 
	fclose(fp);
	printf("File write finished!\n");
 }
 
 void ReadFromFile(struct student *head)
 {
 	FILE *fp;
  } 
