/*
 *���һ��ͨ�������࣬Ҫ�����£�
 *a�����ݳ�Ա����ͷָ�롢βָ�롢�����нڵ������˳������е�ǰ�ڵ�ָ��͵�ǰ�ڵ�ǰһ���ڵ��ָ�룻
 *b����Ҫ�ĳ�Ա�������������ɽڵ㣨������ͷ��β�Լ�����λ�ã�������ڵ㡢ɾ���ڵ㡢����/�޸Ľڵ㡢���������Լ�һЩ���������ȣ�
 *c����ʵ����������ĸ��ƣ�
 *d����ʵ�������������ĸ�ֵ��
 *e���ڲ��Գ����ж���������������A��B���ֱ����5��Ԫ�أ�Ȼ���B�е�Ԫ�ؼ���A��β����
 */
#include<iostream>
#include<string>
using namespace std;

template <class T>
struct Node
{
	int Data;
	Node<T> *Next;
};

template<class T>
class Tlist
{
private:
	Node<T> *head,*tail,*now,*before;
	int node_num;
public:
	Tlist():head(NULL),tail(NULL),now(NULL),before(NULL),node_num(0){}
	Tlist(Tlist &s){s.head=head;}
	~Tlist(){}
	  void creat();//���ɽڵ�
	  void Traverse();//��������
	  void insertlist();//�ڽڵ�ǰ����ڵ�b 
	  void deletelist();
	  void connect(Node<T> *pnode)
	  {
		  tail=head;
		  while(tail->Next!=NULL)
		  {
			  tail=tail->Next;
		  }
		  tail->Next=pnode;
	  }
	  Node<T> *gethead(){return head;}
};

template<class T>
void Tlist<T>::creat()
{
	
	cout<<"����0ʱֹͣ����"<<endl;
	now=before=new Node<T>;
	cout<<"Data:";
	cin>>now->Data;
	while(now->Data!=0)
	{
		node_num++;
		if(node_num==1)
			head=now;
		else 
			before->Next=now;
		before=now;
		now=new Node<T>;
		cout<<"Data:";
		cin>>now->Data;

	}
	before->Next=NULL;
	tail=now;
	delete now;
}
template<class T>
void Tlist<T>::Traverse()
{
	
	Node<T>  *p;
	p=head;
	int count=1;                                                                                 
	while(p!=NULL)
	{
		cout<<"���ǵ�"<<count<<"���ڵ�DataΪ:"<<p->Data<<endl;
		p=p->Next;count++;
	}
}


template<class T>
void  Tlist<T>::insertlist()
{
	Node<T>  *newn= new Node<T> ;
	cout<<"��������Ҫ�����������ϢData��";
	cin>>newn->Data;
	Node<T>  *p0,*p1,*p2;
	p1=head;
	p0=newn;
	if(head==NULL)
	{head=p0;p0->Next=NULL;
	tail=p0;}
	else
	{
		while((p0->Data>p1->Data)&&(p1->Next!=NULL))
		{p2=p1;	p1=p1->Next;}//�ҵ�Ҫ����Ľڵ�
		if(p0->Data<=p1->Data)
		{
			if(head==p1)  head=p0;
			else  p2->Next=p0;
			p0->Next=p1;
		}
		
		else
		{p1->Next=p0;p0->Next=NULL;tail=p0;}
	}
	node_num+=1;

}

template<class T>
void Tlist<T>::deletelist()
{
	int num;
	Node<T>  *p1,*p2;
	cout<<"��������Ҫɾ���Ľڵ�����:";
	cin>>num;
	p1=head;
	while(p1->Data!=num&&p1->Next!=NULL)
	{
		p2=p1;
		p1=p1->Next;
	}
	if(p1->Data==num)
	{
		if(p1==head)   head=head->Next;
		else     p2->Next=p1->Next;
		delete p1;
		cout<<"�ɹ�ɾ��"<<num<<endl;
		node_num=node_num-1;
	}
}

int main()
{
	Tlist<int > node1 , node2,A,B;
	node1.creat();
	node1.Traverse();
	Node<int> b;
	b.Data=0;
	node1.deletelist();
	cout<<"\nɾ����ڵ�����Ϊ��"<<endl;
	node1.Traverse();
	node1.insertlist();
	cout<<"\n�����Ľڵ�"<<endl;
	node1.Traverse();
	node2=node1;//������ĸ�ֵ
	cout<<"\nnoe1��ֵ��node2������"<<endl;
	node2.Traverse();
	cout<<"\nA������"<<endl;
	A.creat();
	cout<<"B������"<<endl;
	B.creat();
	A.connect(B.gethead());
	cout<<"A������B�������Ӻ�\n";
	A.Traverse();
	return 0;
}

