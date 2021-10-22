#include<iostream>
using namespace std;

/*
Problem: You have to create a class which will represent complex numbers
It will contain
    -> Two private properties which will contain the real and imaginary numbers
    -> A parameterized constructor which will intialize the properties
    -> A function which will print the complex number in the form of x + yi
    -> A function which will add two complex numbers
    -> A function which will multiply two complex numbers
*/

// Solution:
class ComplexNum
{
private:
    int realNumber;
    int imaginaryNumber;
public:
    ComplexNum(){
        realNumber = 0;
        imaginaryNumber = 0;
    }
    ComplexNum(int real, int imaginary) {
        realNumber = real;
        imaginaryNumber = imaginary;
    }
    void show(){
        cout << this->realNumber << " + " << this->imaginaryNumber << "i" << endl;
    }
    void add(ComplexNum const &add){
        int x = this->realNumber + add.realNumber;
        int y = this->imaginaryNumber + add.imaginaryNumber;
        this->realNumber = x;
        this->imaginaryNumber = y;
    }
    void multiply(ComplexNum const &multiplier){
        int x = (this->realNumber * multiplier.realNumber) - (this->imaginaryNumber * multiplier.imaginaryNumber);
        int y = (this->realNumber * multiplier.imaginaryNumber) + (multiplier.realNumber * this->imaginaryNumber);
        this->realNumber = x;
        this->imaginaryNumber = y;
    }
    ~ComplexNum() {}
};
