/*
 *װ��ģʽ��Ӧ�÷ǳ��㷺�������ֻ�װ�����������Ĵ��������ĳ������Ľ��������
 *ĳ�����Ӽ���ͼ�εĹ��ɲ��ֵȡ����Զ�8.2.1���ӽ����޸ģ���һ��ͼ�����磺��Ϸ�е�
 *ĳ��������й��죬��������������Ԫ�ء�--��ʾ��ͼ�������ֻ�������Ԫ��������
 *װ���
 */
 
#include <iostream>
#include <string>
 
using namespace std;
class Role
{  
public:  
	virtual void ShowDecorate() = 0;
};  
class Soldier : public Role
{
private:  
	string m_name;//�������� 
	string m_gerden;//�Ա� 
	string m_color;//�·���ɫ 
	float  m_power;//��������
	float  m_lifeValue;//��������ֵ 
public:  
	Soldier(string name,string gerden, string color, float power, float lifeValue)
	{
		m_name = name;
		m_gerden = gerden;
		m_color = color;
		m_power = power;
		m_lifeValue = lifeValue;
	}  
    void ShowDecorate() 
	{
		cout<<m_name<<"'s gerden: "<<m_gerden<<endl;
		cout<<m_name<<"'s clothes: "<<m_color<<endl;
		cout<<m_name<<"'s power: "<<m_power<<endl;
		cout<<m_name<<"'s liveValue:"<<m_lifeValue<<endl;
		cout<<m_name<<"deccorate: "<<endl;
	}  
};
class DecoratorRole : public Role
{
private:  
	Role *m_role;
public:  
	DecoratorRole(Role *role): m_role(role) {}
	virtual void ShowDecorate() { m_role->ShowDecorate(); }
};
class Decorator : public DecoratorRole
{
private:
	string Decorator_name;
public:
	Decorator(string dn,Role *role) : DecoratorRole(role) {Decorator_name=dn;} 
	void ShowDecorate()	
	{
		DecoratorRole::ShowDecorate();
		AddDecorate();
	}  
private:  
	void AddDecorate() { cout<<Decorator_name<<endl; }
}; 
int main()
{
	Role *role = new Soldier("����������","��","�ȴ������Բ�",20,100); 
	Role *rda = new Decorator("������",role);
 	Role *rdb = new Decorator("����ͷ",rda);
	Role *rdc = new Decorator("������",rdb);
	Role *rdd = new Decorator("kar98k",rdc);
	Role *rde = new Decorator("M416",rdd);
	rde->ShowDecorate();
	delete rde;  
	delete rdd; 
	delete rdc; 
	delete rdb;
	delete rda;   
	delete role;  
	return 0;
}

