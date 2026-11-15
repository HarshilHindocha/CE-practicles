#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Number" <<endl;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        char ch='A';
        for(int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for(int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch = ch+1;
        }

        for (int j=i ; j>0 ; j--)
        {
            cout<<ch<<" ";
            ch = ch-1;
        }

        cout << endl;
    }

}
