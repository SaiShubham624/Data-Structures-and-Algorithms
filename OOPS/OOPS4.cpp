#include<iostream>
using namespace std;

/*
Trivia:
    1. Copy constructor is a type of special method which creates a object by copying
        another object of the same class
    2. There is a default copy constructor the moment a class is created/compiled, and we can use it
    3. We can also create a user-copy constructor by our own and use it
    4. It can be created by something like this:
        className(const className &parameterName){code}
    5. Alternative Explanation: 
        It copies the properties of an already created object into a new object 
*/

class Student
{
private:
    int Age;
    int RollNumber;
    string Name;
public:
    Student(string name, int age, int RollNumber){
       Name = name;
       if(age > 102) Age = 0; else Age = age;
       // using this keyword to access the rollNum property of the class(or current object)
       this->RollNumber = RollNumber;  
    }
    void display(){
        cout <<"The Name of the student is "<< Name << endl;
        cout <<"Student's Age " << Age << endl;
        cout <<"Student's Roll Number " << RollNumber << endl;
    }
};


int main(){

    Student s1("Stu1", 18, 24);
    s1.display();

    Student s2(s1); // The Copy constructor is called here
    s2.display();

    system("pause"); //For Debugging, ignore it
    return 0;
}