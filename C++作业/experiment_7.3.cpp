/*
 *���һ��������Motor��������п�����������̥�������������������Һͳ���������ݳ�Ա��
 *����Motor��������Car�ࡢBus���Truck�ࡣ����Bus����̳л�������ݳ�Ա�⣬�����б�ʾ
 *������������ݳ�ԱNumber��Truck����̳л�������ݳ�Ա֮�⣬�����б�ʾ������������
 *��ԱWeight��ÿ���඼���г�Ա����Display����������������������Ϣ��Ҫ�����һ��
 *ͳһ����ʾ�����Ϣ��ȫ�ֺ���ShowInfo���������ֵ��ã��������в�ֱ�ӵ����������Display������
 */

#include <iostream>
#include <string>
using std::string;
class Motor
{
	int m_Capacity;//��������
	int m_TireNum;//��̥����
	int m_HorPower;//������
	string m_Factory;//��������
	string m_CarHost;//���� 
public:
	Motor(int capacity,int tirenum, int hpower, string factory, string host)
	{
		m_Capacity = capacity;
		m_TireNum = tirenum;
		m_HorPower = hpower;
		m_Factory = factory;
		m_CarHost = host;
	}
	virtual void Display()
	{
		std::cout<<"��������:"<<m_Capacity<<std::endl;
		std::cout<<"��̥����:"<<m_TireNum<<std::endl;
		std::cout<<"�� �� ��:"<<m_HorPower<<std::endl;
		std::cout<<"��������:"<<m_Factory <<std::endl;
		std::cout<<"��    ��:"<<m_CarHost<<std::endl;
	}
	~Motor(){}
}; 

class Bus : public Motor
{
	int m_Number;//������
public:
	Bus(int capacity,int tirenum, int hpower, string factory, string host, int number):
	    Motor(capacity, tirenum, hpower, factory, host)	
	{
	   	m_Number = number;
	}
	void Display()
	{
		Motor::Display();
		std::cout<<"�� �� ��:"<<m_Number<<std::endl;
	}
	~Bus(){}
}; 

class Truck : public Motor
{
	int m_Weight;//������ 
public:
	Truck(int capacity,int tirenum, int hpower, string factory, string host, int weight):
	    Motor(capacity, tirenum, hpower, factory, host)	
	{
	   	m_Weight = weight;
	}
	void Display()
	{
		Motor::Display();
		std::cout<<"�� �� ��:"<<m_Weight<<std::endl;
	}
	~Truck(){}
}; 

void ShowInfo(Motor *ptr)
{
	ptr->Display();
}

int main()
{
	Motor m(5,4,18,"xxxxxxxx","www");
	Bus b(20,12,20,"xxxxxxxx","ttt",2);
	Truck t(4,32,48,"xxxxxxxx","yyy",100);
	std::cout<<"------Motor------"<<std::endl;
	ShowInfo(&m);
	std::cout<<"-------Bus-------"<<std::endl;
	ShowInfo(&b);
	std::cout<<"------Truck------"<<std::endl;
	ShowInfo(&t);
	return 0;
}












