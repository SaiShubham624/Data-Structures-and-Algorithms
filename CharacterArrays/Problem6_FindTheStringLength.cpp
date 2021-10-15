#include <iostream>
using namespace std;

/*
Problem: You have to find the length of the given string(without using the in-built 
header file for strings)
*/

int main()
{
    char name[15];
    // Solution: We will iterate over the array and stop as soon as we encouter '\0'
    cout << "Enter your Name " << endl;
    cin.getline(name, 15);
    int nameLength = 0;
    for (int i = 0; i < 10; i++)
    {
        if (name[i] == '\0')
        {
            nameLength = i;
            break;
        }
    }
    cout << "Your Name has " << nameLength << "characters" << endl;
    system("pause"); // For Debugging, ignore it
    return 0;
}