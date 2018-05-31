#include <iostream>
#include <fstream>
using namespace std;
 
class CEmergency
{
public:
	string m_name;
	CEmergency(string name):m_name(name){}
	virtual void EmerResPlan()=0;
	virtual void Location()=0;	
};

class CEarthquake : public CEmergency
{
public:
	CEarthquake(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"����Ӧ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\earthquake.docx"<<endl<<endl;
	}
};

class CTyphoon : public CEmergency
{
public:
	CTyphoon(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"̨��Ӧ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\typhoon.docx"<<endl<<endl;
	}
};

class CFlood : public CEmergency
{
public:
	CFlood(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"��ˮӦ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\flood.docx"<<endl<<endl;
	}
};

class CDebFlow : public CEmergency
{
public:
	CDebFlow(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"��ʯ��Ӧ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\debrisFlow.docx"<<endl<<endl;
	}
};

class CDustStorm : public CEmergency
{
public:
	CDustStorm(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"ɳ����Ӧ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\dustStorm.docx"<<endl<<endl;
	}
};

class CRob : public CEmergency
{
public:
	CRob(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"����Ӧ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\rob.docx"<<endl<<endl;
	}
};

class CShot : public CEmergency
{
public:
	CShot(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"ǿɱӦ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\shot.docx"<<endl<<endl;
	}
};

class CCarAccident : public CEmergency
{
public:
	CCarAccident(string name):CEmergency(name){}
	void EmerResPlan()
	{
		cout<<"����Ӧ��Ԥ����Ϊȷ����Ա��ȫ���ƶ��ƻ����£�"<<endl;
	}
	void Location()
	{
		cout<<"���λ��E:\\Emergency\\carAccident.docx"<<endl<<endl;
	}
};

void Use(CEmergency *p)
{
	p->EmerResPlan();
	p->Location();
}

int main()
{
	CEarthquake earthquake("����");
	Use(&earthquake);
	CTyphoon typhoon("̨��");
	Use(&typhoon);
	CFlood flood("��ˮ");
	Use(&flood);
	CDebFlow debFlow("��ʯ��");
	Use(&debFlow);  
	CDustStorm dustStorm("ɳ����");
	Use(&dustStorm);
	CRob rob("����");
	Use(&rob);
	CShot shot("ǹɱ");
	Use(&shot);
	CCarAccident cAccident("����");
	Use(&cAccident);
	return 0;
}

