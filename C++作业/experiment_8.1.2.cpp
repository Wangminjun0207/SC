/*
 *�����������Ҫ�ı��ֻ��������ʽ�͸ı�װ����������ʽ���������Ӧ�ķ�����
 */
#include <iostream>
#include <string>
using namespace std;
class Phone
{  
public:  
	virtual void ShowDecorate() = 0;
};  
class iPhone : public Phone
{
private:  
	string m_name;
	string m_weight;
	string m_color;
	float  m_price;
public:  
	iPhone(string name,string weight, string color, float price)
	{
		m_name = name;
		m_weight = weight;
		m_color = color;
		m_price = price;
	}  
    void ShowDecorate() 
	{
		cout<<m_name<<"'s weight: "<<m_weight<<endl;
		cout<<m_name<<"'s color: "<<m_color<<endl;
		cout<<m_name<<"'s price: "<<m_price<<endl;
		cout<<m_name<<"'s Decoration:"<<endl;
	}  
};
class DecoratorPhone : public Phone
{
private:  
	Phone *m_phone;
public:  
	DecoratorPhone(Phone *phone): m_phone(phone) {}
	virtual void ShowDecorate() { m_phone->ShowDecorate(); }
};
class Decorator : public DecoratorPhone
{
private:
	string Decorator_name;
public:
	Decorator(string dn,Phone *phone) : DecoratorPhone(phone) {Decorator_name=dn;} 
	void ShowDecorate()	
	{
		DecoratorPhone::ShowDecorate();
		AddDecorate();
	}  
private:  
	void AddDecorate() { cout<<Decorator_name<<endl; }
}; 
int main()
{
	Phone *piphone = new iPhone("ƻ��","100g","black",2998); 
	Phone *pda = new Decorator("����",piphone);
 	Phone *pdb = new Decorator("����",pda);
	Phone *pdc = new Decorator("�ֻ���",pdb);
	pdc->ShowDecorate();
	delete pda;  
	delete pdb;  
	delete piphone;  
	return 0;
}

