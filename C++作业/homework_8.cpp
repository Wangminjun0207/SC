/*
 *�����ʹ�ù����еĸ������⣨����˽�г�Ա�ķ��ʵȣ�������֤����˵�����ִ����ڱ���ʱ�ı��������� 
 */
 
#include <iostream>
#include <string.h>
using namespace std;
class STU
{
	private:
		char arrName[10];
		int  nNumber;
		float score;
	public:
		STU() {cout<<"���ù��캯����"<<endl;	}
		STU(char a[],int b, float c)
		{
			strcpy(arrName,a);
			cout<<"����˽�г�ԱarrName"<<endl;
			nNumber = b;
			cout<<"����˽�г�ԱnNumber"<<endl;
			score = c;
			cout<<"����˽�г�Աscore"<<endl;
		}
		STU(const STU &);
		void print()
		{
			cout<<"arrName = "<<arrName<<endl;
			cout<<"nNumber = "<<nNumber<<endl;
			cout<<"score = "<<score<<endl;
		}
~STU(){cout<<"��������������"<<endl;}
};
STU::STU(const STU &a)
{
	cout<<"���ø��ƹ��캯����"<<endl; 
	strcpy(this->arrName,a.arrName);
	this->nNumber =  a.nNumber;
	this->score = a.score;
}
int main()
{
	STU student_1("Li Si",201701,88.8);
	STU student_2(student_1);
	student_2.print();
	return 0;
}

