#include <iostream>
#include <cstring>
using namespace std;

/*
Problem: Can you implement the following functions yourself?
    -> strlen(char input[]) => Returns length of the given string
    -> strcmp(char input1[], char input2[]) => Compares two string
    -> strncpy(char dest_str[], char source_str[]) => Copies the first n characters of source string into
    dest_str
*/

// strlen function
int length(char input[])
{
    int nameLength = 0;
    for (int i = 0; i < 10; i++)
    {
        if (input[i] == '\0')
        {
            nameLength = i;
            break;
        }
    }
    return nameLength;
}

// strcmp function
int compareString(char input1[], char input2[])
{
    if (length(input1) != length(input2))
        return -1;
    int n = length(input1);
    for (int i = 0; i < n; i++)
    {
        if (input1[i] != input2[i])
            return int(input1[i]) - int(input2[i]);
    }
    return 0;
}

// strncpy
void copyNChars(char dest_str[], char source_str[], int n)
{
    for (int i = 0; i < n; i++)
    {
        dest_str[i] = source_str[i];
    }
}

int main()
{
    // Testing the functions
    char destStr[23] = "Wai";
    char sourceStr[23] = "Sai";
    cout << "Before Copying" << endl;
    cout << "The Source String " << sourceStr << endl;
    cout << "The Destination String " << destStr << endl;
    copyNChars(destStr, sourceStr, 1);
    cout << "Before Copying" << endl;
    cout << "The Source String " << sourceStr << endl;
    cout << "The Destination String " << destStr << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}