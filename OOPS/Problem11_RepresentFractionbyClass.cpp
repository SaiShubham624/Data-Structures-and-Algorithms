#include<iostream>
using namespace std;

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

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
    }
    Fraction(){}
    ~Fraction() {}
    void show(){
         cout << numerator << "/" << denominator <<  endl;
    }
    int get(int what){
        if(what == 0){
            return numerator;
        }
        else if(what == 1){
            return denominator;
        }
        else{
            return -1;
        }
    }
    void set(int what, int newValue){
        if(what == 0){
            numerator = newValue;
        }
        else if(what == 1){
            denominator = newValue;
        }
        else{
            return;
        }
    }
    float getDecimalForm(){
        return float(numerator)/float(denominator);
    }
    Fraction operator+(const Fraction &addFraction) {
        Fraction fir; 
        int bLcm = lcm(this->denominator, addFraction.denominator);
        fir.numerator = (this->numerator * (bLcm/this->denominator)) + (addFraction.numerator * (bLcm/addFraction.denominator));
        fir.denominator = bLcm;
        return fir;
    }
    };


int main(){
    Fraction apple(2, 4);
    Fraction mango(5, 2);
    Fraction banana = apple + mango;
    banana.show();
    system("pause"); //For Debugging, ignore it
    return 0;
}