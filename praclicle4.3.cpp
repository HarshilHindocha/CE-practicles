#include<iostream>
#include<iomanip>

using namespace std;

int main()

{

    int maths,physics,chemistry,total,sem,mobilenumber;
    float average,percentage;
    string enrollmentnum,name,branch;

    int a;

    cout<<"*****************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n*****************************************";

    cout<<"\n\n---------------MAIN MENU---------------";

    cout<<"\nEnter Your Choice" << ":" ;
    cin>>a;

    cout<<"\n1. Register New Student";
    cout<<"\n2. Display Student Record";
    cout<<"\n3. Enter Student Marks";
    cout<<"\n4. Display Academic Result";
    cout<<"\n5. Exit";

    switch (a)
    {
    case 1:
    cout<<"\n-------------------------------------------";
    cout<<"\nStudent Registration";
    cout<<"\n-------------------------------------------";

    cout<<"\nEnrollment Number" << ":";
    cin>>enrollmentnum;
    cout<<"\nstudent Name" << ":";
    cin>>name;
    cout<<"\nBranch" << ":";
    cin>>branch;
    cout<<"\nSemester" << ":" ;
    cin>>sem;
    cout<<"\nMobile Number" << ":";
    cin>>mobilenumber;


    cout<<"\nStudent Registered Successfully";

    break;

    case 2:
    cout<<"\nEnrollment Number" << setw(13) << ":" << "26TCETZA";
    cout<<"\nstudent Name" << setw(18) << ":" << "Harshil";
    cout<<"\nBranch" << setw(24) << ":" << "C.E.";
    cout<<"\nSemester" << setw(22) << ":" << "1";
    cout<<"\nMobile Number" << setw(17) <<":" << "9924177238";

    break;

    case 3:
    cout<<"\nEnter Your Maths Marks" <<setw(4) <<":" ;
    cin>>maths;

    cout<<"\nEnter Your physics Marks" <<setw(2) <<":" ;
    cin>>physics;

    cout<<"\nEnter Your chemistry Marks" <<setw(0) <<":" ;
    cin>>chemistry;

    total=maths +physics +chemistry;
    average=total/3.0;
    percentage=(total*100)/300.0;

    cout<<"\nTotal Marks" <<setw(9) << ":" <<total;

    cout<<"\nPercentage" << setw(10) << ":" << percentage << "%";

    cout<<"\nAverage" <<setw(13) << ":" << average ;

    case 4:

        cout<<"\nEnter Your Total Marks" <<setw(3) << ":";
        cin>>total;

        average=total/3.0;
        percentage=(total*100)/300.0;

        cout<<"\nPercentage" << setw(10) << ":" << percentage << "%";

        cout<<"\nAverage" <<setw(13) << ":" << average ;

        if (percentage>33) {
            cout<<"\nPASS";
        } else {
            cout<<"\nFAIL";
        }













    }

}
