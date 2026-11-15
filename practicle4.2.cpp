#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int total;
    float average, percentage;
    cout<<"*******************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n*******************************************\n\n";
    cout<<"\n-------------------------------------------";
    cout<<"\nAcademic Summary";
    cout<<"\n-------------------------------------------\n\n";
    cout<<"\nTotal Marks" << setw(14) << ":";
    cin>>total;
    if (total<0 || total>300)
    {
        cout<<"\nERROR : you entered invalid marks";
        cout<<"\nenter your total marks again";
        cin>>total;
    }
    if (total>0 && total<=300)
    {
        average = total / 3.0;                                     //i was set to 3.0 because it avoids int calculation
        percentage = (total * 100.0) / 300;
        cout<< "\nAverage Marks" << setw(12) << ":" << average;
        cout<< "\nPercentage" << setw(15) << ":" << percentage << "%\n\n";
    }
    cout<<"\n-------------------------------------------";
    cout<<"\nAcademic Result";
    cout<<"\n-------------------------------------------\n\n";
    if (percentage<33)
    {
        cout<<"\nResult" << setw(14) << ":" << "FAIL";
    }
    else
    {
        cout<<"\nResult" << setw(14) << ":" << "PASS";
    }

    if (percentage<100 && percentage >90)
    {
        cout<<"\nGrade" << setw(15) << ":" << "O" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Outstanding\n\n";
    }
    else  if (percentage<90 && percentage >80)
    {
        cout<<"\nGrade" << setw(15) << ":" << "A+" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Excellent\n\n";
    }
    else  if (percentage<80 && percentage >70)
    {
        cout<<"\nGrade" << setw(15) << ":" << "A" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Very Good\n\n";
    }
    else  if (percentage<70 && percentage >60)
    {
        cout<<"\nGrade" << setw(15) << ":" << "B+" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Good\n\n";
    }
    else  if (percentage<60 && percentage >50)
    {
        cout<<"\nGrade" << setw(15) << ":" << "B" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Satisfactory\n\n";
    }
    else  if (percentage<50 && percentage >33)
    {
        cout<<"\nGrade" << setw(15) << ":" << "C" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Need Improvement\n\n";
    }
    else  if (percentage<33)
    {
        cout<<"\nGrade" << setw(15) << ":" << "D" ;
        cout<<"\nPerformance Remark" << setw(2) << ":" << "Fail\n\n";
    }
}
