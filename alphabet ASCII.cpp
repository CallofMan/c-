#include <iostream>

int main()
{
	char word{ 'a' };

	while (word <= 'z')
	{
		std::cout << word << " - " << static_cast<int>(word) << std::endl;
		word++;
	}

	return 0;
}
