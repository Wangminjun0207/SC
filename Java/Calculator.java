/*
 *��һ��Java���������˺ö�����
 *@2018/7/27
 *@wmj
 */

 //�����������ʹ��Scanner�Ӽ��̽����û�����
import java.util.Scanner;

class Calculator{
	public static void main(String [] args){
		int firstNumber;
		int secondNumber;
		int Sum = 0;
		char operator;
		//��������
		Scanner sc = new Scanner(System.in);
		System.out.println("��������ѧ���ʽ(a +/-/*// b):");
		//ʹ����������Ӽ��̶�����������
		firstNumber = sc.nextInt();
		//ʹ����������Ӽ��̶����ַ��������ַ�����sc.nextLine();
		operator = sc.next().charAt(0);
		secondNumber = sc.nextInt();
		switch(operator)
		{
			case '+':Sum = firstNumber + secondNumber;break;
			case '-':Sum = firstNumber - secondNumber;break;
			case '*':Sum = firstNumber * secondNumber;break;
			case '/':Sum = firstNumber / secondNumber;break;
			default:break;
		}
		System.out.println(firstNumber+" "+operator+" "+secondNumber+" = "+Sum);
	}
}