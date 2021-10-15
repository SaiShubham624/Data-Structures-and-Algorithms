#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
Trivia:
    1. String is actually a class in c++ but can be used as a datatype
    2. For Storing multiple string in a single variable you can use a vector or array
    3. For Getting input in string use the getline of the std namespace not the cin one
    4. You can treat a string as a character array
    5. Some functions in the string class:
        (a) stringName.find(string to find) => returns the index of the given string in the function
        (b) stringName.substr(indexOfString, charsToReturns) => returns the given number of characters
            from the given index in the string
        (c) to_string(different datatype to change) => Turns the given datatype into a string
            For Ex => to_string(123) will return string "123"
*/


int main(){
    vector<string> v;
    cout << "String Vector" << endl;
    v.push_back("Sai Shubham Ray");
    v.push_back("Sanket Ray");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    string sArray[4];
    cout << "String Array" << endl;
    for (int i = 0; i < 4; i++)
    { 
        getline(cin, sArray[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        cout << sArray[i] << endl;
    }
       
    system("pause"); //For Debugging, ignore it
    return 0;
}