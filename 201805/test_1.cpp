/*
 *���캯�������������ڶ��󴴽�������ʱ���Զ�����
 *��ʾ�����ֻ���Σ�
 */
 
 
  
#include <iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor"<<endl;
		}
		~A()
		{
			cout<<"destructor"<<endl;
		} 
};
int main()
{
	A a;
	a.A::A();   //��ʾ���ù��캯��,���ִ��� ��P201����
	a.~A();
}
