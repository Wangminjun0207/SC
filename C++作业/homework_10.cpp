/*
 *�ڼ̳л����У�������Զ���һ���븸�������ͬԭ�͵ĳ�Ա�������磺������� void 
 *f();  ����������Ҳ������һ�� void f();  ��������ʱ��Ϊ���ǡ� ���˽��ڸ��ǻ����£����
 *�������з������Ը���� f �������������������ͨ���������ֱ��������͸���� f 
 *������ ����������ʵ�֣�����ʵ�ֽ��ۡ�
 */
 
#include <iostream>
#include <string>
using namespace std;
class STUDENT
{
	private:
		string m_Name;
		int m_Age;
		char m_Sex;
	public:
		STUDENT(string _name, int _age, char _sex)
		{
			m_Name = _name;
			m_Age = _age;
			m_Sex = _sex;
		}
		virtual void f()
		{
			cout<<"name:"<<m_Name<<endl; 
			cout<<"age:"<<m_Age<<endl; 
			cout<<"sex:"<<m_Sex<<endl; 
		}
		~STUDENT(){}
};
class CollegeSTUDENT : public STUDENT
{
	private:
		string m_Major;
		string m_Colloge;
	public:
		CollegeSTUDENT(string _name, int _age, char _sex, string _colloge, string _major)
					   :STUDENT(_name, _age, _sex)
		{
			m_Colloge = _colloge;
			m_Major = _major;
		}
		virtual void f()
		{
			STUDENT::f();
			cout<<"colloge:"<<m_Colloge<<endl; 
			cout<<"majir:"<<m_Major<<endl;
		}
		~CollegeSTUDENT(){}
};

int main()
{
	CollegeSTUDENT stu1("www",18,'M',"Infor","Computer");
	CollegeSTUDENT stu2("xxx",20,'F',"Infor","Computer");
	stu1.STUDENT::f();  //ָ����������û����f()���� 
	STUDENT *stu = &stu1;
	stu->f(); //ָ���������ָ�룬������������麯�� 
	stu2.f();  //ͨ���������������f()���� 
	return 0;
}
