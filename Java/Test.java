/*
public class Test{
	// ������ת���ַ��������
	public static void main(String[] args){
		char c1 = '\\';      // ��б��ת���ַ�
		char c2 = '\'';      // ������ת���ַ�
		char c3 = '\"';      // ˫����ת���ַ�
		char c4 = '\u2605';  // ʮ�����Ʊ�ʾ���ַ�
		char c5 = '\101';    // �˽��Ʊ�ʾ���ַ�
		char c6 = '\t';      // �Ʊ��ת���ַ�
		char c7 = '\n';      // ���з�ת���ַ�
		System.out.println("[" + c1 + "]");
		System.out.println("[" + c2 + "]");
		System.out.println("[" + c3 + "]");
		System.out.println("[" + c4 + "]");
		System.out.println("[" + c5 + "]");
		System.out.println("[" + c6 + "]");
		System.out.println("[" + c7 + "]");
	}
} */

/*
import java.util.Scanner;
public class Test{
	// ��boolean���ͱ�����¼��¼�û�������
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in); // ����ɨ��������ȡ����̨�����ֵ
		System.out.println("������6λ���룺");
		int password = sc.nextInt();  // ���û��ڿ���̨��������ָ�ֵ����������
		boolean result = (password == 924867);
		System.out.println("�û��������Ƿ���ȷ��" + result);
		sc.close(); // �ر�ɨ����
	}
} */


/*
import java.util.Scanner;
import java.util.Arrays;
public class Test{
	// �������
	public static void main(String[] args){
		int arr[] = new int[5];
		Arrays.fill(arr, 8);
		for(int x : arr)
			System.out.println(x);
	}
} */

import java.lang.String;
public class Test{
	// �ַ�����ʼ������
	public static void main(String[] args){
		String a = "ʱ����ǽ�Ǯ";           //ֱ�������ַ�������
		System.out.println("a = " + a);
		String b = new String("nnnn");       //  �����췽��ʵ��
		String c = new String(b);            // ʹ�������ַ�������ʵ��
		System.out.println("b = " + b);
		System.out.println("c = " + c);
		char[] charArray = {'t', 'i', 'm', 'e'};
		String d = new String(charArray); // ʹ���ַ������ʼ��
		System.out.println("d = " + d);
		char[] charArray2 = {'ʱ','��','��','��','��','Ǯ'};
		String e = new String(charArray2, 4, 2);
		System.out.println("e = " + e);
	}
}