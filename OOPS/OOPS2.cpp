#include<iostream>
using namespace std;

/*
Trivia:
    1. Getters and setters are two sides of the same coin. 
    2. Getters are the functions which get the properties which cannot be accessed normally
    3. Setters are the functions which set the properties which cannot be accessed normally
Shortcut:
    * When creating a dynammically typed object you don't need to use the dereference operator again
    and again. You can also use the '->' operator. For Ex:
    (*dynamicObject).propertyName/functionName and
    dynamicObject->propertyName/functionName will give the same results
*/
class Student{
    // A property which cannot be accessed normally
    int Age;
public:
    int RollNumber;
    // A Getter which will fetch all the properties of the class
    void display(){
        cout << Age << endl;
        cout << RollNumber << endl;
    }
    // A Getter which will fetch the age property which cannot be accessed normally
    int getAge() {
        return Age;
    }
    // A Setter which will set the age property which cannot be accessed normally
    void setAge(int age){
        Age = age;
    }
};
int main(){
    // Statically Typed Object
    Student s1;
    s1.RollNumber = 23;
    s1.setAge(13); //Setting the age of the object using the setter
    s1.display(); // Using the getter object
    // Dynamically Typed Object
    Student* s2 = new Student;
    s2->RollNumber = 34;
    s2->setAge(18); //Setting the age of the object using the setter
    s2->display(); // Using the getter object
    system("pause"); //For Debugging, ignore it
    return 0;
}