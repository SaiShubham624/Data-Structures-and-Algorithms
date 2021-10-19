#include<iostream>
using namespace std;

/*
Trivia:
    1. A Constructor is a special method which is automatically invoked when the 
        the object of the said class is being created
    2. To create a constructor you need to create a function with public access modifier 
        with no datatype. Like -> className(parameters){code}
    3. The most common use of constructor is to intialize properties of the class
    4. The Constructor of a class doesn't have a return type
    5. It can be only called once in a lifetime of an object
    6. The Default constructor will be a function without any parameters, return types and datatype
    7. this is a pointer variable which can be used to access the properties/functions of the current
        objects
    8. this keyword contains the object address 
            
*/
class Student
{
private:
    int Age;
    int RollNumber;
    string Name;
public:
    // Default Constructor
    Student(){}
    // User-created Constructor
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

    Student s1("Stu1", 14, 27); // The constructor will be called in this line
    cout << "Student 1" << endl;
    s1.display(); // Displaying the intialized values   

    Student* s2 = new Student("Stu2", 8, 32);
    cout << "Student 2" << endl;
    s2->display();

    Student s3("Stu3", 14, 25);
    cout << "Student 3" << endl;
    s3.display();
    system("pause"); //For Debugging, ignore it
    return 0;
}