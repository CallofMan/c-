#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

float timeofLifeforLetters(string fullName, int age)
{
    int quantityofLetters = fullName.length();
    
    float result = static_cast<float>(quantityofLetters) / age;
    return result;
}

int main()
{
    setlocale(LC_ALL, "rus");
    
    cout << "¬ведите своЄ им€: ";
    
    string firstName;
    getline(cin, firstName);
    
    cout << "¬ведите свою фамилию: ";
    
    string secondName;
    getline (cin, secondName);
    
    cout << "¬ведите ваш возраст: ";
    
    string fullName =  firstName + " " + secondName;
    
    int age;
    cin >> age;
    
    float resultAge = timeofLifeforLetters(fullName, age);
    
    cout << "You've lived " << resultAge << " years for each letter in your name. " << endl;
    
    
    cin.clear(); 
    cin.ignore(32767, '\n');
    cin.get();
    
    return 0;
}
