/*
 *����һ�����д��Ĳ���ʹ��pda��ʹ��piphone��ʲô����
 *����������д���ָ��ʹ��pdb��ʹ��pda��ʲô����
 */
#include <iostream>
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
public:  
	iPhone(string name): m_name(name){}  
    void ShowDecorate() { cout<<m_name<<"'s Decoration:"<<endl;}  
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
	void ShowDecorate()	{
		DecoratorPhone::ShowDecorate();
		AddDecorate();
	}  
private:  
	void AddDecorate() { cout<<Decorator_name<<endl; }
}; 

int main()
{
	Phone *piphone = new iPhone("ƻ��");  
	Phone *pda = new Decorator("����",piphone);
	Phone *pdb = new Decorator("����",pda);//-----------------------------------------------------��
	pdb->ShowDecorate(); //-----------------------------------------------------��
	delete pda;  
	delete pdb;  
	delete piphone;  
	return 0;
}

