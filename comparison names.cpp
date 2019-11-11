#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string names[8] = { "Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly" };
	string name;

	bool exit{ false };

	// сама проверка 
	do
	{
		cout << "Enter a name: ";
		getline(cin, name);

		for (const auto& nameSearch : names)
		{
			if (nameSearch == name)
			{
				cout << name << " was found \n" << endl;
				break;
			}
			else
			{
				cout << name << " wasn't found \n" << endl;
				break;
			}
		}

		// выход или продолжение 
		while (true)
		{
			cout << "Try again or exit (a / e): ";
			char key;
			cin >> key;

			cout << endl;

			// условия выхода или продолжения
			if (key == 'e')
			{
				exit = true;
				break;
			}
			else if (key == 'a')
			{
				cin.ignore(32767, '\n');
				break;
			}
			else continue;
		}

	} while (exit == 0);

	return 0;
}