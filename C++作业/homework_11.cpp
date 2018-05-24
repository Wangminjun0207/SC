/*��Խ̰��е�"���ģʽ"������京�壬�����������Դ���롣
 *���Զ�Դ���������չ��������еĳ���ṹ���塣 
 *1������Դ��������н���� 
 *2�������޸ĺ��ܹ��ɹ����е��޸Ĳ���˵���������н��˵���� 
 *3���Գ����ܵ���չ���̵��ĵã�
 */


//Facade.h
#ifndef _FACADE_H_
#define _FACADE_H_
class Subsystem1
{
public:
 Subsystem1();
 ~Subsystem1();
 void Operation();
protected:
private:
};
class Subsystem2
{
public:
 Subsystem2();
 ~Subsystem2();
 void Operation();
protected:
private:
};
class Facade
{
public:
 Facade();
 ~Facade();
 void OperationWrapper();
protected:
private:
 Subsystem1* _subs1;
 Subsystem2* _subs2;
};
#endif //~_FACADE_H_

//Facade.cpp
#include <iostream>
using namespace std;
Subsystem1::Subsystem1()
{
}
Subsystem1::~Subsystem1()
{
}
void Subsystem1::Operation()
{
 cout<<"Subsystem1 operation.."<<endl;
}
Subsystem2::Subsystem2()
{
}
Subsystem2::~Subsystem2()
{
}
void Subsystem2::Operation()
{
 cout<<"Subsystem2 operation.."<<endl;
}
Facade::Facade()
{
this->_subs1 = new Subsystem1();
this->_subs2 = new Subsystem2();
}
Facade::~Facade()
{
 delete _subs1;
 delete _subs2;
}
void Facade::OperationWrapper()
{
 this->_subs1->Operation();
 this->_subs2->Operation();
}

//main.cpp
#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
Facade* f = new Facade();
 f->OperationWrapper();
 return 0;
}
