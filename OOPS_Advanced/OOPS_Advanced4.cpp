#include<iostream>
using namespace std;

/*
Trivia:
    1. Static properties are properties that only belong to the class
    2. It can be created by using the keyword static like:
        static datatype propertyName;
    3. A Static Property can only be initialized outside the class like,
        datatypeOfTheStaticProperty className::propertyName = value;
    4. The Static property are the same for all of the objects of that class

*/

class Student{
    public:
        int age;
        int rollNumber;
        // This is a Static Property
        static int totalStudents;
};

// Initializing the Static Property
int Student::totalStudents = 23;


int main(){

    system("pause"); //For Debugging, ignore it
    return 0;
}