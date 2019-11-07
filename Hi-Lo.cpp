#include <iostream>
#include <ctime>

int generateRandomNumber()
{
	using namespace std;
	
	srand(static_cast<unsigned int>(time(0)));

	// сбросить результат, чтобы не занчение изменялось
	rand();
	rand();

	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	
	return static_cast<int>(rand() * fraction * static_cast<int>(100 - 1 + 1) + 1);
}

bool isWin(int randNumber)
{
	using namespace std;

	for (int countTry = 1; countTry <= 7; ++countTry)
	{
		cout << "Guess #" << countTry << ": ";
		int searchNumber;
		cin >> searchNumber;

		// проверка на буквы 
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "You entered incorrect value!" << endl;
			continue;
		}

		// проверка на выигрыш
		if (searchNumber == randNumber)
		{
			cout << "Yoy win!" << endl;
			return true;
		}
		else if (searchNumber > randNumber)
		{
			cout << "Search number is low." << endl;
			continue;
		}
		else
		{
			cout << "Search number is heigh." << endl;
			continue;
		}
	}

	return false;
}

int main()
{
	using namespace std;
	
	int quantityWin{ 0 };
	int quantityLose{ 0 };

	while (true)
	{
		int randNumber = generateRandomNumber();

		cout << "Let's play a game. I'm thinking of a number.You have 7 tries to guess what it is." << endl;

		bool win = isWin(randNumber);

		
		if (win == 1)
			quantityWin += 1;
		else quantityLose += 1;

		cout << "You won is " << quantityWin << ". You lost is " << quantityLose << endl;

		// лейбл для перехода в случае некорректного ввода значения (я знаю, что goto - это плохо. Простите, пожалуйста!
		tryAgain: 

		cout << "Would you want to play again? (y/n): ";
		char again;
		cin >> again;

		if (again == 'y')
			continue;
		else if (again == 'n')
			break;
		else goto tryAgain;
	}

	return 0;
}

