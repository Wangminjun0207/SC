/*
 *��ȡ��Ԫ�������ط�ʽ��ʵ��"+"�����������ȡ��Ԫ����
 *���ط�ʽ����ǰ�úͺ���"++"�Լ�"--"���������,
 *���������������֤������������÷���
 */

#include <iostream>
using namespace std;
class CComplex
{
public:
	CComplex(int x=0,int y=0)
	{
		real = x;
		imag = y;
	}
	int real;
	int imag;
	CComplex operator- (CComplex obj1)
	{
		real-=obj1.real;
		imag-=obj1.imag;
		return *this;
	}
	friend CComplex operator+ (CComplex obj1);
	friend CComplex &operator++(CComplex &obj1,int);
	friend CComplex &operator++(CComplex &obj1);
	friend CComplex &operator--(CComplex &obj1,int);
	friend CComplex &operator--(CComplex &obj1);
};

CComplex operator + (CComplex obj1, CComplex obj0)
{
	CComplex obj2(obj0.real + obj1.real, obj0.imag + obj1.imag);
	return obj2;
}

CComplex &operator++(CComplex &obj1,int)
{
	CComplex obj(obj1.real,obj.imag);
	obj1.real+=1;
	obj1.imag+=1;
	return obj; 
}

CComplex &operator++(CComplex &obj1)
{
	obj1.real+=1;
	obj1.imag+=1;
	return obj1;
}

CComplex &operator--(CComplex &obj1,int)
{
	CComplex obj(obj1.real,obj.imag);
	obj1.real-=1;
	obj1.imag-=1;
	return obj; 
}

CComplex &operator--(CComplex &obj1)
{
	obj1.real-=1;
	obj1.imag-=1;
	return obj1;
}
	
int main()
{
	CComplex obj1(100,40);
	CComplex obj2(20, 30);
	CComplex obj;
	obj = obj1 + obj2;
	cout << "obj+:    real = " << obj.real << ", imag = " << obj.imag << endl; 
	obj = obj1 - obj2;
	cout << "obj-:    real = " << obj.real << ", imag = " << obj.imag << endl;
	obj++;
	cout << "obj++:   real = " << obj.real << ", imag = " << obj.imag << endl; 
	++obj;
	cout << "++obj:   real = " << obj.real << ", imag = " << obj.imag << endl;  
	obj--;
	cout << "obj--:   real = " << obj.real << ", imag = " << obj.imag << endl; 
	--obj;
	cout << "--obj:   real = " << obj.real << ", imag = " << obj.imag << endl; 
	return 0;
}

