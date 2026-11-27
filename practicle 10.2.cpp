#include <iostream>
using namespace std;

// Structure for product information
struct Product
{
    int id;
    char name[20];
    float price;
    int quantity;
};

// Structure with first arrangement
struct DataA
{
    char a;
    int b;
    double c;
    char d;
};

// Structure with different arrangement
struct DataB
{
    double c;
    int b;
    char a;
    char d;
};

// Union shares memory
union Data
{
    int a;
    float b;
    char c;
};

int main()
{
    Product p;
    DataA x;
    DataB y;
    Data u;

    // Display product member sizes
    cout << "COMPOSITE DATA REPRESENTATION ANALYZER\n";

    cout << "\nProduct Information";
    cout << "\nSize of ID: " << sizeof(p.id) << " Bytes";
    cout << "\nSize of Name: " << sizeof(p.name) << " Bytes";
    cout << "\nSize of Price: " << sizeof(p.price) << " Bytes";
    cout << "\nSize of Quantity: " << sizeof(p.quantity) << " Bytes";
    cout << "\nTotal Structure Size: " << sizeof(p) << " Bytes";

    // Compare structure padding
    cout << "\n\nPadding and Alignment";
    cout << "\nSize of DataA: " << sizeof(x) << " Bytes";
    cout << "\nSize of DataB: " << sizeof(y) << " Bytes";

    // Demonstrate union members one at a time
    cout << "\n\nShared Memory Representation";

    u.a = 120;
    cout << "\nInteger Value: " << u.a;

    u.b = 120.5;
    cout << "\nFloating Value: " << u.b;

    u.c = 'x';
    cout << "\nCharacter Value: " << u.c;

    // Display union size
    cout << "\nSize of Union: " << sizeof(u) << " Bytes";

    // Display comparison
    cout << "\n\nStructure";
    cout << "\nSeparate Memory for Every Member";
    cout << "\nStores All Values Together";

    cout << "\n\nUnion";
    cout << "\nShared Memory for All Members";
    cout << "\nStores One Active Value at a Time";

    return 0;
}
