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

	while (true)
	{
		int number;

		while (true)
		{
			cout << "Enter a number for calculation his factorial or exit <0>: ";
			cin >> number;

			if (cin.fail())
			{
				cin.clear();
				cin.ignore(32767, '\n');
				cout << "You entered an incorrect value." << endl << endl;

				continue;
			}
			else break;
		}

		if (number == 0)
			break;

		int factorial{ calculationFactorial(number) };

		cout << "The factorial of " << number << " is " << factorial << endl << endl;
	}

	return 0;
}