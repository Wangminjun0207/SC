#include <stdio.h>
#include <stdlib.h>
void showmenu1()
{
    printf("\n��ѡ����Ҫ��ת���Ľ���:\n");
    printf("1��������\n");
    printf("2���˽���\n");
    printf("3��ʮ����\n");
    printf("4��ʮ������\n");
    printf("0���˳�\n");
    printf("������˵���");
}
void showmenu2()
{
    printf("��ѡ����Ҫ����Ľ���:\n");
    printf("1��������\n");
    printf("2���˽���\n");
    printf("3��ʮ����\n");
    printf("4��ʮ������\n");
    printf("������˵���");
}
int inputNum(int min, int max)
{
    int num;
    while(1)
    {
        int s = scanf("%d", &num);
        if(1!=s)
        {
            printf("������� ���������룺");
            continue;
        }
        if(num<min || num>max)
        {
            printf("���뷶Χ�������������룺");
            continue;
        }
        break;
    }
    return num;
}
/*ʮ����ת��������� */
void fun1(int n)
{
    if(n/2)
        fun1(n/2);
    putchar('0'+n%2);
}
/*ʮ����ת�˽������ */
void fun2(int n)
{
    if(n/8)
        fun2(n/8);
    putchar('0'+n%8);
}
/*ʮ����תʮ��������� */
void fun3(int n)
{
    if(n/16)
        fun3(n/16);
    int i = n%16;
    if(i<10)
        putchar('0'+i);
    else
        putchar('a'+i-10);
}
/*������תʮ���� */
int fun4(char *str)
{
    int num = 0;
    while(*str != '\0')
    {
        int i = *str-'0';
        if(i>=0 && i<=1)// ���������ַ� 
            num = num*2+i;
        str++;
    }
    return num;
}
/*�˽���תʮ���� */
int fun5(char *str)
{
    int num = 0;
    while(*str != '\0')
    {
        int i = *str-'0';
        if(i>=0 && i<8)
            num = num*8+i;
        str++;
    }
    return num;
}
/*ʮ������תʮ���� */ 
int fun6(char *str)
{
    int num = 0;
    while(*str != '\0')
    {
        char ch = *str;
        if(ch>='0' && ch<='9')
            num = num*16+ch-'0';
        if(ch>='a' && ch<='f')
            num = num*16+10+ch-'a';
        str++;
    }
    return num;
} 

int main(void)
{
    char str[1024];
    int menu, output;
    while(1){
        showmenu1();
        menu = inputNum(0, 4);
        if(menu == 0)
            break;
        fflush(stdin);
        printf("���������ݣ�");
        switch(menu)
        {
            case 1:
                gets(str);
                output = fun4(str);
                break;
            case 2:
                gets(str);
                output = fun5(str);
                break;
            case 3:
                output = inputNum(0, INT_MAX);
                break;
            case 4:
                gets(str);
                output = fun6(str);
                break;
        }

        showmenu2();
        menu = inputNum(0, 4);
        switch(menu)
        {
            case 1:
                fun1(output);
                putchar('B');
                break;
            case 2:
                fun2(output);
                putchar('Q');
                break;
            case 3:
                printf("%d", output);
                putchar('D');
                break;
            case 4:
                fun3(output);
                putchar('H');
                break;
        }
        putchar('\n');
        system("pause");
    }
    return 0;
}
