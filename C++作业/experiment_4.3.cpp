/*
 *1�������CPoint����Ϊ���࣬�ڴ˻�����������ֱ��CLine���ԲCCircle�࣬��Ҫ�����͸���������������ص㣺
 *a��CLine�ຬ�м���ֱ�߳��Ⱥ�б�ʵĳ�Ա������
 *b��CCircle�ຬ�м���Բ����ĳ�Ա������
 */
 
#include <iostream>
#include <cmath>
using namespace std;

class CPoint
{
	private:
		float x1;
		float y1;
		float x2;
		float y2;
	public:
		CPoint(float _x1, float _y1, float _x2, float _y2)
		{
			x1 = _x1;
			y1 = _y1;
			x2 = _x2;
			y2 = _y2;
		}
		float get_x1() { return x1; }
		float get_y1() { return y1; }
		float get_x2() { return x2; }
		float get_y2() { return y2; }
};
class CLine : public CPoint
{
	public:
		CLine(float _x1, float _y1, float _x2=0, float _y2=0):CPoint(_x1, _y1, _x2, _y2) {}
		float length()
		{
			float x;
			float y;
			float l;
			x = get_x1() - get_x2();
			y = get_y1() - get_y2();
			l = sqrt(x*x+y*y);
			cout << "���ȣ�" << l << endl;
		}
		float slope()
		{
			float x;
			float y;
			float k;
			x = get_x1() - get_x2();
			y = get_y1() - get_y2();
			k = x / y;
			cout << "б�ʣ�" << k << endl;
		}
};
class CCircle : public CPoint
{
	public:
		CCircle(float _x1, float _y1, float _x2=0, float _y2=0):CPoint(_x1, _y1, _x2, _y2) {}
		float length()
		{
			float x;
			float y;
			float l;
			x = get_x1() - get_x2();
			y = get_y1() - get_y2();
			l = sqrt(x*x+y*y);
			return l;
		}
		float area()
		{
			float r;
			float s;
			r = length()/2;
			s = 3.14 * r * r;
			cout << "Բ�����" << s << endl;
		}
};
int main()
{
	CLine a(1,1,2,2);
	a.length();
	a.slope();
	CCircle b(1,1,2,2);
	b.area();
	return 0;
}


