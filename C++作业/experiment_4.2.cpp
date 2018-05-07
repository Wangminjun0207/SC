/*
 *����4.3�����³������������ʲô��˵��Ϊʲô��
 *����4.4���ڴ����ִ�����d.b.a��ֵΪ���٣�
 */
 
 
#include <iostream>
using namespace std;

class CBase
{
public:
	CBase(int a):a(a)
	{
		cout << "base structure" << endl;
	}
	~CBase()
	{
		cout << "base destructure" << endl;
	}
	void print()
	{
		cout << "a="<< a << endl;
	}
	int get_a(){ return a;}
protected:
	int a;
};

class CDerive : public CBase
{
public:
	CDerive(int a, int b, int c):CBase(a),b(b),c(c)
	{
		cout << "derive structure" << endl;
	}
	~CDerive()
	{
		cout << "derive destructure" << endl;
	} 
	void print()
	{
		CBase::print();
		cout << "b.a=" << b.get_a() << endl;
		/*
		 *ԭ����cout << "b.a=" << b.a<< endl;
		 *�޸ĺ�cout << "b.a=" << b.get_a() << endl;
		 *�˴���ͨ������d�Ķ����Ա�����ʻ�����ܱ�����Ա������������� 
		 * ����ڻ������int get_a()����ʵ��ʵ��Ŀ��
		 **/ 
		cout << "c=" << c << endl;
	}
private:
	int c;
	CBase b;
};

int main()
{
	CDerive d(1,2,3);   //2�� 
	d.print();
} 
