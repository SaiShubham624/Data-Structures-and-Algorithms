#include <iostream>
using namespace std;
/*
Trivia:
    1. cout and cin works differently with character arrays than
    they do with integers arrays (You don't have to use a for loop, just print and 
    take the input them directly) (Line 15-17)
    2. The rest of the spaces are automatically appended with the null character (Line 15-17)
    3. However, if you precisely print the index after the null character it will print it (Line 19-20)
    4. The content you can store in a character array is n-1 where the is the n is the size of array
*/
int main()
{
    char Nickname[10]; // The Character Array
    char FullName[20];
    // Trivia 1 and 2
    cout << "Enter your NickName: " << endl;
    cin >> Nickname;

    cout << "Enter your Full Name " << endl;
    cin.ignore();
    cin.getline(FullName,20);
    cout << "Your Nick Name is " << Nickname << endl;
    cout << "Your Full Name is " << FullName << endl;
    // Trivia 3
    // name[5] = 'r'; // Suppose the null character is at the 4th Index
    // cout << name[5] << endl;
   
    


    cout << endl;
    system("pause"); // For Debugging, Ignore It
    return 0;
}
