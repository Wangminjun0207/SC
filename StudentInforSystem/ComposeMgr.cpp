#include "ComposeMgr.h"
#include <fstream>
void Interface_1();
void Interface_2();
void Interface_3();
void Interface_4();
void AnalyzeOne();
void InterfaceEnd();
//ScoreMgr scoMgr;


ComposeMgr::ComposeMgr()
{
	
}

ComposeMgr::~ComposeMgr()
{
}
ComposeMgr::Manage()
{
	scoMgr.InitArrScoList();
	StudentMgr stumgr;
	int selectkey;
	do
	{
		int number;
		system("cls");
		Interface_1();
		cin>>selectkey;
		switch(selectkey)
		{
			case 1:system("cls");
				   cout<<"ѡ���ѯѧ���ɼ����ܣ�"<<endl<<endl;
				   cout<<"������ѧ�ţ�";
				   cin>>number; 
				   scoMgr.SearchStuOneScore(number-1);
				   system("pause");
				   break;
			case 2:system("cls");
				   cout<<"ѡ���������ѧ����Ϣ���ܣ�"<<endl<<endl;
				   stumgr.PrintArr();
				   system("pause");
				   break;
			case 3:system("cls");
				   cout<<"ѡ��������Ƴɼ����ܣ�"<<endl<<endl;
				   AnalyzeOne();
				   break;
			case 4:system("cls");
				   cout<<"ѡ���ѯѧ����Ϣ���ܣ�"<<endl<<endl;
				   cout<<"������ѧ�ţ�";
				   cin>>number; 
				   scoMgr.SearchStuInfor(number-1);
				   system("pause");
				   break;
			case 5:system("cls");
				   cout<<"ѡ��������гɼ����ܣ�"<<endl<<endl; 
				   scoMgr.PrintArr();
				   system("pause");
				   break;
			case 6:system("cls");
				   cout<<"ѡ��������Ƴɼ����ܣ�"<<endl<<endl;
				   Interface_4(); 
				   cout<<"��ѡ��γ̣�";
				   cin>>number;
				   scoMgr.SearchStuScore(number-1);
				   system("pause");
				   break;
			case 0:system("cls");
				   InterfaceEnd();
				   break;
		}
	}while(selectkey != 0);
}

//һ���˵����������߸����� 
void Interface_1()
{
	cout<<"\t1.��ѯѧ���ɼ�"<<endl;
	cout<<"\t2.���ѧ����Ϣ"<<endl;
	cout<<"\t3.�������Ƴɼ�"<<endl;
	cout<<"\t4.��ѯѧ����Ϣ"<<endl;
	cout<<"\t5.������гɼ�"<<endl;
	cout<<"\t6.������Ƴɼ�"<<endl;
	cout<<"\t0.�˳�����ϵͳ"<<endl;
	cout<<"\t��ѡ����Ҫ�Ĺ��ܣ�";
}


//�����˵������������ֹ��� 
void Interface_2()
{
	cout<<"\t1.�����߷�"<<endl;
	cout<<"\t2.�����ͷ�"<<endl;
	cout<<"\t3.���ƽ����"<<endl;
	cout<<"\t4.�����������"<<endl;
	cout<<"\t5.����ҿ�����"<<endl;
	cout<<"\t0.�����ϼ��˵�"<<endl;
	cout<<"\t��ѡ����Ҫ�Ĺ��ܣ�";
 }


//�����˵��������¾��ֹ���
/*
*����Ϊʲô�����ļ���ȡ��Ҫд��������ǿ������õġ� 
*/ 
void Interface_3()
{
	cout<<"\t1.���Դ���"<<endl;
	cout<<"\t2.��ɢ��ѧ"<<endl;
	cout<<"\t3.�ߵ���ѧ"<<endl;
	cout<<"\t4.�������"<<endl;
	cout<<"\t5.��ѧӢ��"<<endl;
	cout<<"\t6.��ѧ����"<<endl;
	cout<<"\t7.��ѧ����"<<endl;
	cout<<"\t8.���ִ�ʷ"<<endl;
	cout<<"\t0.�����ϼ��˵�"<<endl;
	cout<<"\t��ѡ����Ҫ�Ĺ��ܣ�";
 }
 
 
 //�����˵��������°��ֹ���
 /*
*����Ϊʲô�����ļ���ȡ��Ҫд��������ǿ������õġ� 
*/ 
void Interface_4()
{
	cout<<"\t1.���Դ���"<<endl;
	cout<<"\t2.��ɢ��ѧ"<<endl;
	cout<<"\t3.�ߵ���ѧ"<<endl;
	cout<<"\t4.�������"<<endl;
	cout<<"\t5.��ѧӢ��"<<endl;
	cout<<"\t6.��ѧ����"<<endl;
	cout<<"\t7.��ѧ����"<<endl;
	cout<<"\t8.���ִ�ʷ"<<endl;
 }
void InterfaceEnd()
{
	cout<<endl<<endl<<endl<<"\t\t\t\t\t====================================="<<endl;
	cout<<"\t\t\t\t\t|                                   |"<<endl;
	cout<<"\t\t\t\t\t|        ��л����ʹ�ã��ټ���       |"<<endl;
	cout<<"\t\t\t\t\t|  Thank you for your use,goodbye!  |"<<endl; 
	cout<<"\t\t\t\t\t|                                   |"<<endl;
	cout<<"\t\t\t\t\t====================================="<<endl<<endl<<endl<<endl; 
}

void AnalyzeOne()
{
	scoMgr.InitArrScoList();
	/*
	 *ΪʲôҪ��ÿ��ʹ�óɼ������ʱ���ٴγ�ʼ�� 
	 *scoMgr��������ʲôԭ�� 
	 *����ΪAnalyzeOne���������ȫ�ֵĺ��������Ƕ�����ComposeMgr������ģ��������ڷ��� scoMgr��ʱ����ʵ�Ƿ��ʵ�����ļ���ͷ�����scoMgr��������ComposeMgr����Ǹ���Ա�����ԣ������һ������Ҫ����ComposeMgr�����ԱscoMgr��
	 *����Ҫ�����AnalyzeOne��Ϊ���Ա���������߶���һ��ȫ��ָ��ָ��������Ա��scoMgr�����߰�scoMgr�����һ����̬��Ա����һ����̬����ȫ�ֵ��á�
	 *add by lottiwang@2018/04/21 
	 */ 
	int selectkey_1;
   	do
   	{
   		Interface_3();
   		cin>>selectkey_1;
   		if(selectkey_1 == 0)
   			break;
   		system("cls");
   		int selectkey_2;
   		do
   		{
   			Interface_2();
	   		cin>>selectkey_2; 
	   		switch(selectkey_2)
			{
				case 1:system("cls");
					   cout<<"ѡ�������߷ֹ��ܣ�"<<endl<<endl;
					   cout<<"��߷֣�"<<scoMgr.SearchHighScore(selectkey_1-1)<<"��"<<endl<<endl;
					   system("pause");
					   break; 
				case 2:system("cls");
					   cout<<"ѡ�������ͷֹ��ܣ�"<<endl<<endl;
					   cout<<"��ͷ֣�"<<scoMgr.SearchLowScore(selectkey_1-1)<<"��"<<endl<<endl;
				       system("pause");
				       break; 
				case 3:system("cls");
					   cout<<"ѡ�����ƽ���ֹ��ܣ�"<<endl<<endl;
					   cout<<"ƽ���֣�"<<scoMgr.AverageScore(selectkey_1-1)<<"��"<<endl<<endl; 
					   system("pause");
					   break; 
				case 4:system("cls");
					   cout<<"ѡ����������������ܣ�"<<endl<<endl;
					   cout<<"����������"<<scoMgr.PassNumber(selectkey_1-1)<<"��"<<endl<<endl; 
					   system("pause");
					   break; 
				case 5:system("cls");
					   cout<<"ѡ������ҿ��������ܣ�"<<endl<<endl;
					   cout<<"�ҿ�������"<<scoMgr.NoPassNumber(selectkey_1-1)<<"��"<<endl<<endl;
					   system("pause");
					   break; 
				case 0:system("cls");
					   break; 
		   }
		}while(selectkey_2 != 0);
	}while(selectkey_1 != 0);	
} 
