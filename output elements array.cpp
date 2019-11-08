#include <iostream>

int inputNumber()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    int result; 
    
    while (true)
    {
        cout << "Eneter a number of range 1 to 9: ";
        
        cin >> result;
        
        if (result < 1 || result > 9)
        {
            cin.clear(); 
            cin.ignore(32767, '\n'); 
            
            cout << "You entered incorrect value. Repeat again!" << endl << endl;
        }
        else 
        {
            break;   
        }
    }   
    
    return result;
}

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    int array[] { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    int lengthArray = sizeof(array) / sizeof(array[0]);
    
    int myNumber = inputNumber();
    
    for (int count{ 0 }; count < lengthArray; ++count)
    {
           cout << array[count] << endl;
    }
    for (int count{ 0 }; count < lengthArray; ++count)
    {
        if (myNumber == array[count])
        {
            cout << "Index your number is " << count << endl;
        }
    }
    
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
    
    return 0;
}
