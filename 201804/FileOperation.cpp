#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
	char fileName[20];
	cout<<"����Ҫ�򿪵��ļ��� ��"; 
	cin>>fileName;
	ofstream inputFile; 
	inputFile.open(fileName);
	if(!inputFile)
	{
		cout<<"���ļ�ʧ�ܣ�"<<endl;
		exit(0);	
	}
	inputFile<<"I hope you live a life you're proud of.\n";
	inputFile<<"If you find that you're not,I hope you\n";
	inputFile<<"have the strength to start all over again!\n";
	inputFile.close();
	char sentence[50];
	ifstream outputFile;
	outputFile.open(fileName);
	while(!outputFile.eof())
	{
		outputFile.getline(sentence,81,'\n');
		if(outputFile.fail())
			break;
		cout<<sentence<<endl;
	}
	outputFile.close();
	return 0;
} 
