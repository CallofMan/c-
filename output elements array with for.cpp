#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    int array[] { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    int lengthArray = sizeof(array) / sizeof(array[0]);
    
    for (int count = 0; count < lengthArray; ++count)
    {
           cout << array[count] << endl;
    }
    
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    
    return 0;
}
