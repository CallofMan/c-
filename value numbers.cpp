#include <iostream>

int main()
{
	int outer = 1;
	int before{ 4 };

	while (outer <= 5)
	{
		int inner = outer;
		int count{ 1 };

		while (count <= before)
		{
			std::cout << ' ' << " ";
			count++;
		}

		while (inner >= 1)
			std::cout << inner-- << " ";

		std::cout << "\n";

		--before;
		++outer;
	}

	return 0;
}