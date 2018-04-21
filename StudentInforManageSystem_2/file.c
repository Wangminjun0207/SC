 #include "Predefine.h"
 extern int g_nNumber;
 
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
 
 
/*
 *����ļ�������Ϊ�գ����Ļ����������
 */ 
struct student *ReadFromFile(struct student *head)
 {
 	FILE *fp; 
 	struct student *p1,*p2;
 	if((fp = fopen("student_file.txt","rb"))==NULL) // ���ļ����ҽ����жϣ��Ƿ�� 
 	{
 		printf("Can not open the file!\n");
 		exit(0);// �˳����򣬰��� stdlib.h ͷ�ļ� 
	}
	
	head=p1=p2=(struct student *)malloc(sizeof(struct student));
	if(NULL != p1)
		fread(p1,sizeof(struct student),1,fp);
	else
		exit(0);
	while(!feof(fp))
	{
		g_nNumber = g_nNumber + 1;
		p2->next=p1;
		p2=p1;	
		p1=(struct student *)malloc(sizeof(struct student));
		/*
		*  �κ�ʱ�����malloc�ˣ�һ��Ҫ�ж�malloc�Ľ���ǲ���NULL�����������Ҫ��һ��if (NULL != p1),Ȼ������ִ�У�����Ҫ�����ڴ����ʧ��
		*  add by wangpeng@2018/4/12 
		*/
		if(NULL != p1)
			fread(p1,sizeof(struct student),1,fp);
		else
			exit(0);
	}
	p2->next = NULL;
	free(p1); 
	fclose(fp);
	return head;
  }
  

