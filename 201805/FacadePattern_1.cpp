/*���벻��ִ��*/ 

#include <iostream>   
using namespace std;  

//��Ʊһ 
class Stock1
{
	public:
		Stock(){}
		~Stock(){}
		//����Ʊ
		void Sell()
		{
			[��Ʊ1����]
		}
		//���Ʊ
		void Buy()
		{
			[��Ʊ1����]
		} 
}; 

//��Ʊ��
class Stock2
{
	//�������ƹ�Ʊһ�� 
}; 

//��Ʊ�� 
class Stock3
{
	//�������ƹ�Ʊһ�� 
}; 

//��ծһ 
class NationalDebt1
{
	//�������ƹ�Ʊһ�� 
}; 

//���ز�һ 
class Realty1
{
	//�������ƹ�Ʊһ�� 
}; 

//������
class Fund
{
	Stock1 gu1;
	Stock2 gu2;
	Stock3 gu3;
	NationalDebt1 nd1;
	Realty1 rt1;
	public:
		Fund()
		{
			gu1 = new Stock1();
			gu2 = new Stock2();
			gu3 = new Stock3();
			nd1 = new NationalDebt1();
			rt1 = new Realty1();
		}
		void BuyFund()
		{
			gu1.Buy();
			gu2.Buy();
			gu3.Buy();
			nd1.Buy();
			rt1.Buy();
		}
		void SellFund()
		{
			gu1.Sell();
			gu2.Sell();
			gu3.Sell();
			nd1.Sell();
			rt1.Sell();
		}
}; 

int main()
{
	Fund jijin = new Fund();
	//������
	jijin.BuyFund();
	 //�������
	 jijin.BuyFund();
	return 0;
}
