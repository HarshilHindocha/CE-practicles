#include <iostream>
using namespace std;

// Factorial using loop
int factorialLoop(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

// Factorial using recursion
int factorialRec(int n)
{
    if (n <= 1)
        return 1;

    return n * factorialRec(n - 1);
}

// Fibonacci using loop
int fibonacciLoop(int n)
{
    int a = 0, b = 1, c;

    for (int i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return a;
}

// Fibonacci using recursion
int fibonacciRec(int n)
{
    if (n <= 1)
        return n;

    return fibonacciRec(n - 1) + fibonacciRec(n - 2);
}

int main()
{
    int n;

    cout << "Enter Number: ";
    cin >> n;

    // Display factorial
    cout << "\nFactorial using Loop: " << factorialLoop(n);
    cout << "\nFactorial using Recursion: " << factorialRec(n);

    // Display Fibonacci
    cout << "\nFibonacci using Loop: ";

    for (int i = 0; i < n; i++)
        cout << fibonacciLoop(i) << " ";

    cout << "\nFibonacci using Recursion: ";

    for (int i = 0; i < n; i++)
        cout << fibonacciRec(i) << " ";

    return 0;
}
