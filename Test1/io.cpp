#include <iostream>

using namespace std;

int readNumber()
{
	cout << "Enter whole numeral" << endl;
	int number;
	cin >> number;
	return number;
}

void writeAnswer(int answer)
{
	cout << "result is " << answer << endl;
}
