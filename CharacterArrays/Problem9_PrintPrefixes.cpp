#include <iostream>
#include <cstring>
using namespace std;

/*
Problem: You have to print all the prefixes of the given array
For Ex:
    Input = "abcd"
    The Prefixes will be "a", "ab", "abc"
*/

void printPrefixes(char input[])
{
    int n = strlen(input);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << input[j];
        }
        if (i != 0)
            cout << endl;
    }
}

int main()
{
    char Str[30];
    cout << "Enter the Word: ";
    cin.getline(Str, 30);
    printPrefixes(Str);
    system("pause"); //For Debugging, ignore it
    return 0;
}