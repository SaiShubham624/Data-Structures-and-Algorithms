#include<iostream>
#include<cmath>
using namespace std;

/*
Problem: 
    You have to represent mathematical fractions by using a class. It should be able to perform 
    basic operations of fractions
*/

// Additional Functions 

// To Find the lcm of two numbers
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

// To Find the hcf of two numbers
int hcf(int n1, int n2){
   int hcf = 0;
   if ( n2 > n1) {   
   int temp = n2;
   n2 = n1;
   n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }
  return hcf;
}

// The Class
class Fraction
/*
 * Properties:
     numerator -> Contains the numerator of the fraction
     denominator -> Contains the denominator of the fraction
 * Methods:
     Constructors:
        Fraction() -> Default Constructor
        Fraction(int n, int d) -> Property Setting Constructor
        Fraction(int a) -> Turns a integer into a fraction
        Fraction(float a) -> Turns a float into a fraction
     show() -> Prints the fraction in p/q form
     getReducedForm() -> Simplifies the fraction 
     Getters and Setters:
        getNumerator() -> returns the numerator of the object
        getDenominator() -> returns the denominator of the object
        setNumerator() -> sets the Numerator of the object
        setDenominator() -> sets the Denominator of the object
     getDecimalForm() -> returns the decimal form of the fraction
     Operations:
        add(Fraction addFraction) -> Add the current object with the given object
        subtract(Fraction subtractFractionForm) -> Subtracts the current object from the given object
        multiply(Fraction multiplier) -> Multiply the current object with the given object
        divide(Fraction divider) -> Divides the current object with the given object
     ~Fraction() -> The Default Destructor
*/   
{
private:
    int numerator;
    int denominator;
public:    
    Fraction(){
        numerator = 0;
        denominator = 0;
    }
    
    Fraction(int n, int d) {
        numerator = n;
        denominator = d;
    }

    Fraction(float a){
    double fractional_part = a - floor(a);

    for (double i = 0.1, j = 10;  ; i/=10, j*=10)
    {
    if ( fractional_part >= i )
    {
    this->numerator = a * j;
    this->denominator = j;
    break;
    }
    }
    this->getReducedForm();
}

    Fraction(int a){
        this->numerator = a;
        this->denominator = 0;
    }

    void show(){
         cout << numerator << "/" << denominator <<  endl;
    }
    
    void getReducedForm(){
        int bhcf = hcf(this->numerator, this->denominator);
        this->numerator = this->numerator/bhcf;
        this->denominator = this->denominator/bhcf;     
    }    
    
    void setNumerator(int newValue){
        numerator = newValue;
    }
    
    void setDenominator(int newValue){
        denominator = newValue;
    }
    
    int getNumerator(){
        return numerator;
    }
    
    int getDenominator(){
        return denominator;
    }
    
    float getDecimalForm(){
        return float(numerator)/float(denominator);
    }
    
    Fraction add(Fraction addFraction) {
        Fraction fir; 
        int bLcm = lcm(this->denominator, addFraction.denominator);
        fir.numerator = (this->numerator * (bLcm/this->denominator)) + (addFraction.numerator * (bLcm/addFraction.denominator));
        fir.denominator = bLcm;
        return fir;
    }
    
    Fraction subtract(Fraction subtractFractionFrom) {
        Fraction fir; 
        int bLcm = lcm(this->denominator, subtractFractionFrom.denominator);
        fir.numerator = (subtractFractionFrom.numerator * (bLcm/subtractFractionFrom.denominator)) - (this->numerator * (bLcm/this->denominator));
        fir.denominator = bLcm;
        return fir;
    }
    
    Fraction multiply(Fraction multiplier){
        Fraction fir;
        fir.numerator = this->numerator * multiplier.numerator;
        fir.denominator = this->denominator * multiplier.denominator;
        fir.getReducedForm();
        return fir;
    }
    
    Fraction divide(Fraction divider){        
        swap(divider.numerator, divider.denominator);
        Fraction fir = this->multiply(divider);
        return fir;
    }
    
    ~Fraction() {}
};

