#include<iostream>
using namespace std;

/*
Trivia:
    1. A intialisation list is used when you need to intialize the properties when it is being allocated
    2. The Syntax goes something like this
        functionName(para1, para2...): var1(para1), var2(para2){}
*/

class Student{
    private:
        int age;
        const int rollNumber;
    public:
        // In this line, roll number is getting intialized when it is being allocated
        Student(int a, int r): age(a), rollNumber(r){}
};

int main(){
    Student stu1(16, 23);
    system("pause"); //For Debugging, ignore it
    return 0;
}
/*
Output Difference:
    If we have not used intialisation list, we would have gotten an error saying why create
    a constant variable when it is garbage value
*/