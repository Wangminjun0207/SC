/*
 *1��	�ٱ�дһ���������࣬��������ε������������ܹ��������������0����
 *2��	�ٱ�дһ���ı����ࡣ�������������������
 *3��	������Ӧ������������֤�����ȷ�ԡ�
 */



#include <iostream>
#include <math.h>
using namespace std; 
class TRIANGLE
{
	private:
		float  a, b, c;   //�����ε�������
		float  area;      //�����ε���� 
	public:
		TRIANGLE(float x, float y, float z)
		{
			a = x;
			b = y;
			c = z;
		}
		float AREA(TRIANGLE p)
		{
			float f;
			if(p.a>0 && p.b>0 && p.c>0 && 
			  (p.a+p.b>p.c) && (p.a+p.c>p.b) && (p.b+p.c>p.a))
			  {
			  	//���ú��׹�ʽ������������� 
			  	f = (p.a+p.b+p.c)/2;
				p.area = sqrt(f*(f-p.a)*(f-p.b)*(f-p.c));
				return p.area; 
			  }
			else
				return 0;
		} 
} ;

class QUADRILATERAL
{
	private:
		float  a, b, c, d;   //�ı��ε�������
		float  area;      //�ı��ε���� 
	public:
		QUADRILATERAL(float x, float y, float z, float w)
		{
			a = x;
			b = y;
			c = z;
			d = w;
		}
		float AREA(QUADRILATERAL p)
		{
			float f;
			if(p.a>0 && p.b>0 && p.c>0 && p.d>0 && (p.a+p.b+p.c>p.d) &&
			  (p.a+p.b+p.d>p.c) && (p.a+p.c+p.d>p.b) && (p.b+p.c+p.d>p.a))
			  {
			  	f = (p.a+p.b+p.c+p.d)/2;
				p.area = sqrt((f-p.a)*(f-p.b)*(f-p.c)*(f-p.d));
				return p.area; 
			  }
			else
				return 0;
		} 
};
int main()
{
	float a, b, c, d;
	cout<<"�����������߳���";
	cin>>a>>b>>c>>d;
	QUADRILATERAL Q(a,b,c,d); 
	cout<<"���Ϊ ��"<<Q.AREA(Q)<<endl;
	cout<<"�����������߳���";
	cin>>a>>b>>c;
	TRIANGLE ZiMinTion(a,b,c);  // ZiMinTion��˼��������
	cout<<"���Ϊ ��"<<ZiMinTion.AREA(ZiMinTion)<<endl;
}

