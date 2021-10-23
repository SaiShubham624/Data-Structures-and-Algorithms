#include<iostream>
#include<cmath>
using namespace std;

/*
Trivia:
    1. A constant function is function which do not change the value of the properties
    2. A const function can be used if the syntax goes like this:
        datatype functionName(parameters) const{code}
    3. Ideally, every function should be marked as a constant function if it is not overwriting the 
        value of the properties
*/

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
    Fraction(){}
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
    }
    int getDenominator() const{
        return denominator;
    }
    int getNumerator() const{
        return numerator;
    }
};

int main(){
    Fraction const frac;
    cout << frac.getNumerator() << endl;
    system("pause"); //For Debugging, ignore it
    return 0;
}