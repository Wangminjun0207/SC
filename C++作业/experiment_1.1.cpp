/*
 *�������ĳ��򣬲���VC++6.0�����в鿴������ش������������
 */
 
 
#include <iostream>
using namespace std;
int max_def(int x, int y)
{
	return (x>y?x:y);
}
int max_def(int x, int y, int z)
{
	int temp = 0;
	return (temp=(x>y?x:y))>z?temp:z;
}
double max_def(double x, double y)
{
	return (x>y?x:y);
}
int main()
{
	int x1 = 0;
	int x2 = 0;
	double d1 = 0.0;
	double d2 = 0.0;
	x1 = max_def(5,6);
	x2 = max_def(2,3,4);
	d1 = max_def(2.1,5.6);
	d2 = max_def(12.3,3.4,7.8);//-----------------------------------------------------��
	cout<<"x1="<<x1<<endl;
	cout<<"x2="<<x2<<endl;
	cout<<"d1="<<d1<<endl;
	cout<<"d2="<<d2<<endl;//--------------------------------------------------------��
	return 1;
}


/*
 *����1.1�������������������ʲô��
 *����1.2����Щ������Բ��뺯�������أ�
 *����1.3���ٴ����õ����ĸ�������
 */

