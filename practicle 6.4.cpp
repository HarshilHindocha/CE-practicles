#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int m,n,l,o;

    cout<<"Enter rows matrix 1 :";
    cin>>m;
    cout<<"Enter columns matrix 1 :";
    cin>>n;




    int m1[m][n];

    //input of matrix 1 elements

    cout<<"\nEnter Elements of matrix 1 :";
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cin>>m1[i][j];
        }
    }

    //printing matrix 1

    cout<<"\nMatrix 1 :" << endl;

    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout<<m1[i][j] << " ";
        }
        cout<<endl;
    }

    cout<<"Enter rows matrix 2 :";
    cin>>l;
    cout<<"Enter columns matrix 2 :";
    cin>>o;

    int m2[l][o];

    //input of matrix 1 elements


    cout<<"\nEnter Elements of matrix 2 :";
    for (int i=0 ; i<l ; i++)
    {
        for (int j=0 ; j<o ; j++)
        {
            cin>>m2[i][j];
        }
    }

    //printing matrix 2

    cout<<"\nMatrix 2 :" << endl;


    for (int i=0 ; i<l ; i++)
    {
        for (int j=0 ; j<o ; j++)
        {
            cout<<m2[i][j] << " ";
        }
        cout<<endl;
    }

    if (n != l)
    {
        cout<<"\nMatrix Multiplication is not possible";
    }
    else
    {

        //Multiplication

        int m3[m][l];

        for (int i=0 ; i<m ; i++)
        {
            for (int j=0 ; j<l ; j++)
            {
                m3[i][j]=0;

                for (int k=0 ; k<n ; k++)
                {
                    m3[i][j] = m3[i][j] +(m1[i][k]*m2[k][j]);
                }
            }
        }

        //printing multiplied matrix

        cout<<"\n\nMultiplied Matrix is :" << endl;

        for (int i=0 ; i<m ; i++)
        {
            for (int j=0 ; j<l ; j++)
            {
                cout<< m3[i][j] << " ";

            }
            cout<<endl;
        }


    }
    return 0;

}
