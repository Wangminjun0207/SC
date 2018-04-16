#include "StudentMgr.h"
#include "Student.h"
#include <fstream>

StudentMgr::StudentMgr()
{
	int nGer;
	ofstream outfile("studentfile.txt");
	if(!outfile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		exit(0);	
	}
	for(int i=0;i<MAXSTUDENTNUMBER;i++)
	{
		if(i%2==0)
			nGer = 1;// 1 �������� 
		else
			nGer = 0;// 0 ����Ů�� 
		Student stu(001+i,"student",nGer,"�������2017-03��");
		m_arrStuList[i]=stu;
		outfile<<m_arrStuList[i].GetNumber()<<" "<<m_arrStuList[i].GetStuName()<<i<<" "<<
		m_arrStuList[i].GetStuGerden()<<" "<<m_arrStuList[i].GetStuGrade()<<endl;	
	} 
	outfile.close();		
}


int StudentMgr::PrintArr()
{
	for(int i=0;i<MAXSTUDENTNUMBER;i++)
	{
		cout<<m_arrStuList[i].GetNumber()<<" "<<m_arrStuList[i].GetStuName()<<i<<" "<<
			  m_arrStuList[i].GetStuGerden()<<" "<<m_arrStuList[i].GetStuGrade()<<endl;
	}
}

StudentMgr::~StudentMgr()
{
}
