#include <iostream>
#include "io.h"

int main()
{
	int number1;
	int number2;
	int result;

	number1 = readNumber();
	number2 = readNumber();
	result = number1 + number2;

	writeAnswer(result);
	return 0;
}
