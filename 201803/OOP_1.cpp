#include <iostream>
#include <string>
using namespace std;
class PERSON
{
	string name;
	string studentnumber;
	string gender;
	int age;
	public:
		PERSON(string n,string s,string g,int a)
		{
			name = n;
			studentnumber = s;
			gender = g;
			age = a;
		}
		string getname(){return name;}
		string getstudentnumber(){return studentnumber;}
		string getgender(){return gender;}
		int getage(){return age;}
};
int main()
{
	string myname,mysno,mygender;
	int myage;
	cout<<"������ѧ��";cin>>mysno;
	cout<<"����������";cin>>myname; 
	cout<<"�������Ա�";cin>>mygender;
	cout<<"����������";cin>>myage;
	PERSON me(myname,mysno,mygender,myage);
	cout<<me.getstudentnumber()<<endl<<me.getname()<<endl<<me.getgender()<<endl<<me.getage()<<endl; 
} 
	
