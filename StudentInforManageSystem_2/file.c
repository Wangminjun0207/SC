 #include "Predefine.h"
 extern int g_nNumber;
 
 void WriteToFile(struct student *head)
 {
 	FILE *fp; // 指向文件的指针 
 	struct student *p;// 指向结构体struct的指针 
 	if(NULL == head)
 	{
 		printf("\nThe list is NULL!\n");
		exit(0);// 退出程序，包含 stdlib.h 头文件	 }
	}
 	if((fp = fopen("student_file.txt","wb"))==NULL) // 打开文件并且进行判断，是否打开 
 	{
 		printf("Can not open the file!\n");
 		exit(0);// 退出程序，包含 stdlib.h 头文件 
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
 
 
 
struct student *ReadFromFile(struct student *head)
 {
 	FILE *fp;
 	struct student *p1,*p2;
 	if((fp = fopen("student_file.txt","rb"))==NULL) // 打开文件并且进行判断，是否打开 
 	{
 		printf("Can not open the file!\n");
 		exit(0);// 退出程序，包含 stdlib.h 头文件 
	}
	
	head=p1=p2=(struct student *)malloc(sizeof(struct student));
	fread(p1,sizeof(struct student),1,fp);
	while(!feof(fp))
	{
		g_nNumber=g_nNumber+1;
		p2->next=p1;
		p2=p1;	
		p1=(struct student *)malloc(sizeof(struct student));
		fread(p1,sizeof(struct student),1,fp);
	}
	p2->next=NULL;
	free(p1); 
	fclose(fp);
	return head;
  }
  

