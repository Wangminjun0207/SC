/*
 *����һ���ٴ�����������أ�Ϊʲô�ú����ķ���ֵҪ��Ƴ�CComplex���ͣ�
 *��������۴�����������غ������þ��൱��"obj=operator+(obj1,obj2);"������ΪʲôCComplex���е���������غ���ֻ�����һ��������
 *��������ִ�����ܺ󣬷���obj1ֵ�ı仯���
 *�����ģ����ں����ķ���ֵ�޸�Ϊ���ã��ٷ�������ִ�к�obj1��ֵ�仯��
 */ 


#include <iostream>
using namespace std;

class CComplex
{
public:
	CComplex(int x=0,int y=0){
		real = x;
		imag = y;
	}
	int real;
	int imag;
	CComplex operator + (CComplex obj1){//-------��
		CComplex obj2(real + obj1.real, imag + obj1.imag);
		return obj2;
	}
	CComplex operator - (CComplex obj1){//------ ��
		real-=obj1.real;
		imag-=obj1.imag;
		return *this;
	}
};

int main()
{
	CComplex obj1(100,30);
	CComplex obj2(20, 30);
	CComplex obj3(obj1), obj4(obj2);
	CComplex obj;
	obj = obj1+obj2; //-----------------------��
	obj=obj1-obj2-obj3-obj4; //---------------��
	cout << obj.real <<endl;
	cout << obj.imag << endl;
	return 0;
}

