/*
 *������д(override),this��super��ʹ��
 *this()��������Ĺ��캯����this.xxx()�����������ͨ����
 *super()���û���Ĺ��캯����super.xxx()���û������ͨ����
 *@201/7/28
 *@wmj
 */

class Person{
	String name;
	String gerden;
	int age;
	
	Person(){
		
	}
	Person(String name, String gerden, int age){
		//����������޲������캯��
		this();
		this.name = name;
		this.gerden = gerden;
		this.age = age;
	}
	void Sleep(){
		System.out.println("˯��");
	}
	void Eat(){
		System.out.println("�Է�");
	}
}

class Student extends Person{
	String grade;
	String address;
	
	Student(String name, String gerden, int age,String grade, String address){
		//���û���Ĺ��캯��
		super(name,gerden,age);
		this.grade = grade;
		this.address = address;
	}
	//������д
	void Sleep(){
		System.out.println("sleep");
	}
	void Eat(){
		System.out.println("eat");
	}
	void Study(){
		System.out.println("study");
	}
	void Introduce(){
		//���ø�д��ķ���
		this.Sleep();
		this.Eat();
		this.Study();
	}
}

class StudentTest{
	public static void main(String [] args){
		Student student = new Student("www","male",18,"colloge","chengdu");
		student.Introduce();
	}
}
