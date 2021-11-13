#include<iostream>
#include<string>
using namespace std;

/*
Problem:
    You have to print the subsequences of the given String using recursion.
*/

// Solution
void subsequence(string inputStr, string outputStr = ""){
    if(inputStr.length() == 0){
        cout << outputStr << endl;
        return;
    }
    subsequence(inputStr.substr(1), outputStr);
    subsequence(inputStr.substr(1), outputStr + inputStr[0]);
}

int main(){
    string inputWord;
    cout << "This program prints the subsequence of the given word" << endl;
    cout << "Enter the Word" << endl << "> ";
    cin >> inputWord;
    subsequence(inputWord);

    system("pause"); //For Debugging, ignore it
    return 0;
}