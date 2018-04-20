#ifndef SCOREMGR_H
#define SCOREMGR_H
#include "Predefine.h"
#include "Score.h"
#include "Student.h"
#include "StudentMgr.h"
#include "CourseMgr.h"
#include "Course.h"
class ScoreMgr
{
	public:
		ScoreMgr();
		~ScoreMgr();
		int InitArrScoList();			//��ʼ���ɼ��������� 
		int PrintArr();					//������гɼ� 
		float SearchLowScore(int j);    //�ҳ�������ͷ� 
		float SearchHighScore(int j);	//�ҳ�������߷� 
		float AverageScore(int j);	    //�������ƽ���� 
		int PassNumber(int j);			//ͳ�Ƽ������� 
		int NoPassNumber(int j);		//ͳ�Ʋ��������� 
		void SearchStuInfor(int i); 	//��ѯһ���˵���Ϣ 
		void SearchStuScore(int i);		//��ѯ�����˵ĵ��Ƴɼ� 
		void SearchStuOneScore(int i);	//��ѯһ���˵ĳɼ� 
	protected:
		Score m_arrScoList[MAXSTUDENTNUMBER];
};

#endif

