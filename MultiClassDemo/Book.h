#ifndef BOOK_H
#define BOOK_H

class Book
{
	public:
		Book();
		Book(int nID,char *strName);
		~Book();
		//��ȡ���� 
		int GetBookId(){return m_nBookId;}
		char *GetBookName(){return m_pstrBookName;}
		int GetBookStatus(){return m_nStatus;}
		int GetBookUserID(){return m_nUserid;}
		//��ֵ���� 
		int SetBookStatus(int nStatus){m_nStatus = nStatus;}
		int SetBookUserID(int nUserId){m_nUserid = nUserId;}
		
	protected:
		int m_nBookId;
		char m_pstrBookName[12];
		int m_nStatus;   //0��������1�����;2����̭;3�������䣻 
		int m_nUserid;   //��˭���˱��������� 
};

#endif
