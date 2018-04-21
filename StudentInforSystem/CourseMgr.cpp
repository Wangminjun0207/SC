#include "CourseMgr.h"
#include <fstream> 
CourseMgr::CourseMgr()
{
	char m_number[12];
	char m_name[32];
	char m_teacherName[10];
	char m_teacherTel[15];
	ifstream inputfile("coursefile.txt");
	for(int i=0;i<MAXCOURSENUMBER;i++)
	{
		if(!inputfile)
		{
			/*
			*�ж��ļ���ʧ�ܵ�ʱ����Ҫ˵�����ʲô�ļ�ʧ���ˣ���Ҫ��ɶ��飬�����е��ļ�������Ϣ�����������������ļ���ʾ��Ϣһ���ġ�����������ĺã������ж����������ļ����ڣ��Լ�����һ�����Ͳ������ˡ� 
			* ������ļ����߼�������������۶����ߵ��ģ�����������Ҫ����Ŀγ��� MAXCOURSENUMBER���������ļ�����С��MAXCOURSENUMBER�ģ�����ֻ��һ������������Ϣ��һ��������ģ������ⲿ�ִ�����ôд��������ģ�
			*����Ҫ�ڶ������ļ������еĿγ���Ϣ�Ժ�break��ѭ�������ļ��Ƿ������һ������inputfile.eof()�жϵģ��������ж�Ҳ�ǲ��Եġ�ͬ���ģ�StudentMgr��Ҳ��һ���ġ� 
			*/
			cout<<"���ļ�ʧ�ܣ�"<<endl;
			exit(0);	
		}
		inputfile>>m_number>>m_name>>m_teacherName>>m_teacherTel;
		Course cour(m_number,m_name,m_teacherName,m_teacherTel);
		m_arrCourList[i]=cour;
	} 
	inputfile.close(); 
}


CourseMgr::PrintArr()
{
	cout<<"�γ̱��  �γ�����      ��ʦ����   ��ʦ�绰"<<endl;
	for(int i=0;i<MAXCOURSENUMBER;i++)
	{ 
		cout<<"  "<<m_arrCourList[i].GetCourseNum()<<"	  "<<m_arrCourList[i].GetCourseName()<<"	"<<
		      m_arrCourList[i].GetTeachName()<<"	  "<<m_arrCourList[i].GetTeachTel()<<endl;	
	}
	return 0;
}
CourseMgr::~CourseMgr()
{
}
