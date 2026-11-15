#include<iostream>
#include<iomanip>

using namespace std;

int main()

{
    int physics,chemistry,maths;                //marks are always integer
    int total;                                  //if marks are in integers so total will be automatically integer
    float percentage,average;                   //average and percentage can be fractional number

    cout<<"**************************************";
    cout<<"\nSTUDENT RECORD MANAGMENT SYSTEM";
    cout<<"\n**************************************";

     cout<<"\nSoftware version" << setw(24) << ":" << right << "1.2";

    cout<<"\n-------------------------------------------";
    cout<<"\nStudent Registration";
    cout<<"\n-------------------------------------------";

    cout<<"\nEnter Enrollment Number" << setw(7) << ":" << "26TCETZA";
    cout<<"\nEnter Student Name" << setw(12) << ":" << "Harshil Hindocha";
    cout<<"\nEnter Branch" << setw(18) << ":" << "C.E.";
    cout<<"\nEnter Semester" << setw(16) << ":" << "1";
    cout<<"\nEnter Mobile Number" << setw(11) << ":" << "9924177238";

    cout<<"\n-------------------------------------------";
    cout<<"\nAcademic Information";
    cout<<"\n-------------------------------------------";

    cout<<"\nEnter Physics Marks" << setw(6) << ":";  //marks must between 0 to 100
    cin>>physics;

    if (physics<0 || physics>100) {
        cout<<"\nerror : invalid marks, marks must between 0 to 100";  //this occurs when you enter your marks more than 100 or less than 0
        cout<<"\nenter your physics marks again";
        cin>>physics;
    }

    cout<<"\nEnter maths Marks" << setw(8) << ":" ;
    cin>>maths;

    if (maths<0 || maths>100) {
        cout<<"\nerror : invalid marks, marks must between 0 to 100";
        cout<<"\nenter your maths marks again";
        cin>>maths;
    }

    cout<<"\nEnter Chemistry Marks" << setw(4) << ":" ;
    cin>>chemistry;

    if (chemistry<0 || chemistry>100) {
        cout<<"\nerror : invalid marks, marks must between 0 to 100";
        cout<<"\nenter your chemistry marks again";
        cin>>chemistry;
    }

    if (maths>0 && maths<100  && maths>0 && maths<100 && maths>0 && maths<100) {

        total=maths +chemistry +physics;
        average = total/3;
        percentage = total*100/300;

        cout<<"\nTotal Marks " << setw(10) << ":" << total;             //we don't need to apply condition for total,average and percentage because we set condition in individual marks which is 0=<marks<=100
        cout<<"\nPercentage" << setw(11) <<":" << percentage << "%" ;          //if marks are already between 0 to 100 so total,average and percentage will automatically in between 0 to 300,0 to 100,0% to 100% respectly
        cout<<"\nAverage" << setw(14) << ":" << average;
    }

    cout<<"\n-------------------------------------------";
    cout<<"\nAcademic Result";
    cout<<"\n-------------------------------------------";

    if (percentage<33) {               //for this case i set passing percentage 33%
        cout<<"\nFAIL";
    } else {
        cout<<"\nPASS";
    }







}
