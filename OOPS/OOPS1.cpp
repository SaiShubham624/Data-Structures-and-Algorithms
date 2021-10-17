#include <iostream>
using namespace std;

/*
 Trivia:
    1. All the objects are entities which have some properties and functions to act on those properties
    2. A Class is a template to create the objects
    3. There are two ways of creating objects:
        (a) Statically
            In this memory is directly allocatted in the memory
        (b) Dynamically
            In this memory is allocated in the heap memory and we access that memory 
            using a pointer
    4. Access Modifiers are modifiers which sets which property can be accessed by where 
        There are three types of access modifiers
        (a) Private -> Property/Function can be only used inside the class(Default)
        (b) Public -> Property/Function can be used anywhere in the file
        (c) Protected ->
    5. The Best Pratice when creating a Class is to create it in a separate file
*/

// Creating a Class 
class Student{
    // This is a Private Property
    string Name;
    // These are public properties
public:
    int RollNumber;
    int Age;
};

int main() {
    
    // Creating Object Statically
    Student s1;
    Student s2;

    // Creating Object Dynamically
    Student* s3 = new Student;
    Student* s4 = new Student;   
	return 0;
}