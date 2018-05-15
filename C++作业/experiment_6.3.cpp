/*
 *������ͨ�Ļ���building�������洢һ��¥���Ĳ������������Լ�������ƽ����������
 *������house���̳�building�����洢������ԡ�ҵ����������⣬����������office���̳�
 *building�����洢�������绰����Ŀ��
 */
 #include <iostream>
 using namespace std;
 
 
 class building
 {
 	public:
 		int m_nFloor;
 		int m_nRoom;
 		float m_Area;
 		building(int floor, int room, float area)
 		{
 			m_nFloor = floor;
 			m_nRoom = room;
 			m_Area = area;
		}
		~building(){}
 		void print()
 		{
 			cout<<"floor    :"<<m_nFloor<<endl;
 			cout<<"room     :"<<m_nRoom<<endl;
 			cout<<"area     :"<<m_Area<<endl;
		}
 };
 
 class house : public building
 {
 	public:
 		int m_nBadroom;
		int m_nBathroom; 
		house(int floor, int room, float area, int badroom, int bathroom):building(floor, room, area)
		{
			m_nBadroom = badroom;
			m_nBathroom = bathroom;
		}
		~house(){}
		void print()
		{
			building::print();
			cout<<"badroom  :"<<m_nBadroom<<endl;
			cout<<"bathroom :"<<m_nBathroom<<endl;
		}
 };
 
 class office : public building
 {
 	public:
 		int m_nFireExtinguisher;
 		int m_nTelphone;
 		office(int floor, int room, float area, int fireEx, int phone):building(floor, room, area)
 		{
			m_nFireExtinguisher = fireEx;
			m_nTelphone = phone;
		}
		~office(){}
		void print()
		{
			building::print();
			cout<<"telphone :"<<m_nTelphone<<endl;
			cout<<"fireExtinguisher:"<<m_nFireExtinguisher<<endl;
		}
 };
 
 int main()
 {
 	house house1(5,120,6400.00,60,38);
 	house1.print();
 	office office1(5,120,6400.00,22,100);
 	office1.print();
 	return 0;
 }
