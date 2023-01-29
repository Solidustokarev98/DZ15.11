//Токарев СБД211
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
    cout << "Введите выражение: ";
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
        cout << "Ошибка\n";
    }
#endif
#ifdef Palindrom 
    cout << "Hello Palindrome" << endl;
    int number;//число, введенное с клавиатуры
    int reverse = 0;// число, записанное наоборот
    cout << "Введите число: "; cin >> number;
    int copy = number; //копируем значение number, чтобы введенное пользователем число осталось неизменным
    // а в процессе деления будем изменять copy
    while (copy)
    {
        reverse *= 10;			//освобождаем место следующего младшего разряда
        reverse += copy % 10;	//сохраняем младший разряд исходного числа
        copy /= 10;				//убираем младший разряд из исходного числа
    }
    cout << number << endl;
    cout << reverse << endl;
    if (reverse == number)
    {
        cout << "Палиндром" << endl;
    }
    else
    {
        cout << "Обычное число" << endl;
    }
#endif
#ifdef Ticket
    cout << "Счастливый билет" << endl;
    int num;
    cout << "Введите число: "; 
    cin >> num;
    int a1 = num / 100000;
    int a2 = (num / 10000) % 10;
    int a3 = (num / 1000) % 10;
    int a4 = (num / 100) % 10;
    int a5 = (num / 10) % 10;
    int a6 = num  % 10;
    if ((a1 + a2 + a3) == (a4 + a5 + a6)) {
        cout<<num<<" - Счастливый билет"<<endl;
    }
    else {
        cout<<num<<" - Обычный билет"<<endl;
    }
#endif
}