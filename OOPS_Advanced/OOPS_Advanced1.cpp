#include<iostream>
#include<cstring>
using namespace std;

/*
Trivia:
    1. Shallow Copy in a array is copying the address 0th index of that array
    2. Deep Copy in a array is copying the entire array
    3. The Default Copy Constructor always uses shallow copy
    4. You can create your own copy constructor
*/

class Student{
    private:
        char *name;
        int age;
    public:
        // Our own copy constructor
        Student(Student &s){
            this->age = s.age;
            this->name = new char[strlen(s.name)];
            strcpy(this->name, s.name);
        }
        Student(int age, char *name){
            this->age = age;
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
        }
        void display(){
            cout << name << "'s age is " << age << endl;
        }
};

int main(){
    char name[4] = "Sai";
    Student stu1(20, name);
    /*
    Student stu2(stu1); // The Default should have been called here
    */
    Student stu2(stu1); // Because we have our own copy constructor, that one will be called

    stu1.display();
    stu2.display();
    name[2] = 'f';
    stu1.display();
    stu2.display();
    system("pause"); //For Debugging, ignore it
    return 0;
}
/*
Ouput Difference:
    Default Copy Constructor:
        The result would have been 
            Sai's age is 20 (Stu1)
            Sai's age is 20 (Stu2)
            Nai's age is 20 (Stu1)
            Sai's age is 20 (Stu2)
        because the default copy constr. of both objects is pointing to the address of the same array
*/