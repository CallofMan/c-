#include <iostream>
#include <ctime>
#include <string>
#include <random>

// просто инициализация
int lengthArray = 0;

// заполняю массив рандомным неповторяющимися числами, длина массива зависит от длины, введённой пользователем
int* arrayRandom()
{
	std::cout << "Enter length of array \n";
	std::cin >> lengthArray;

	// создаю динамический массив
	int* arrayNumbers = new int[lengthArray];

	int index = 0;
	bool key = true;
	int randNumber = 0;

	// беру рандомное число
	std::random_device (rd);
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1, lengthArray);

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
			std::cout << index + 1 << ": " << arrayNumbers[index] << std::endl;
			index++;
		}
	}
	return arrayNumbers;
}

// сортировка пузырьком
int* arraySort(int* arrayRandom)
{
	int temp = 0;
	bool key = true;

	// 
	while (key == true)
	{
		// если все элементы отсортированы, то переменная не изменится и сортировка закончится
		key = false;

		for (int i = 0; i < lengthArray - 1; i++)
		{
			// если правое число больше левого, то меняю их местами
			if (arrayRandom[i + 1] < arrayRandom[i])
			{
				temp = arrayRandom[i + 1];
				arrayRandom[i + 1] = arrayRandom[i];
				arrayRandom[i] = temp;

				key = true;
			}
		}
	}

	return arrayRandom;
}

int main()
{
	int* sortedArray = arraySort(arrayRandom());

	std::cout << std::endl;

	// просто вывод отсортированного массива
	for (int i = 0; i < lengthArray; i++)
	{
		std::cout << i + 1 << ": " << sortedArray[i] << std::endl; 
	}

	// это чтобы консоль не дропалась
	std::cin.clear();
	std::cin.ignore(32767, '\n');
	std::cin.get();

	return 0;
}