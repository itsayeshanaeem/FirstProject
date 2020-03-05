#include <iostream>
/*
CH08-320143
a6 p1.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

#include <iostream>
using namespace std;

int sum(int a[], int nr) {
	int s=0;
	// so problem is in this step, in for loop the problem is that i<=nr where as it should be i <nr, because
	// the loop is running four times now and the array size is 3 //
	for(int i=0; i<=nr; i++)
		s+=a[i];
	return s;
}

unsigned int difference(unsigned int a, unsigned int b) {

	// so there is a problem in the if statement that a and b both are unsigned, so a-b cannot be less than zero as it will always
	// be positive , so what the compiler does is that is transfers the value of the negative sign as well the number and makes
	// it a large unsigned number //
	// as in data type unsigned int there are only positive value
	if (a-b < 0)
		return b-a;
	else
		return a-b;
}

int main() {
	int n;
	cout << "n=";
	cin >> n;
	int v[n];
	cout << "Enter values for the array" << endl;
	for(int i=0; i<n; i++)
		cin >> v[i];
	int result = sum(v, n);
	cout << "Result=" << result << endl;
	int x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "Difference=" << difference(x, y) << endl;
	return 0;
}
