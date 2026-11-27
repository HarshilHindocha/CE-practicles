#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

struct Student { char id[20], name[50], branch[10]; int sem, m[5], total; float per; const char *grade, *result; };

void displayHeader() {
    cout << "********************************************\nSTUDENT RECORD MANAGEMENT SYSTEM\n"
         << "********************************************\n----------- Student Registration -----------\n";
}

void acceptStudentDetails(Student &s) {
    cout << "Enter Enrollment Number : ";
    cin >> s.id;
    cin.ignore();
    cout << "Enter Student Name : ";
    cin.getline(s.name, 50);
    cout << "Enter Branch : ";
    cin >> s.branch;
    for (char *c = s.id; *c; c++) *c = toupper(*c);
    for (char *c = s.branch; *c; c++) *c = toupper(*c);
    cout << "Enter Semester : ";
    cin >> s.sem;
    cout << "Enter Marks\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << " : ";
        cin >> s.m[i];
    }
}

void calculateAcademicResult(Student &s) {
    s.total = 0;
    for (int i = 0; i < 5; i++) s.total += s.m[i];
    s.per = s.total / 5.0;
    s.grade = s.per >= 80 ? "A+" : s.per >= 70 ? "A" : s.per >= 60 ? "B" : s.per >= 50 ? "C" : s.per >= 40 ? "D" : "F";
    s.result = s.per >= 40 ? "PASS" : "FAIL";
}

void displayStudentReport(const Student &s) {
    const char *L = "--------------------------------------------\n";
    cout << L << "Academic Report\n" << L << "Enrollment Number : " << s.id << "\nStudent Name : " << s.name
         << "\nBranch : " << s.branch << "\nSemester : " << s.sem << "\nTotal Marks : " << s.total
         << "\nPercentage : " << fixed << setprecision(2) << s.per << "%\nGrade : " << s.grade
         << "\nResult : " << s.result << "\n" << L
         << "Program Executed Successfully Using User-defined Functions.\n" << L;
}

int main() {
    Student s;
    displayHeader();
    acceptStudentDetails(s);
    calculateAcademicResult(s);
    displayStudentReport(s);
    return 0;
}
