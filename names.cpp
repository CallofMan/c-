#include <iostream>
#include <string>
#include <utility>

using std::string;
using std::cout;
using std::cin;
using std::endl;

// возвращает введённое количество имён 
int howManyNames()
{
	int x;

	while (true)
	{
		cout << "Enter a quantity names: ";
		cin >> x;

		if (cin.fail() || x < 0)
		{
			cin.clear();
			cin.ignore(32767, '\n');

			cout << "You entered incorrect value. Try again! \n" << endl;
		}
		else break;
	}

	// очищаю буфер для дальнейшего использования
	cin.ignore(32767, '\n');

	return x;
}

// возвращает введённое имя
string inputName(int countName)
{
	string name;

	while (true)
	{
		cout << "Enter name #" << countName << ": ";
		getline(cin, name);

		// проверка на некорректные значения
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');

			cout << "You entered incorrect value. Try again! \n" << endl;
		}
		else break;
	}

	return name;
}

void sortNamesAlphabet(string *arrayNames, int lengthArrayNames)
{
	// Перебираем каждый элемент массива
	for (int startIndex = 0; startIndex < lengthArrayNames; ++startIndex)
	{
		// smallestIndex - индекс наименьшего элемента, с которым мы столкнулись
		int smallestIndex = startIndex;

		// Ищем наименьший элемент, который остался в массиве (начиная со startIndex+1)
		for (int currentIndex = startIndex + 1; currentIndex < lengthArrayNames; ++currentIndex)
		{
			// Если текущий элемент меньше нашего ранее найденного наименьшего элемента,
			if (arrayNames[currentIndex] < arrayNames[smallestIndex])
				// то тогда это новое наименьшее значение в этой итерации
				smallestIndex = currentIndex;
		}

		// Меняем местами наш начальный элемент с найденным наименьшим элементом массива
		std::swap(arrayNames[startIndex], arrayNames[smallestIndex]);
	}
}

int main()
{
	int lengthArrayNames{ howManyNames() };

	// динамика
	string *arrayNames = new string[lengthArrayNames];

	//  заполняю массив именами
	for (int countName = 0; countName < lengthArrayNames; ++countName)
	{
		arrayNames[countName] = inputName(countName + 1);
	}

	cout << endl;
	cout << "Sort array: " << endl;

	sortNamesAlphabet(arrayNames, lengthArrayNames);

	// выводим отсортированный массив
	for (int iii = 0; iii < lengthArrayNames; ++iii)
	{
		cout << "Name #" << iii + 1 << ": " << arrayNames[iii] << endl;
	}

	// возвращение выделённой памяти
	delete[] arrayNames;
	// обнуление указателя
		arrayNames = nullptr;

	return 0;
}