#include <iostream>
using namespace std;
class A
{
	public:
		int x, y;
};
int main()
{
	A a, b, c;
	cin>>a.x>>a.y>>b.x>>b.y;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	cout<<c.x <<c.y <<endl;
}

/*
 *����1�����ϳ������к�ʵ��ʲô���ܣ�
 *����2�������x��y���ĳ�˽�г�Ա��Ϊ��ʵ����ͬ�Ĺ��ܣ���A��main����Ӧ����޸ģ����д�޸ĺ�����Ա��������Ͷ�Ӧ��main���������ɹ����С�
 *����3��������2.2����Ļ����ϣ����ӷ��������Ϊ��ĳ�Ա���������ʵ��޸�main�����ͬ��Ч����
 *����4��������2.3�Ļ����ϣ������ÿ����Ա���������ӱ�Ҫ�������Ϣ���������г��򣬹۲첢������������
 */


/*
 *����2.2��
  #include <iostream> 
using namespace std;
class A{
	private:
		int x,y;
	public:
		void fun(int n, int m);
		void print();
};

void A::fun(int n, int m)
{
	x = n;
	y = m;
}

void A::print()
{
	cout<<x<<y<<endl;
}

int main()
{
	A a;
	int c,d,e,f,h,i;
	cin>>c>>d>>e>>f;
	h = c+e;
	i = d+f;
	a.fun(h,i);
	a.print();
return 0;
}
*/

/*
 *����2.3��
  #include <iostream> 
using namespace std;
class A{
	private:
		int x,y;
	public:
		void fun(int n, int m) {x = n;  y = m;}
		void print() {cout<<x<<y<<endl;}
		void add(A &i, A &j, A &k)
		{
			k.x = i.x + j.x;
			k.y = i.y + j.y;
		}
};
int main()
{
	A a, b, c;
	int d,e,f,g;
	cin>>d>>e>>f>>g;
	a.fun(d, e);
	b.fun(f, g);
	c.add(a, b, c);
	c.print();
}
*/

/*
 *����2.4��
  #include <iostream> 
using namespace std;
class A{
	private:
		int x,y;
	public:
		void fun(int n, int m) {x = n;  y = m; cout<<"�ɹ���ֵ!"<<endl;}
		void print() {cout<<"x="<<x<<",y="<<y<<endl;}
		void add(A &i, A &j, A &k)
		{
			k.x = i.x + j.x;
			k.y = i.y + j.y;
			cout<<"�ӷ�������ɣ�"<<endl; 
		}
};
int main()
{
	A a, b, c;
	int d,e,f,g;
	cout<<"a.x, a.y, b.x, b.y : ";
	cin>>d>>e>>f>>g;
	a.fun(d, e);
	b.fun(f, g);
	c.add(a, b, c);
	c.print();
}
*/ 
