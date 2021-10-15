#include<iostream>
#include<cstring>
using namespace std;

/*
Problem: You have to print all the suffixes of the given array
For Ex:
    Input = "abcd"
    The Prefixes will be "d", "cd", "bcd", "abcd"
*/

void printSuffixes(char input[])
{
    int n = strlen(input);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}

int main(){
    char Str[23] = "abcd";
    printSuffixes(Str);
    system("pause"); //For Debugging, ignore it
    return 0;
}