#include <iostream>

int calculationFactorial(int factorial)
{
	int result{ 1 };

	for (int count{ 1 }; count <= factorial; ++count)
	{
		result *= count;
	}

	return result;
}

int main()
{
	using namespace std;

	cout << "Enter a number for calculation his factorial: ";
	int number;
	cin >> number;

	int factorial{ calculationFactorial(number) };

	cout << "The factorial of " << number << " is " << factorial << endl;

	return 0;
}

