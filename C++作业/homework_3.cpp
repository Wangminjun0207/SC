/*
 *��д������A��B������A����������ԪB����֤B�ຯ����Ա���Է���A���˽�����ݳ�Ա��
 */
 
#include <iostream>
using namespace std;
class A
{
	friend class B;
	private:
		int age;
	public:
		A(int n){age = n;}
		~A(){}
		int getAge(){return age;}
};
class B
{
	public:
		B(){}
		~B(){}
		int setAge(A &a){a.age += 1;}	
		int getAge(A &a){return a.age;}
};
int main()
{
	A a(5);
	cout<<"A��������A������˽�г�Ա ��"<<a.getAge()<<endl;
	B b;
	b.setAge(a);
	cout<<"B��������A������˽�г�Ա ��"<<b.getAge(a)<<endl;
}

