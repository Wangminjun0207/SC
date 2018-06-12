/*
 *�������Ķ�̬������ģ�壬����һϵ��λ������������������ͬ���͵�Ԫ����ɣ�
 *Ԫ�ظ������ڳ�������ʱ�ı䣬����ɸ�����û����ɵĳ�Ա������������ı����У�
 *���룩�������������ʵ�ֶԸ�ģ����Ĺ��ܲ��ԡ�
 */ 
#include <iostream>
using namespace std;
enum ErrorType{ invalidArraySize, memoryAllocatetionError, indexOutOfRang};
char *errorMsg[] = {"Invalid array size","Memory allocatetion error","Invalid index"};
template <class T>
class Array
{
private:
	T *alist;
	int size;
	void Error(ErrorType error)const{cout<<errorMsg[error]; exit(0);}//���������Ϣ
public:
	Array(int sz=50);//���캯��
	Array(const Array<T>& X);//��������
	~Array(void);
	Array<T>& Equal(const Array<T>& rhs);
	T& GetItem(int i);
	int Getsize(void)const;//��ȡ�����С
	void Resize(int sz);//�������������С	
};

template <class T>
Array<T>::Array(int sz)
{
	if(sz <= 0)
		Error(invalidArraySize);
	size = sz;
	alist = new T[size];
	if(alist == 0)
		Error(memoryAllocatetionError);
	for(int i=0;i<size; i++)
		alist[i] = i;
}

template <class T>
Array<T>::Array(const Array<T> & x)
{
	int n = x.size;
	size = n;
	alist = new T[n];
	if(alist == 0)
		Error(memoryAllocatetionError);
	T * srcptr = x.alist;
	T * destptr = alist;
	while(n--)
		*destptr++=*srcptr++;
}

template <class T>
Array<T>::~Array()
{
	delete[] alist;
}
template <class T>

Array<T>& Array<T>::Equal(const Array<T> &rhs)
{
	int  n = rhs.size;
	if(size != n)
	{
		delete[] alist;
		alist = new T[n];
		if(alist == 0)
			Error(memoryAllocatetionError);
		size = n;
	}
	T * destptr = alist;
	T * srcptr = rhs.alist;
	while(n--)
		*destptr++ = *srcptr++;
	return *this;
}

template <class T>
T &Array<T>::GetItem(int n)
{
	if(n<0 || n>size-1)
		Error(indexOutOfRang);
	return alist[n];
} 

template <class T>
int Array<T>::Getsize() const
{
	return size;
}

template <class T>
void Array<T>::Resize(int sz)
{
	size = sz;
}

int main()
{
	Array<int>array(10);
    array.Getsize();
    cout<<"û����������֮ǰ size = "<<array.Getsize()<<endl;
    array.Resize(20);
	cout<<"������������֮�� size = "<<array.Getsize()<<endl;
	return 0;
}

