#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

void displayRecords(string enrollment[], string name[], float percentage[],
                    string grade[], int studentCount, bool showGrade)
{
    for (int i = 0; i < studentCount; i++)
    {
        cout << enrollment[i] << " " << name[i] << " "
             << fixed << setprecision(2) << percentage[i];
        if (showGrade)
        {
            cout << " " << grade[i];
        }
        cout << endl;
    }
}

void insertStudent(string enrollment[], string name[], float percentage[],
                   string grade[], int &studentCount)
{
    int position;

    cout << "Insert New Student\n";

    if (studentCount >= MAX_STUDENTS)
    {
        cout << "Array is full. Cannot insert.\n";
        return;
    }

    cout << "Enter Position : ";
    cin >> position;

    if (position < 1 || position > studentCount + 1)
    {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = studentCount; i >= position; i--)
    {
        enrollment[i] = enrollment[i - 1];
        name[i] = name[i - 1];
        percentage[i] = percentage[i - 1];
        grade[i] = grade[i - 1];
    }

    int index = position - 1;

    cout << "Enter Enrollment Number : ";
    cin >> enrollment[index];
    cout << "Enter Student Name : ";
    cin.ignore();
    getline(cin, name[index]);
    cout << "Enter Percentage : ";
    cin >> percentage[index];
    cout << "Enter Grade : ";
    cin >> grade[index];

    studentCount++;
    cout << "Record Inserted Successfully.\n\n";
}

void updateStudent(string enrollment[], string name[], float percentage[],
                   string grade[], int studentCount)
{
    string searchEnrollment;
    bool found = false;

    cout << "Update Student Record\n";
    cout << "Enter Enrollment Number : ";
    cin >> searchEnrollment;

    for (int i = 0; i < studentCount; i++)
    {
        if (enrollment[i] == searchEnrollment)
        {
            cout << "Enter New Percentage : ";
            cin >> percentage[i];
            cout << "Enter New Grade : ";
            cin >> grade[i];
            cout << "Record Updated Successfully.\n\n";
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Enrollment Number not found.\n\n";
    }
}

void deleteStudent(string enrollment[], string name[], float percentage[],
                   string grade[], int &studentCount)
{
    int position;

    cout << "Delete Student Record\n";
    cout << "Enter Position : ";
    cin >> position;

    if (position < 1 || position > studentCount)
    {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = position - 1; i < studentCount - 1; i++)
    {
        enrollment[i] = enrollment[i + 1];
        name[i] = name[i + 1];
        percentage[i] = percentage[i + 1];
        grade[i] = grade[i + 1];
    }

    studentCount--;
    cout << "Record Deleted Successfully.\n";
}

int main()
{
    string enrollment[MAX_STUDENTS];
    string name[MAX_STUDENTS];
    float percentage[MAX_STUDENTS];
    string grade[MAX_STUDENTS];
    int studentCount;

    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";
    cout << "Enter Number of Students : ";
    cin >> studentCount;

    if (studentCount < 0 || studentCount >= MAX_STUDENTS)
    {
        cout << "Number of students must be between 0 and "
             << MAX_STUDENTS - 1 << ".\n";
        return 1;
    }

    cout << "Enter Student Details\n";
    cout << "(Format: Enrollment FirstName LastName Percentage Grade)\n";
    for (int i = 0; i < studentCount; i++)
    {
        string firstName, lastName;
        cin >> enrollment[i] >> firstName >> lastName >> percentage[i] >> grade[i];
        name[i] = firstName + " " + lastName;
    }

    cout << "--------------------------------------------\n";
    cout << "Current Student Records\n";
    displayRecords(enrollment, name, percentage, grade, studentCount, false);

    cout << "--------------------------------------------\n";
    insertStudent(enrollment, name, percentage, grade, studentCount);

    cout << "--------------------------------------------\n";
    cout << "Updated Student Records\n";
    displayRecords(enrollment, name, percentage, grade, studentCount, false);

    cout << "--------------------------------------------\n";
    updateStudent(enrollment, name, percentage, grade, studentCount);

    cout << "--------------------------------------------\n";
    deleteStudent(enrollment, name, percentage, grade, studentCount);

    cout << "--------------------------------------------\n";
    cout << "Final Student Records\n";
    displayRecords(enrollment, name, percentage, grade, studentCount, true);

    return 0;
}
