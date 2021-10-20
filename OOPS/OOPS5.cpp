#include<iostream>
using namespace std;

/*
Trivia:
    1. A Destructor is the opposite of constructor, because as constructor allocates the memory
        of a object, the destructor deallocates/free the memory of the object.
    2. The Destructor contains the same properties as the default constructor with only one difference
        (a) Same name as the class name
        (b) No return type
        (c) No Parameters
        (d) Can be created using the '~' sign (The Only Difference)
    3. The Code goes something like this:
        ~className(){}
    4. It is also called only once in a lifetime of a object when the scope/use of that object finishes
    5. There can be only one destructor whereas you can create many constructor
    6. Destructor only deletes the objects in static memory (not heap/dynamic memory)
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
    ~Student(){
        cout << "Destructor Called" << endl;
    }
};


int main(){

    Student s1("Stu1", 17, 34);
    s1.display(); // The Destructor will be called after this line
    system("pause"); //For Debugging, ignore it
    return 0;
} // The Destructor will be called after this line