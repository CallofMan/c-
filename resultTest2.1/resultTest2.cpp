#include <iostream>

using namespace std;

double inputNumber()
{
	cout << "Enter a real number.\n";

	double x;
	cin >> x;

	return x;
}

char inputSymbole()
{
	cout << "Enter -, +, * or /\n";

	char x;
	cin >> x;

	return x;
}

int main()
{
	double number1 = inputNumber();
	double number2 = inputNumber();
	char symbole = inputSymbole();

	double result;

	if (symbole == '-') result = number1 - number2;
	else if (symbole == '+') result = number1 + number2;
	else if (symbole == '*') result = number1 * number2;
	else if (symbole == '/') result = number1 / number2;

	cout << number1 << " " << symbole << " " << number2 << " = " << result << endl;

	return 0;
}