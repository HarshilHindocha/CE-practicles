#include <iostream>
using namespace std;

int main()
{
    int a = 25;
    char b = 'A';
    float c = 85.60;

    // Display values and addresses
    cout << "MEMORY ADDRESS EXPLORER\n\n";

    cout << "Integer Value: " << a << endl;
    cout << "Integer Address: " << &a << endl;

    cout << "\nCharacter Value: " << b << endl;
    cout << "Character Address: " << (void*)&b << endl;

    cout << "\nFloat Value: " << c << endl;
    cout << "Float Address: " << &c << endl;

    // Create pointers
    int *ptr = &a;

    cout << "\nIndirect Value: " << *ptr;

    // Modify value using pointer
    *ptr = 30;

    cout << "\nModified Value: " << a;

    // Display array using indexing
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "\n\nArray using Index\n";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    // Display array using pointer access
    cout << "\nArray using Address\n";

    for (int i = 0; i < 5; i++)
        cout << *(arr + i) << " ";

    return 0;
}
