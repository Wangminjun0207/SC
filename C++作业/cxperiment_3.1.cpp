/*
 *����1��POINT����������캯��֮����ʲô��ϵ��
 *����2��POINT���еڶ������캯���ĳ�ʼ���б���ȼ۱�ʾ�ɸ�ֵ����������ģ�
 *����3�����н���У�ÿ�������������ԭ����ʲô��
 */



#include <iostream>
#include <math.h>
using namespace std;
class LINE;
class POINT
{
	int x, y, z;
	friend class LINE;
public:
	POINT(){}
	POINT(const POINT &){cout<<"���ø��ƹ��캯����"<<endl;  } //�����������ͻ������ȷ��� 
	POINT(int a, int b, int c):x(a),y(b),z(c){cout<<"A"<<endl;}
	void print(){cout<<x<<","<<y<<","<<z<<endl;}
	~POINT(){cout<<"��������������"<<endl;}
};
class LINE{
	POINT a, b;
	double length;
public:
	LINE(int a1, int b1, int c1, int a2, int b2, int c2):a(a1,b1,c1),b(a2,b2,c2)
	{
		length = sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2)+(c1-c2)*(c1-c2));
		cout<<"B"<<endl;
	}
	LINE(const LINE &){cout<<"���ø��ƹ��캯����"<<endl;}
	LINE(POINT a,POINT b)
	{
		length = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
		cout<<"C"<<endl;
	}
	void print(){cout<<"5.19615"<<endl;}
	~LINE(){cout<<"��������������"<<endl;}
};
int  main()
{
	LINE line1(1,2,3,4,5,6);
	line1.print();
	POINT pt1(1,2,3),pt2(4,5,6);
	LINE line2(pt1,pt2);
	line2.print();
	return 0;

}

