#include <iostream>
class CPoint
{
private:
	int m_x;//��ʾֱ������� x �� 
	int m_y;//��ʾֱ������� y �� 
public:
	CPoint(int x, int y){m_x = x; m_y = y;}
	~CPoint(){}
	int GetX(){return m_x;}
	int GetY(){return m_y;}
	void SetX(int x){m_x = x;}
	void SetY(int y){m_y = y;}
	CPoint operator--();
	CPoint operator++();
	friend CPoint operator--(CPoint &a);
	friend CPoint operator++(CPoint &a); 
};

CPoint CPoint::operator--()
{
	m_x--;
	m_y--;
	return *this;
}

CPoint CPoint::operator++()
{
	m_x++;
	m_y++;
	return *this;
} 
 
CPoint operator--(CPoint &a)
{
	int x = a.GetX();
	int y = a.GetY();
	x--;
	y--;
	a.SetX(x);
	a.SetY(y); 
	return a;
} 

CPoint operator++(CPoint &a)
{
	int x = a.GetX();
	int y = a.GetY();
	x++;
	y++;
	a.SetX(x);
	a.SetY(y);
	return a;
} 

int main()
{
	CPoint  point1(3,5);
	point1.operator--();
	std::cout << "point1 ��һ���Լ� ��x = " << point1.GetX() << ", y = " << point1.GetY()  << std::endl;
	operator--(point1);
	std::cout << "point1 �ڶ����Լ� ��x = " << point1.GetX() << ", y = " << point1.GetY()  << std::endl;
	point1.operator++();
	std::cout << "point1 ��һ������ ��x = " << point1.GetX() << ", y = " << point1.GetY()  << std::endl;
	operator++(point1);
	std::cout << "point1 �ڶ������� ��x = " << point1.GetX() << ", y = " << point1.GetY()  << std::endl; 
	return 0; 
}
