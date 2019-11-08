#include <iostream>

namespace Animals
{
    enum Animal  
    {
          CHICKEN, 
          LION,
          GIRAFFE,
          ELEPHANT,
          DUCK,
          SNAKE,
          ALL_ANIMALS,
    }; 
}

int main()
{
    using namespace Animals;
    using std::cout;
    using std::endl;
    using std::cin;
    
    int animals[ALL_ANIMALS] {2, 4, 4, 4, 2, 0};
    
    cout << "Length of array is " << sizeof(animals) / sizeof(int) << endl;
    
    cout << "The elephant has " << animals[ELEPHANT] << " legs." << endl;
    
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    
    return 0;
}
