#include <iostream>
#include <sstream>
/*
CH08-320143
a6 p2.cpp
Ayesha Naeem
anaeem@jacobs-university.de
*/

using namespace std;

void foo(int *array, int n, int *positives) {
	for(int i=0; i<n; i++)
		if (array[i]>0)
			*positives++;
			// so the error is in this line, as I was using the gdp compiler and i printed the values
			// of positives using the call(p positives) it was printing the address, so that means that
			// the value of the positives variable is not changing the address is changing so it increments firsts and then
			// takes the value after that. So we can use parenthesis like (*positives)++ to prioritise //
}

class Test {
	private:
		int *a;
		int n;
	public:
		Test() {
			a=NULL;
			n=0;
		}
		Test(int *a, int n) {
			this->n = n;
			if (this->a != NULL) {
				delete this->a;
			}
			this->a = new int[n];
			for(int i=0; i<n; i++)
				this->a[i] = a[i];
		}
		string toString() {
			ostringstream ss;
			ss << "Length: " << n << endl << "Elements: ";
			for(int i=0; i<n; i++)
				ss << a[i] << " ";
			ss << endl;
			return ss.str();
		}
		~Test() {
			delete a;
		}
};

int main() {
	int v[3] = {1, 2, 3};
	int p=0;
	foo(v, 3, &p);
	//function will be called as foo(v,3,p) as we need
	//pass by reference
	cout << "Amount of positive values in the array=" << p << endl;
	Test arr[5];
	Test *obj1;
	obj1=&arr[0];
	Test *obj2=new Test(v, 3);
	//so the third object is not created actually , only a pointer to the object is being created , this was done with obj1
	// as well , but the obj1 pointer was pointed to an object in line54, so this could be a probable solution to this error
	Test *obj3;
	cout << obj1->toString();
	cout << obj2->toString();
	// here the program crashes , the reason for this is that actually an obj3 has not been created, but we are calling a method
	// with an object that dies not exist , thus the program crashes //
	cout << obj3->toString();
	delete obj1;
	delete obj2;
	delete obj3;
	return 0;
}
