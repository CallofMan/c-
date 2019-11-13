#include <iostream>
#include <cstring>

void printCString(const char *str)
{
	while (*str != '\0')
	{
		std::cout << *str << std::endl;;

		++str;
	}
}

int main() 
{
	char word[] = "Hello, world!";
	
	/*	
	for (int index = 0; index < strlen(word); ++index)
	{
		std::cout << word[index] << std::endl;
	}
	*/
	
	printCString(word);
	
	return 0;
}
