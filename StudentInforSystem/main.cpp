#include "Predefine.h"
#include "Student.h"
#include "StudentMgr.h"
#include "Course.h"
#include "CourseMgr.h"
#include "ScoreMgr.h"
#include "ComposeMgr.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	//student manager��Course Manager�������Էŵ�ComposeMgr�����ʼ���� 
	StudentMgr smgr;			//������ͬѧ��ʼ�� 
	CourseMgr  coumgr;			//�����пγ̳�ʼ��		 
	ComposeMgr cmgr;           //����һ���ۺϹ�������� 
	cmgr.Manage();
	return 0;
}
