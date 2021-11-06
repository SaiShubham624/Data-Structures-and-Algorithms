#include<iostream>
using namespace std;


// The First Approach
bool isArraySorted1(int arr[], int n){
	// Base Condition
	if(n == 0 || n == 1){
		return true;
	}
	if(arr[0] > arr[1]){
		return false;
	}
	// Recursive Case or Induction Hypothesis	
	bool recursiveCase = isArraySorted1(arr + 1, n - 1);

	// Calculation
	return recursiveCase;
}


int main(){
	int n;
	cout << "This program tell that if the program is sorted or not" << endl;
	cout << "Enter the Size of the length(n): " << endl;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cout << "Enter the " << i + 1 << " element: ";
		cin >> a[i];
	}
	int ans = isArraySorted1(a, n);
	if(ans) cout << "This array is sorted" << endl;
	else{cout << "This array is not sorted" << endl;}
	system("pause"); // For Debugging, ignore it
	return 0;
}
