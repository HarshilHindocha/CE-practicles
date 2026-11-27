#include <iostream>
using namespace std;

int globalValue = 100;

// Function without parameters and return value
void show()
{
    cout << "Hello Student\n";
}

// Function without parameters and with return value
int getNumber()
{
    return 10;
}

// Function with parameters and without return value
void addition(int a, int b)
{
    cout << "Addition: " << a + b << endl;
}

// Function with parameters and return value
int multiply(int a, int b)
{
    return a * b;
}

// Call by value
void changeValue(int x)
{
    x = 50;
    cout << "Inside value function: " << x << endl;
}

// Call by reference
void changeReference(int &x)
{
    x = 50;
    cout << "Inside reference function: " << x << endl;
}

// Function overloading
void student(string name)
{
    cout << "Name: " << name << endl;
}

void student(string name, string branch)
{
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
}

void student(string name, string branch, int semester)
{
    cout << "Name: " << name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Semester: " << semester << endl;
}

int main()
{
    int a = 10;
    int localValue = 20;

    // Display function types
    show();
    cout << "Returned Number: " << getNumber() << endl;
    addition(5, 3);
    cout << "Multiplication: " << multiply(4, 5) << endl;

    // Call by value
    cout << "\nCall by Value\n";
    cout << "Before: " << a << endl;
    changeValue(a);
    cout << "After: " << a << endl;

    // Call by reference
    cout << "\nCall by Reference\n";
    cout << "Before: " << a << endl;
    changeReference(a);
    cout << "After: " << a << endl;

    // Display local and global values
    cout << "\nLocal Value: " << localValue << endl;
    cout << "Global Value: " << globalValue << endl;

    // Function overloading
    cout << "\nFunction Overloading\n";
    student("Amit");
    student("Amit", "CE");
    student("Amit", "CE", 1);

    return 0;
}
