#include<iostream>
using namespace std;

/*
Trivia:
    1. Operator Overloading means extending the functionality of existing operators for our classes
    2. It can be done by using the operator keyword. Syntax goes like this,
        returnType operator symbol (parameters){code}
*/

int lcm(int n1, int n2){
    int max = max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);
}

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction() {

        }
        Fraction(int n, int d){
            numerator = n;
            denominator = d;
        }
        // Extending the + operator functionality 
        Fraction operator+(Fraction f2){
            Fraction fir; 
            int bLcm = lcm(this->denominator, f2.denominator);
            fir.numerator = (this->numerator * (bLcm/this->denominator)) + (f2.numerator * (bLcm/f2.denominator));
            fir.denominator = bLcm;
            return fir;
        }
        void show(){
         cout << numerator << "/" << denominator <<  endl;
        }
};

int main(){
    Fraction f1(2, 2);
    Fraction f2(4, 6);
    Fraction f3 = f1 + f2;
    f3.show();
    system("pause"); //For Debugging, ignore it
    return 0;
}