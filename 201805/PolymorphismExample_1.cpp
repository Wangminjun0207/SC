/*
 *�������òμ������˶��ᣬ��Ļʽ��һ��������ʽ��
 *����������ȥ¶¶��������ֻ��һ����ȥ��������
 *�Ǿ���ץ�ξ���
 */
 

#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
using namespace std;
class Wang
{
	public:
		string m_Name;
		Wang(string _name):m_Name(_name) {}
		virtual void say() {}
}; 

class Wang_brother : public Wang
{
	public:
		Wang_brother(string _name):Wang(_name){}
		virtual void say()
		{
			cout<<"I'm "<<m_Name<<", I have three sports: boxing, fencing and wrestling !"<<endl;
		}
		void boxing(){ cout<<"boxing"<<endl;}
		void fencing(){ cout<<"fencing"<<endl;}
		void wrestling(){ cout<<"wrestling"<<endl;}
};

class Wang_sister : public Wang
{
	public:
		Wang_sister(string _name):Wang(_name){}
		virtual void say()
		{
			cout<<"I'm "<<m_Name<<", I have two sports: swin and skating !"<<endl;
		}
		void swim(){cout<<"swim"<<endl;}
		void skating(){cout<<"skating"<<endl;}
};

Wang * toss_coin()
{
	srand((unsigned)time(NULL));
	int num = (int)rand();
	if(num%2==0)
	{
		Wang_brother *pb = new Wang_brother("Wang Minjun");
		return pb;
	}
	else
	{
		Wang_sister *ps = new Wang_sister("Wang Xue");
		return ps;
	}
}

void speak(Wang *PW){PW->say();}

int main()
{
	Wang *p;
	p = toss_coin();
	speak(p);
	delete p;
	return 0;
}
