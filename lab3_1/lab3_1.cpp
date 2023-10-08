#include <iostream>

using namespace std;

int main()
{
	int num;
	bool a = true;
	while (a == true)
	{
		setlocale(LC_ALL, "ru");
		cout << "Введите положительное трехзначное число ";
		cin >> num;
		if ((num > 0)&&(num/100<10)&&(num>=100))
		{
			a = false;
		}
		else
		{
			a = true;
		}
	}
	if (
		((num / 100) != (num % 100 / 10)) && 
		((num / 100) != (num % 10)) && 
		((num % 100 / 10) != (num % 10))
		)
	{
		cout << "Все цифры числа различны";
	}
	else
	{
		cout << "Не все цифры числа различны";
	}
}