struct Car
{
	char parkingNumber[5];		//ͣ������� 
	char carNmber[10];			//���ƺ� 
	char carHost[10];			//�������� 
	char carType[6];			//���� 
	char parkDate[12];			//ͣ������ 
	char parkTime[6];			//ͣ��ʱ�� 
	char takeDate[12];			//ȡ������ 
	char takeTime[6];			//ȡ��ʱ�� 
	float parkCarCost;			//��ȡͣ������
	struct Car *next; 
};

