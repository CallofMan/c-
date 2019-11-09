#include <iostream> 
#include <algorithm> // для std::swap. В C++11 используйте заголовок <utility>

int main()
{
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int largerIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] > array[largerIndex])
				largerIndex = currentIndex;
		}
		std::swap(array[startIndex], array[largerIndex]);
	}

	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';

	return 0;
}