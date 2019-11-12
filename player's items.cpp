#include <iostream>

enum class Items
{
	HEALTH_POTION,
	TORCH,
	ARROW,
	MAX_ITEMS,
};

int countTotalItems(int *items)
{
	int totalItems {};
	
	for (int count = 0; count < Items::MAX_ITEMS; ++count)
	{
		totalItems += items[count];
	}
	
	return totalItems;
}

int main() 
{
	int items[Items::MAX_ITEMS] {3, 6, 12};
	
	Items man; 
	
	std::cout << "Total items are " << countTotalItems(items);
	
	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	
	return 0;
}
