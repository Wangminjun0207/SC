/*
 *�ο�stack�����һ���࣬�ܹ�ʵ�ֶԻ��ζ��еĶ�д��
 *���а����Զ������͡������ܳ��ȵĶ��塢��ʼ����Ϊ���жϡ�Ϊ���жϡ���ȡ��д�롢��ȡ������Ч���ݳ��ȵȡ���д��Ӧ�Ĳ������������ɹ����С�
 */
 
#include<iostream>
using namespace std;
class CirQueue
{
public:
    CirQueue(int queueCapacity);  
    ~CirQueue();                  
    int QueueLenth();          
    bool EnQueue(int element);    
    bool DeQueue(int &element);   
    bool QueueEmpty();            
    bool QueueFull();             
    void ClearQueue();            
    void QueueTravel();           
private:
    int *m_pQueue;                
    int m_iHead;                       
    int m_iTail;                  
    int m_iQueueLenth;            
    int m_iQueueCapacity;         
};
//Ԫ�����
bool CirQueue::EnQueue(int element)
{
    if (QueueFull())
    {
        return false;
    }
    else
    {
        m_pQueue[m_iTail] = element;
        m_iTail++;
        m_iTail = m_iTail % m_iQueueCapacity;
        m_iQueueLenth++;
        return true;
    }
}
//Ԫ�س���
bool CirQueue::DeQueue(int &element)
{
    if (QueueEmpty())
    {
        return false;
    }
    else
    {
        element = m_pQueue[m_iHead];
        m_iHead++;
        m_iHead = m_iHead % m_iQueueCapacity;
        m_iQueueLenth--;    
        return true;
    }
}
//���б���
void CirQueue::QueueTravel()
{
    for (int i = m_iHead; i < m_iQueueLenth + m_iHead; i++) 
	{ cout << m_pQueue[i%m_iQueueCapacity] << endl;
    }
    cout << endl;
}
CirQueue::CirQueue(int queueCapacity)
{
    m_iQueueCapacity = queueCapacity;
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLenth = 0;
    m_pQueue = new int[queueCapacity];
}
//���й���
CirQueue::~CirQueue()
{
    delete[]m_pQueue;
    m_pQueue = NULL;
}
//�õ����г���
int CirQueue::QueueLenth()
{
    return m_iQueueLenth;
}
//��ն���
void CirQueue::ClearQueue()
{
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLenth = 0;
}
//�����п�
bool CirQueue::QueueEmpty()
{
    if (m_iQueueLenth == 0)
    {
        return true;
    }
    return false;
}
//��������
bool CirQueue::QueueFull()
{
    if (m_iQueueLenth == m_iQueueCapacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
	int sum,j;
	cout <<"��������еĳ��ȣ�";
	cin  >> sum,j;
    CirQueue *s = new CirQueue(sum);
	cout <<"������Ԫ�أ�";
	for(int i=0;i<sum;i++)
	{
		cin >>j;
        s->EnQueue(j);
	}
    cout <<"queue lenth is: "<< s->QueueLenth() << endl;
    s->QueueTravel();
	cout <<"�˳������ж���Ԫ�أ�";
    int e = 0;
	int max;
	cin  >>max;
	for(;e<max;){
    s->DeQueue(e);
    cout<< "out"<<max << ":"<< e << endl;
	}
    cout <<" after queue lenth is: " << s->QueueLenth() << endl;
    s->ClearQueue();
    s->QueueTravel();
    delete s;
    s = NULL;
    system("pause");
}

