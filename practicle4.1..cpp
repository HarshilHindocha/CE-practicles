#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int total;                                          //total of marks is always integer cuz marks are in integers
    float average, percentage;                          //average and percentage can be in fractional number
    cout<<"*******************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n*******************************************";
    cout<<"\n-------------------------------------------";
    cout<<"\nAcademic Summary";
    cout<<"\n-------------------------------------------";
    cout<<"\nTotal Marks" << setw(14) << ":";
    cin>>total;
    if (total<0 || total>300)
    {
        cout<<"\nERROR : you entered invalid marks";   //if you enter your total >300 or <0 so this will occurs
        cout<<"\nenter your total marks again";        //you have to enter your total again
        cin>>total;
    }
    if (total>0 && total<=300)
    {
        average = total / 3.0;              // store in variable, use 3.0 to avoid int division
        percentage = (total * 100.0) / 300;  // store in variable, use 100.0 to avoid int division
        cout<< "\nAverage Marks" << setw(12) << ":" << average;
        cout<< "\nPercentage" << setw(15) << ":" << percentage << "%";
    }
    cout<<"\n-------------------------------------------";
    cout<<"\nAcademic Result";
    cout<<"\n-------------------------------------------";
    if (percentage<33)
    {
        cout<<"\nResult" << setw(10) << ":" << "FAIL";
    }
    else
    {
        cout<<"\nResult" << setw(10) << ":" << "PASS";
    }
}
