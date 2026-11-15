#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    string enrollment,name,branch,mobileNumber;
    int sem;
    char choice;


    cout<<"********************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n********************************************";


    do  {

        cout<<"\nEnter Enrollment Number"<<setw(2) << ":";
        cin>>enrollment;

        cout<<"\nEnter Name" << setw(10) << ":";
        cin>>name;

        cout<<"\nEnter Semester"<<setw(6) << ":";
        cin>>sem;

        cout<<"\nEnter branch" << setw(8) << ":";
        cin>>branch;

        cout<<"\nEnter Mobilenumber" << setw(2) << ":";
        cin>>mobileNumber;

        cout<<"\nStudent Registered Successfully";

        cout<<"\nRegister another student ? (Y/N)";
        cin>>choice;

    } while (choice == 'y' || choice == 'Y' );

    cout << "\nThank you for registration";

    cout<<"\nReturning to The Main Menu...";

    return 0;
}
