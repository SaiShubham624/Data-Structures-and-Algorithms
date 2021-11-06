#include<iostream>
#include<cmath>
using namespace std;

/*
 * Problem: You have to find the geometric sum of k
 * */

double geometricSum(int k){
	// Base Condition
	if(k == 0){
		return 1;
	}
	// Recursive Case
	double recursiveCase = geometricSum(k-1);

	// Calculation
	return recursiveCase + 1.0/pow(2, k);
}

int main(){
	int k;
	cout << "This program returns the geometric sum of k" << endl;
	cout << "Enter the number (k): ";
	cin >> k;
	
	double ans = geometricSum(k);
	cout << "The Geometric Sum of " << k << " is " << ans << endl;

	system("pause");
	return 0;
}
