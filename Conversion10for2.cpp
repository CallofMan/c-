#include <iostream>

using namespace std;

int inputNumber()
{
	cout << "Enter a number in range 0 to 255: ";

	uint16_t number;
	cin >> number;

	return number;
}

bool isTrueorFalse(uint16_t number, uint16_t comparison)
{
	if (number >= comparison)
		return true;
	else return false;
}

void valueResult(uint16_t position)
{
	cout << position;
}

int main()
{
	uint16_t number = inputNumber();

	bool bit1 = isTrueorFalse(number, 128);
	if (bit1 == 1)
		number -= 128;
	valueResult(bit1);

	bool bit2 = isTrueorFalse(number, 64);
	if (bit2 == 1)
		number -= 64;
	valueResult(bit2);

	bool bit3 = isTrueorFalse(number, 32);
	if (bit3 == 1)
		number -= 32;
	valueResult(bit3);

	bool bit4 = isTrueorFalse(number, 16);
	if (bit4 == 1)
		number -= 16;
	valueResult(bit4);

	cout << " ";

	bool bit5 = isTrueorFalse(number, 8);
	if (bit5 == 1)
		number -= 8;
	valueResult(bit5);

	bool bit6 = isTrueorFalse(number, 4);
	if (bit6 == 1)
		number -= 4;
	valueResult(bit6);

	bool bit7 = isTrueorFalse(number, 2);
	if (bit7 == 1)
		number -= 2;
	valueResult(bit7);

	bool bit8 = isTrueorFalse(number, 1);
	if (bit8 == 1)
		number -= 1;
	valueResult(bit8);

	cout << endl;

	return 0;
}