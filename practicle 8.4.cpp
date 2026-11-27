#include <iostream>
using namespace std;

// Print numbers from 1 to N
void ascending(int n)
{
    if (n == 0)
        return;

    ascending(n - 1);
    cout << n << " ";
}

// Print numbers from N to 1
void descending(int n)
{
    if (n == 0)
        return;

    cout << n << " ";
    descending(n - 1);
}

// Reverse number using recursion
int reverseNumber(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

// Calculate sum of digits
int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sumDigits(n / 10);
}

// Convert decimal to binary
void binary(int n)
{
    if (n == 0)
        return;

    binary(n / 2);
    cout << n % 2;
}

int main()
{
    int n;

    cout << "Enter Number: ";
    cin >> n;

    cout << "\n1 to N: ";
    ascending(n);

    cout << "\nN to 1: ";
    descending(n);

    cout << "\nReverse: " << reverseNumber(n, 0);
    cout << "\nSum of Digits: " << sumDigits(n);

    cout << "\nBinary: ";
    if (n == 0)
        cout << 0;
    else
        binary(n);

    return 0;
}
