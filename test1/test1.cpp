#include <iostream>
#include "test1.h"

using namespace std;


void func1() {
	 
	cout << __DATE__ << " " << __TIME__ << endl;

}

void func2() {

	system("explorer  https://yandex.ru");

}

void func3() {
	float a, b, c{};
char d;
int p{};

	while (p != 2)
	{
		// Выводим что выбрать
		cout << "	1 = calculator \n	2 - exit \n";
		// Вводим значение переменной p
		cin >> p;
		// Проверяем p
		switch (p)
		{   // Если p равно 1
		case 1:
		{
			cout << "	First number ";
			cin >> a;
			cout << "	Action with numbers "; 
			cin >> d;
			cout << "	Second number ";
			cin >> b;
			if (d == '+')
				c = a + b;
			if (d == '-')
				c = a - b;
			if (d == '*')
				c = a * b;
			if (d == '/')
				c = a / b;
			cout << "	Result = " << c << endl;
		}
		case 2:
		{   
			break;
		}
		}
		


	}
}








	int main() {

		setlocale(LC_ALL, "rus");




		int chse;

		while (true) {
			cout << "\n" << "Functions:" << endl;
			cout << "1 - show date and time" << endl << "2 - open browser" << endl << "3 - calculator" << endl << "* - another key - exit" << endl;
			cin >> chse;
			switch (chse) {
			case 1: {
				func1();
				break;
			}
			case 2: {
				func2();
				break;
			}
			case 3: {
				func3();
				break;
			}
				  /*case 4: {
					   zad4();
				   }
				   case 5: {
					   zad5();
					   break;
				   }
				   case 6: {
					   zad6();
					   break;
				   }
				   case 7: {
					   zad7();
					   break;
				   }*/
			default:
				return 0;
			}
		}

	}

