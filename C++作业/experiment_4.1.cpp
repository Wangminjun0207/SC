/*
 *����4.1�����ϳ��������������ָ������������֮��
 *����4.2�����е�����Լ����ʲô��˼���ܷ�ȡ������Լ����
 */
 
#include <iostream>
using namespace std;

class CBase
{
public:
	CBase(){}
	CBase(int a):a(a){}
//protected:
	void print()
	{
		cout<< "a=" << a << endl;
	}
private:
	int a;
};
class CDerive : public CBase
{
public:
	void print()
	{
		CBase::print();
		cout << "b=" << b << endl;
	}
private:
	int b;
};

int main()
{
	CDerive d;
	d.print();//protected �ܱ�����Ա������������� 
	CBase b;
	b.print();
}

