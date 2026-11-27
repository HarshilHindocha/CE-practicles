#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int students;

    cout<<"******************************************";
    cout<<"\nSPORTS EVENT SCORE ANALYSIS";
    cout<<"\n******************************************";

    cout<<"\nEneter No. Of Students"<<setw(10)<<":";
    cin>>students;

    char id[10][50],name[25][50];
    int score[50] , totalscore=0 , highestscore=INT_MIN , lowestscore=INT_MAX;

    for (int i=0;i<students;i++)
    {
        cout<<"\nEnter Student ID" <<setw(9) <<":";
        cin>>id[i];

        cout<<"\nEnter Student Name"<<setw(7)<<":";
        cin>>name[i];

        cout<<"\nEnter Score"<<setw(14) <<":";
        cin>>score[i];

        cout<<endl;

        totalscore=totalscore+score[i];

        if(score[i]>highestscore) {
            highestscore=score[i];
        }

        if(score[i]<lowestscore) {
            lowestscore=score[i];
        }
    }

        float averagescore=(totalscore)/students;

        cout<<"\n--------------------------------";
        cout<<"\nStudents Perrformance";
        cout<<"\n--------------------------------"<<endl;

        cout<<"id" << setw(12) << "Name" << setw(20) << "score" ;
        cout<<"\n------------------------------------------------";

        for (int i=0; i<students ;i++) {
            cout<< "\n" <<id[i] <<setw(10) << name[i] <<setw(15) <<score[i];
        }

        cout<<"\nTotal Score"<<setw(9) <<":"<< totalscore;
        cout<<"\nAverage Score"<<setw(7) << ":"<< averagescore;
        cout<<"\nHighest Score"<<setw(7) << ":" << highestscore;
        cout<<"\nLowest Score"<<setw(8) << ":" << lowestscore;


    return 0;
}
