#include <iostream>
using namespace std;

/*
Problem: You have to reverse the given String
Solution: We will use the swapping approach i.e. arr[0] and arr[n-1] will be 
swapped with each other where n is the size of the array and process will 
repeat itself 
*/

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

void reverse(char input[])
{
    int start = 0;
    int end = length(input) - 1;
    while (start <= end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

int main()
{
    char Str[23];
    cin >> Str;
    reverse(Str);
    cout << Str << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}