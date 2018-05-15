/*
 * �Լ���ѧ�е�ͼ�ν��м̳з��档�������ӻ�����ά�ռ�㣬����ά����ɫ�ĵ㣬����
 * ά�ռ���������ϵ����϶����Ա��̼����������ߡ�Բ���򣩺;��Σ������壩�ȡ�
 * ��ÿһ������ͼ�ζ��ܹ����첢�������Ҫ������������ꡢ�ߵĳ��ȡ�Բ�������������� 
 * ����������������������--������ϣ�������ȫʵ�֡�
 */
 
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//��ά�ռ����
class Two_DPoint
{
public:
	float x;
	float y;
	Two_DPoint(float _x, float _y)
	{
		x = _x;
		y = _y;
	}
	~Two_DPoint(){}
};

//��ά�ռ����ɫ����
class ColorTwo_DPoint : public Two_DPoint
{
private:
	string color;
public:
	ColorTwo_DPoint(string _color,float _x, float _y):Two_DPoint(_x, _y) {color = _color;}
	void GetColor() { cout << "��һ�������ɫ��" << color << endl;; }
	~ColorTwo_DPoint() {}
};

//��ά�ռ����
class Three_DPoint : public ColorTwo_DPoint
{
public:
	float z;
	Three_DPoint(string _color,float _x, float _y,float _z):ColorTwo_DPoint(_color, _x, _y){ z = _z; }
	void GetColor() { ColorTwo_DPoint::GetColor(); }
	~Three_DPoint() {}
};

//��ά�ռ�ֱ����
class Line :public Three_DPoint
{
private:
	float x1;
	float y1;
	float z1;
	string color1;
public:
	Line(string _color,string _color1,float _x, float _y,float _z,float _x1, float _y1,float _z1):Three_DPoint(_color, _x, _y, _z)
	{
		color1 = _color1;
		x1 = _x1;
		y1 = _y1;
		z1 = _z1;
	}
	void GetColor() 
	{ 
		Three_DPoint::GetColor(); 
		cout << "�ڶ��������ɫ��" << color1 << endl;
	}
	void Length()
	{
		float l;
		l = sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1)+(z-z1)*(z-z1));
		cout << "�����ֱ�ߵĳ��ȣ�" << l << endl;
	}
	~Line() {}
};

//��ά�ռ��������
class Globe : public Three_DPoint
{
private:
	float radius;
public:
	Globe(float _radius, string _color,float _x, float _y,float _z):Three_DPoint(_color, _x, _y, _z)
	{ radius = _radius; }
	void Volume()
	{
		float V;
		V = 4*3.14*radius*radius*radius/3;
		cout << "�Ե�һ����ΪԲ�ĵ�Բ�����:" << V <<endl;
	}
	void GetColor() {Three_DPoint::GetColor();}
	~Globe() {}
};

int main()
{
	string color1;
	string color2;
	float x1;
	float y1;
	float z1;
	float x2;
	float y2;
	float z2;
	float radius;
	cout << "�����һ�������ɫ:";
	cin >> color1;
	cout << "�����һ�����X����:";
	cin >> x1;
	cout << "�����һ�����Y����:";
	cin >> y1;
	cout << "�����һ�����Z����:";
	cin >> z1;
	cout << "����ڶ��������ɫ:";
	cin >> color2;
	cout << "����ڶ������X����:";
	cin >> x2;
	cout << "����ڶ������Y����:";
	cin >> y2;
	cout << "����ڶ������Z����:";
	cin >> z2;
	cout << "�����Ե�һ����ΪԲ�ĵ�Բ�뾶:";
	cin >> radius;
	Line line1(color1, color2, x1, y1, z1, x2, y2, z2);
	line1.Length();
	line1.GetColor();
	Globe globe1(radius, color1, x1, y1, z1);
	globe1.Volume();
	return 0;
}

