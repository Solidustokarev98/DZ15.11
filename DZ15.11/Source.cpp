//������� ���211
#include<iostream>
using namespace std;

#define Calculator
//#define Ticket
//#define Palindrom
void main() {
	setlocale(LC_ALL, "Russian");
#ifdef Calculator 
    float a, b;
    char oper;
    cout << "������� ���������: ";
    cin >> a;
    cin >> oper;
    cin >> b;
 

    switch (oper) {
    case '-':
        cout << a << oper <<b <<" = " << a - b << '\n';
        break;
    case '+':
        cout << a << oper << b << " = " << a + b << '\n';
        break;
    case '*':
        cout << a << oper << b << " = " << a * b << '\n';
        break;
    case '/':
        cout << a << oper << b << " = " << a / b << '\n';
        break;
    default:
        cout << "������\n";
    }
#endif
#ifdef Palindrom 
    cout << "Hello Palindrome" << endl;
    int number;//�����, ��������� � ����������
    int reverse = 0;// �����, ���������� ��������
    cout << "������� �����: "; cin >> number;
    int copy = number; //�������� �������� number, ����� ��������� ������������� ����� �������� ����������
    // � � �������� ������� ����� �������� copy
    while (copy)
    {
        reverse *= 10;			//����������� ����� ���������� �������� �������
        reverse += copy % 10;	//��������� ������� ������ ��������� �����
        copy /= 10;				//������� ������� ������ �� ��������� �����
    }
    cout << number << endl;
    cout << reverse << endl;
    if (reverse == number)
    {
        cout << "���������" << endl;
    }
    else
    {
        cout << "������� �����" << endl;
    }
#endif
#ifdef Ticket
    cout << "���������� �����" << endl;
    int num;
    cout << "������� �����: "; 
    cin >> num;
    int a1 = num / 100000;
    int a2 = (num / 10000) % 10;
    int a3 = (num / 1000) % 10;
    int a4 = (num / 100) % 10;
    int a5 = (num / 10) % 10;
    int a6 = num  % 10;
    if ((a1 + a2 + a3) == (a4 + a5 + a6)) {
        cout<<num<<" - ���������� �����"<<endl;
    }
    else {
        cout<<num<<" - ������� �����"<<endl;
    }
#endif
}