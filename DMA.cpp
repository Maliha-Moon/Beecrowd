#include<iostream>
using namespace std;

int main()
{
    int *ptr = new int; // dynamically allocating an integer memory block
    *ptr = 10;

    int *ptr1 = new int(20); // Initializing Dynamic Memory

    int *arr = new int[5]; //array

    cout << "the value is " << *ptr << endl;
    cout << "the value is " << *ptr1 << endl;

    // taking 5 values as an input from the user
	for(int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}	

	// displaying the array elements in the output
	cout << "\nArray elements: ";
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << " " << endl;
	}
    
    // de-allocating
    delete ptr;
    delete ptr1;
    delete[] arr;

    // garbage S
    cout << "After de-allocating :" << *ptr << endl;
    cout << "\nGarbage array values: ";
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << " " << endl;
	}
    return 0;
}