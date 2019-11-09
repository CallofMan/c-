#include <iostream>
#include <ctime>
#include <string>
#include <random>
#include <algorithm>

// просто инициализация
int lengthArray = 0;

// заполняю массив рандомным неповторяющимися числами, длина массива зависит от длины, введённой пользователем
int  *arrayRandom()
{
	using namespace std;

	while (true)
	{
		cout << "Enter length of array \n";
		cin >> lengthArray;

		if (cin.fail() || lengthArray <= 0)
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "You entered incorrect value. Try again!" << endl << endl;
		}
		else break;
	}

	cout << endl;

	// создаю динамический массив
	int *arrayNumbers = new int[lengthArray];

	int index = 0;
	bool key = true;
	int randNumber = 0;

	// беру рандомное число
	random_device (rd);
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(1, lengthArray);

	cout << "Unsort array: " << endl;

	while (index != lengthArray)
	{
		randNumber = dist(mt);

		// проверяю рандомное число на совпадение с уже имеющимися в массиве значениями, если вхождения есть, то генерится новое рандомное число
		for (int j = 0; j < index; j++)
		{
			if (randNumber == arrayNumbers[j])
			{
				key = false;
				break;
			}
			else
			{
				key = true;
			}
		}

		// если рандомное число прошло проверку на уникальность, записываю его в массив
		if (key == true)
		{
			arrayNumbers[index] = randNumber;
			cout << index + 1 << ": " << arrayNumbers[index] << endl;
			index++;
		}
	}

	cout << endl;

	return arrayNumbers;
}

// сортировка пузырьком
int *arraySort(int *arrayRandom)
{
	using std::swap;
	using std::cout;
	using std::endl;

	int temp = 0;
	bool key = true;
	int iteration = 0;
	// чтобы после каждой новой "полной" итерации не проверять последний (предпоследний и так далее...) элемент массива, так как он уже отсортирован
	int latestElement = 1;

	while (key == true)
	{
		// если все элементы отсортированы, то переменная не изменится и сортировка закончится
		key = false;

		for (int i = 0; i < lengthArray - latestElement; i++)
		{
			// если правое число больше левого, то меняю их местами
			if (arrayRandom[i + 1] < arrayRandom[i])
			{
				swap(arrayRandom[i + 1], arrayRandom[i]);

				/*
				temp = arrayRandom[i + 1];
				arrayRandom[i + 1] = arrayRandom[i];
				arrayRandom[i] = temp;
				*/

				key = true;
			}
		}

		if (key == true) ++iteration;


		++latestElement;
	}

	cout << "Early termination on iteration: " << iteration << endl << endl;

	return arrayRandom;
}

int main()
{
	using namespace std;

	int *sortedArray = arraySort(arrayRandom());

	cout << "Sort array: " << endl;

	// просто вывод отсортированного массива
	for (int i = 0; i < lengthArray; i++)
	{
		cout << i + 1 << ": " << sortedArray[i] << endl; 
	}

	// это чтобы консоль не дропалась
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();

	return 0;
}
