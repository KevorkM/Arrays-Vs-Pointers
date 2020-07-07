#include <iostream>

using namespace std;

int main() {

	cout << "Arrays vs Pointers\n" << endl;

	int array[5] = { 3,5,7,9,11 };
	/*
		int* ptr = nullptr;

		//ptr = array;
		ptr = &array[0];// the output is the same as the previous line

		cout << "The value pointed to by ptr is: " << *ptr << endl;

		cout << "\nThe address of the element 0 is: " << array << endl;

		cout << "\nThe address of element 1 is: " << &array[1] << endl;
		cout << "\nThe address of element 1 is: " << array +1 << endl;//the output is the same as the one above

		ptr[1] = 5;

		cout << "\narray[1] is: " << array[1] << endl; // the output is 5
	*/
	//The example below should result the same as the example we did in the array category
	//but written differently

	int sum = 0;

	int* ptr = &array[0];

	for (int i = 0; i < 5; i++) {
		//sum += ptr[i]; //this methode and the one in line 35, 36 should give the same output
		sum += *ptr;
		ptr++;
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}