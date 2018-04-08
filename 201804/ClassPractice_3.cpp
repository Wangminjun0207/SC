#include <iostream>
#include <math.h>
using namespace std; 
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
}

