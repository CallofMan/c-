#include <iostream>

int calculate(int x, int y, char sign)
{
	switch (sign)
	{
		case '+':
			return (x + y);
		case '-':
			return (x - y);
		case '*':
			return (x * y);
		case '/':
			return (x / y);
		case '%':
			return (x % y);
		default:
			std::cout << "calculate(): Unhandled case\n";
			return 0;
	}
}

int main()
{
	using namespace std;

	cout << "Enter a first integer number: ";
	int x;
	cin >> x;
	cout << "Enter a second integer number: ";
	int y;
	cin >> y;
	cout << "Enter a sign: ";
	char sign;
	cin >> sign;

	cout << x << " " << sign << " " << y << " = " << calculate(x, y, sign) << endl;

	return 0;
}
