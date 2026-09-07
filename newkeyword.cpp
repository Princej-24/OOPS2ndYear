// Write a program that dynamically allocates an integer using new keyword.
// It asks the user to input a value for that integer.
// Displace the value and its memory address.
// Properly de-allocates the memory using delete keyword.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int *ptr = new int;
    cout << "Enter a value: ";
    cin >> *ptr;

    cout << "Value = " << *ptr << endl;
    cout << "Memory Address = " << ptr << endl;
    delete ptr;
    ptr = nullptr;

    return 0;
}



// Write a program that asks the user for the size of an array.
// It dynamically allocates an array of that size using new keyword.
// It fills the array with values entered by the user.
// It calculates and displays the sum and average of all element.
// Properly deallocates the memory using delete keyword.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    delete[] arr;

    arr = nullptr;

    return 0;
}