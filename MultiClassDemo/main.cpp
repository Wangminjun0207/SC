#include <iostream>
#include "BookMgr.h"
#include "User.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BookMgr bkmgr;
	//bkmgr.PrintBookList();
	User usr1(123456),usr2(2015464);
	bkmgr.BorrowBook(10001,usr1.GetUserID()); //��һ�������ڵ��� 
	bkmgr.BorrowBook(1006,usr1.GetUserID());   //�û�123456���鼮1006 
	bkmgr.BorrowBook(1006,usr2.GetUserID());	  //�û�2015464�ظ���1006 
	
	//����Ĵ���ͽ��û����鼮��ϵ�����ˣ�ͨ������������������û�ID�浽�鼮��USERID� 
	
	
	
	
	
	return 0;
}
