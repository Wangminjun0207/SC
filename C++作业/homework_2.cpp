/*
 *1��Դ��������ʱ���¼���˹���ʱ���ɣ��� 
 *2���ʵ��޸Ĵ���ӿ�����ʱ�䡣�ṩ�޸ĺ�Ĵ��룬���޸ĺ������ʱ�䣻 
 *3�������������ȱ��浱ǰ������Ҫ��������ݣ�ɾ�������е�if(p) delete[] p;һ
 *    �У��ٴ����г��򣬹۲��ڴ�仯������Խ�����з��������Ч�������ԣ���Ӵ�CTEST����Ĵ�С���Ӵ�ѭ���������ٲ��ԡ�
 */
 

/*
 *�޸�ǰ�Ĵ������� 
 
#include <iostream>
using namespace std;
class CTEST
{
	char c[20000];
	int x[6000];
};
CTEST f(CTEST t) {return t;}
int main()
{
	CTEST *p,t1,t2;
	for(int i=0;i<2000;++i)
		for(int j=0;j<2000;++j)
			t2=f(t1);
	for(int i=0;i<20;++i)
	{
		p=new CTEST[10];
		if(p) 
			delete[] p;
	}
}
 */ 
 
/*
 *�޸ĺ�Ĵ���
 */
 
#include <iostream>
using namespace std;
class CTEST
{
	char c[20000];
	int x[6000];
};
CTEST f(CTEST t) {return t;}
int main()
{
	CTEST *p,t1,t2;
	for(int i=0;i<2000;++i)
		for(int j=0;j<2000;++j)
			t2=t1;
	for(int i=0;i<20;++i)
	{
		p=new CTEST[10];
		if(p) 
			delete[] p;
	}
} 
 
 
