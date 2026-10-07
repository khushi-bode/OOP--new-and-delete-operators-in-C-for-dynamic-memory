// Practical No. 04
// Title  : Program on new and delete operators in C++ for dynamic memory
// Name   : Bode Khushi Yuvraj
// PRN    : 202501110037
// Batch  : A-2

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Accept number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "\nInvalid number of elements.\n";
        return 0;
    }

    // Dynamic memory allocation using new operator
    int *ptr = new int[n];

    // Accept values from user
    cout << "\nEnter " << n << " integer values:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> ptr[i];
    }

    // Display entered elements
    cout << "\nEntered elements are:\n";
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ptr[i];
    }
    double average = (double)sum / n;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    // Display memory addresses of dynamically allocated memory
    cout << "\nMemory addresses:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Address of element " << i + 1 << " = " << (ptr + i) << endl;
    }

    // Release memory using delete operator
    delete[] ptr;
    ptr = nullptr;

    cout << "\nDynamic memory has been released successfully.\n";

    return 0;
}
