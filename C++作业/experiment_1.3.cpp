/*
 *�������ĳ��򣬲���VC++6.0�����в鿴������ش�����������⡣
 */
 
#include <iostream>
using namespace std;
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int i = 5;
	int j = 10;
	cout<<"Before swap: i="<<i<<",j="<<j<<endl;
	swap(i,j);//-----------------------------------------------------��
	cout<<"After the first swap: i="<<i<<",j="<<j<<endl;
	swap(&i,&j);//-----------------------------------------------------��
	cout<<"After the second swap: i="<<i<<",j="<<j<<endl;
	return 1;
}

/*
 *����3.1�������������������ʲô��
 *����3.2���ٴ��������ú󲢲���ʵ���������Ľ��������ڴ�ȴ���ԣ�Ϊʲô��
 *����3.3���ڴ����õ����ĸ����غ�����
 */

