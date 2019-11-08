#include <iostream>
 
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    
    int students[] = { 73, 85, 84, 44, 78};
    const int numStudents = sizeof(students) / sizeof(students[0]);
 
    int maxScore = 0; 
    int maxIndex { };
 
    for (int person = 0; person < numStudents; ++person)
        if (students[person] > maxScore)
        {
            maxScore = students[person];
            maxIndex = person;
        }
            
 
    cout << "The best score was " << maxScore << ". His index is " << maxIndex << endl;
    
    cin.clear();
    cin.ignore(32767, '\n');
    cin.get();
 
    return 0;
}
