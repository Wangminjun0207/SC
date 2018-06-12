/*
 *�������ݽṹ����ģ��֪ʶ������һ��ͨ��ջ������ȳ����ಢ����ʵ�֣���д���������в���
 */
 
#include<iostream>
using namespace std;

template<class T>
class SqStack
{
private:
enum{MaxSize=100};
T data[MaxSize];
T top;
public:
SqStack();
~SqStack();
bool isEmpty();
void pushInt(T x);
T popInt();
T getTop();
void display();
};

template<class T>
SqStack<T>::SqStack()
{
top=-1;
}

template<class T>
SqStack<T>::~SqStack(){}

template<class T>
bool SqStack<T>::isEmpty()//�ж�ջΪ��
{
return(top==-1);
}

template<class T>
void SqStack<T>::pushInt(T x)//Ԫ�ؽ�ջ
{
if(top==MaxSize-1)
{
std::cout<<"ջ�������"<<std::endl;
}
else
{
++top;
data[top]=x;
}
}

template<class T>
T SqStack<T>::popInt()//��ջ
{
T tmp=0;
if(top==-1)
{
std::cout<<"ջ�ѿգ�"<<std::endl;
}
else
{
tmp=data[top--];
}
return tmp;
}

template<class T>
T SqStack<T>::getTop()//���ջ��Ԫ��
{
T tmp=0;
if(top==-1)
{
std::cout<<"ջ�գ�"<<std::endl;
}
else
{
tmp=data[top];
}
return tmp;
}

template<class T>
void SqStack<T>::display()//��ӡջ��Ԫ��
{
std::cout<<"ջ��Ԫ�أ�"<<std::endl;
for(int index=top;index>=0;--index)
{
std::cout<<data[index]<<std::endl;
}

}
int main()
{
SqStack<int>st;
std::cout<<"ջ�գ�"<<st.isEmpty()<<std::endl;
for(int i=1;i<10;i++)
{
st.pushInt(i);
}
st.display();
std::cout<<"��һ��ջ"<<std::endl;
st.popInt();
std::cout<<"ջ��Ԫ��:"<<st.getTop()<<std::endl;
st.popInt();
st.display();
return 0;
}

