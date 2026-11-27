#include <iostream>
using namespace std;

// Display local variable
void showStack()
{
    int a = 100;

    cout << "Stack Value: " << a << endl;
    cout << "Stack Address: " << &a << endl;
}

int main()
{
    cout << "MEMORY ORGANIZATION ANALYZER\n\n";

    // Display stack memory
    cout << "Stack Memory\n";
    showStack();

    // Allocate memory dynamically
    int *ptr = new int;
    *ptr = 250;

    cout << "\nHeap Value: " << *ptr << endl;
    cout << "Heap Address: " << ptr << endl;

    // Demonstrate multi-level pointers
    int a = 50;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    cout << "\nMulti-level Referencing\n";
    cout << "Original Value: " << a << endl;
    cout << "Single Level: " << *p1 << endl;
    cout << "Double Level: " << **p2 << endl;
    cout << "Triple Level: " << ***p3 << endl;

    // Check null pointer safely
    int *nullPtr = nullptr;

    cout << "\nNull Reference\n";

    if (nullPtr == nullptr)
        cout << "Safe: Pointer is NULL";

    // Release heap memory
    delete ptr;
    ptr = nullptr;

    cout << "\n\nMemory Released Successfully";

    if (ptr == nullptr)
        cout << "\nPointer Reset Successfully";

    // Explain unsafe pointers without accessing them
    cout << "\n\nInvalid Reference: Unsafe to Access";
    cout << "\nUninitialized Pointer: Unsafe to Access";

    return 0;
}
