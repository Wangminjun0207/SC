/*
 *ͨ��forѭ����1��+ 2! + ... +20!
 *@2018/7/28
 *@wmj
 */

public class Factorial{
	static long Sum = 0;
	static long Fac = 1;
	public static void main(String [] args){
		for(int i = 1;i <= 20;i++)
		{
			//��̬�����������ĵľ�̬����������ǷǾ�̬��������������
			Fac *= i;
			Sum = Sum + Fac;
		}
		System.out.println("1��+ 2! + ... +20! = "+Sum);
	}
}

//ͨ������forѭ��Ƕ����1��+ 2! + ... +20!
/*public class Factorial{
	static long Sum = 0;
	static long Fac = 1;
	public static void main(String [] args){
		for(int i = 1;i <= 20;i++)
		{
			//��̬�����������ĵľ�̬����������ǷǾ�̬��������������
			Fac = 1;
			for(int j = 1;j <= i;j++)
			{
				Fac = Fac * j;
			}
			Sum = Sum + Fac;
		}
		System.out.println("1��+ 2! + ... +20! = "+Sum);
	}
}*/