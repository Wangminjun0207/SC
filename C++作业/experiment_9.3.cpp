/*
 *�������ݽṹ����ģ��֪ʶ������һ��ͨ�ö��У��Ƚ��ȳ����ಢ����ʵ�֣���д���������в��ԣ�
 */
 
#include <iostream>
using namespace std;
const int MaxQSize = 100;
template<class T>
class Queue
{
private:
	int front, rear, count;//��ͷָ�롢��βָ�롢Ԫ�ظ���
	T qlist[MaxQSize];
public:
	Queue(void);//���캯�����������ݳ�Ա�ĳ�ʼ��
	void Insert(const &item);//��Ԫ�����
	T Delete(void);//Ԫ�س���
	T getFront() const;//���ʶ���Ԫ��
	int getLength(void) const;//��Ԫ�ظ���
	int isEmpty(void) const;//�ж϶��п�
	int isFull(void) const;//�ж϶�����
};

template<class T>
Queue<T>::Queue():front(0),rear(0),count(0) {}

template<class T>
void Queue<T>::Insert(const &item)
{
	if(count==MaxQSize)
	{
		cout<<"Queue overflow"<<endl;
		exit(1);//�������Ϊ������ֹ����
	}
	count++;
	qlist[rear] = item;
	rear = (rear+1)%MaxQSize;//��βָ��+1����ȡ������ʵ��ѭ������
}

template<class T>
T Queue<T>::Delete()
{
	T temp;
	if(count==0)
	{
		cout<<"Deleting from an empty queue!"<<endl;
		exit(1);//�������Ϊ�գ���ֹ����
	}
	temp = qlist[front];
	count--;
	front = (front+1)%MaxQSize;
	return temp;
}

template<class T>
T Queue<T>::getFront() const
{
	return qlist[front];
}

template<class T>
int Queue<T>::getLength() const
{
	return count;
}

template<class T>
int Queue<T>::isEmpty() const 
{
	return count == 0;//�����߼�ֵcount == 0
}

template<class T>
int Queue<T>::isFull() const
{
	return count == MaxQSize;//�����߼�ֵcount == MaxQSize
}

int main()
{
	Queue<int>q;
	q.Insert(1);
	q.Insert(2);
	q.Insert(3);
	q.Insert(4);
	q.Insert(5);
	q.Insert(6);
	cout<<"The front is "<<q.getFront()<<endl;
	while(!q.isEmpty())
	{
		cout<<"The length is "<<q.getLength()<<endl;
		cout<<"The front is "<<q.getFront()<<endl;
		q.Delete();
	}
	int i = 1;
	while(!q.isFull())
	{
		q.Insert(i);
		i++;
	}
	cout<<"The length is "<<q.getLength()<<endl;
	return 0;
}

