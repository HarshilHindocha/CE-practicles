#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int n,i;
    float average,percentage;

    cout<<"*********************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n*********************************************";

    cout<<"\nEnter No. Of Subjects";
    cin>>n;

    int totalMarks=0;
    int marks;

    for (i=1 ; i<=n ; i++) {
        cout<<"\nEnter Marks Of Subject" << n << ":" ;
        cin>>marks;
        totalMarks+=marks;
    }

    cout<<"\n---------------------------------------";
    cout<<"\nAcademic Result";
    cout<<"\n---------------------------------------";

    average=totalMarks/n;
    percentage=(totalMarks*100.0)/(n*100);

    cout<<"\nTotal Marks" << setw(14) << ":" << totalMarks;
    cout<<"\nAverage" <<setw(18) << ":" << average;
    cout<<"\nPercentage" <<setw(15) << ":" << percentage <<"%";

    if (percentage >=33) {
        cout<<"\nResult" << setw(18) << ":" << "PASS";
    } else {
        cout<<"\nResult" << setw(18) << ":" << "FAIL";
    }

    if (percentage >=90) {
        cout<<"\nGrade" << setw(20) << ":" << "A+";
    } else if (percentage>=80 && percentage <90){
        cout<<"\nGrade" << setw(20) << ":" << "A";
    } else if (percentage>=70 && percentage <80){
        cout<<"\nGrade" << setw(20) << ":" << "B+";
    } else if (percentage>=60 && percentage <70){
        cout<<"\nGrade" << setw(20) << ":" << "B";
    } else if (percentage>=50 && percentage <60){
        cout<<"\nGrade" << setw(20) << ":" << "C";
    } else if (percentage>=50 && percentage <60){
        cout<<"\nGrade" << setw(20) << ":" << "D";
    } else if (percentage>=33 && percentage <50){
        cout<<"\nGrade" << setw(20) << ":" << "E";
    } else {
        cout<<"\nGread" <<setw(20) << ":" << "F";
    }

    if (percentage >=90)
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Outstanding";
    }
    else  if(percentage>=80 && percentage <90)
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Excellent";
    }
    else  if(percentage>=70 && percentage <80)
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Very Good";
    }
    else  if(percentage>=60 && percentage <70)
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Good";
    }
    else  if(percentage>=50 && percentage <60)
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Satisfactory";
    }
    else  if(percentage>=33 && percentage <50)
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Need Improvement";
    }
    else
    {
        cout<<"\nPerformance Remark" << setw(7) << ":" << "Fail";
    }



}
