import java.util.Scanner;
public class Test01{
	public static void main(String[] args){
		int score;
		Scanner sc = new Scanner(System.in);
		System.out.print("������ɼ���");
		score = sc.nextInt();
		if(score>=90){
			System.out.println("������ĳɼ��ȼ�Ϊ�ţ�");
		}
		else if(score>=80 && score<90){
			System.out.println("������ĳɼ��ȼ�Ϊ����");
		}
		else if(score>=60 && score<80){
			System.out.println("������ĳɼ��ȼ�Ϊ�У�");
		}
		else{
			System.out.println("������ĳɼ��ȼ�Ϊ�");
		}
		sc.close();
	}
}
		