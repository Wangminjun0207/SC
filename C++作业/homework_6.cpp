/*
 *��һ��ṹʵ��
 
class Student
{
	private:
		string m_Name;
		string m_Number;
		string m_Gerden;
		string m_Grade;
		float  m_Score;
	public:
		Student(string _name, string _number, string _gerden, string _grade, float _score);
		string GetName(){return m_Name;}
		string GetNumber(){return m_Number;}
		string GetGerden(){return m_Gerden;}
		string GetGrade(){return m_Grade;}
		float  GetScore(){return m_Score;}
};

Student::Student(string _name, string _number, string _gerden, string _grade, float _score)
{
	m_Name = _name;
	m_Number = _number;
	m_Gerden = _gerden;
	m_Grade = _grade;
	m_Score = _score;
}

 */
 
 
 
 
/*
 *���з�����ϵ�����ϵʵ��
class Animal
{
	private:
		string name;
	public:
		Animal(string _name):name(_name){}
		void eat() {}
};

class Horse : public Animal
{
	public:
		Horse(string _name):name(_name){}
		void eat() {cout<<"Horse"<<name<<"eat grass.";}
};

 */ 
 
/*
 *���оۺϹ�ϵ�����ϵʵ��
class Engine { };
class Tyre { };
class Car
{
	public:
		Engine * pE;
		Tyre   * pT;
};

*/

 
