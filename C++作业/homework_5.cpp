/*
 *��дһ���࣬�Ծ�̬��Ա��Ӧ�ù��̺����ý�����֤��������˵����
 *������˽�о�̬���ݳ�Ա����ʼ����������ʺ�����ʵ�
 */
 
#include <iostream>
using namespace std;
class A
{
	private:
		
		int m_nMonth;
		int m_nDay;
	public:
		static int m_nYear;
		A(){}
		A(int month, int day);
		~A(){}
		void getDate(){cout<<m_nYear<<"-"<<m_nMonth<<"-"<<m_nDay<<endl;}
		static int getYear(){return m_nYear;}
		int GetYear(){return A::m_nYear;}
};
int A::m_nYear = 2018;
A::A(int month, int day)
{
	m_nYear++;
	m_nMonth = month;
	m_nDay = day;
}
int main()
{
	A a(4,18);
	cout<<"�������ʣ�";
	cout<<A::getYear()<<endl;
	cout<<"������ʣ�";
	cout<<a.GetYear()<<endl;
	cout<<"������ʣ�";
	a.getDate();
}

