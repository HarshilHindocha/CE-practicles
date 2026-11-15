#include<iostream>  //mandatory for input/output opratins
#include<iomanip>   //require for setw

using namespace std;  //if you you don't write this in starting so you have to write "std ::" before every cout

int main()      //strictly mandatory -execution starts here

{
    cout<<"**************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n**************************************";

    cout<<"\nsoftware version" << setw(14) << ":" << "1.1";
    cout<<"\nInstitute" << setw(21) << ":" << "CHARUSAT";
    cout<<"\nAcademic Year" << setw(17) << ":" << "2026-27";

    cout<<"\n-------------------------------------------";
    cout<<"\nStudent Registration";
    cout<<"\n-------------------------------------------";

    cout<<"\nEnrollment Number" << ":" << "26TCETZA";
    cout<<"\nstudent Name" << ":" << "Harshil";
    cout<<"\nBranch" << ":" << "C.E.";
    cout<<"\nSemester" << ":" << "1";
    cout<<"\nMobile Number" << ":" << "9924177238";


    cout<<"\n-------------------------------------------";
    cout<<"\nStudent Information";
    cout<<"\n-------------------------------------------";

    cout<<"\nEnrollment Number" << setw(13) << ":" << "26TCETZA";
    cout<<"\nstudent Name" << setw(18) << ":" << "Harshil";
    cout<<"\nBranch" << setw(24) << ":" << "C.E.";
    cout<<"\nSemester" << setw(22) << ":" << "1";
    cout<<"\nMobile Number" << setw(17) <<":" << "9924177238";

    cout<<"\n-------------------------------------------";



    return 0;

}


