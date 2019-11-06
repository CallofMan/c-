#include <iostream>

struct Drob
{
	int numerator;
	int denominator;
};

void multiply(Drob x1, Drob x2)
{
	using std::cout;

	cout << static_cast<float>(x1.numerator * x2.numerator) / (x1.denominator * x2.denominator);
}

int main()
{
	using namespace std;

	Drob x1;
	cout << "Enter a first numerator: ";
	cin >> x1.numerator;
	cout << "Enter a first denominator: ";
	cin >> x1.denominator;

	Drob x2;
	cout << "Enter a second numerator: ";
	cin >> x2.numerator;
	cout << "Enter a second denominator: ";
	cin >> x2.denominator;

	multiply(x1, x2);

	return 0;
}