#include <iostream>
using namespace std;

struct Student
{
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

// Display all student records
void displayStudents(Student *ptr, int n)
{
    cout << "\nStudent Records\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nAddress: " << (ptr + i);
        cout << "\nEnrollment: " << (ptr + i)->enrollment;
        cout << "\nName: " << (ptr + i)->name;
        cout << "\nBranch: " << (ptr + i)->branch;
        cout << "\nSemester: " << (ptr + i)->semester;
        cout << "\nPercentage: " << (ptr + i)->percentage;
        cout << "\nGrade: " << (ptr + i)->grade;
        cout << "\n-------------------------";
    }
}

// Calculate class average
void classAverage(Student *ptr, int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
        total = total + (ptr + i)->percentage;

    cout << "\nClass Average: " << total / n << "%";
}

// Display highest percentage
void highestPercentage(Student *ptr, int n)
{
    float high = ptr[0].percentage;

    for (int i = 1; i < n; i++)
    {
        if (ptr[i].percentage > high)
            high = ptr[i].percentage;
    }

    cout << "\nHighest Percentage: " << high << "%";
}

// Display lowest percentage
void lowestPercentage(Student *ptr, int n)
{
    float low = ptr[0].percentage;

    for (int i = 1; i < n; i++)
    {
        if (ptr[i].percentage < low)
            low = ptr[i].percentage;
    }

    cout << "\nLowest Percentage: " << low << "%";
}

int main()
{
    int n;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "Enter Number of Students: ";
    cin >> n;

    // Allocate memory dynamically
    Student *ptr = new Student[n];

    cout << "\nEnter Student Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enrollment: ";
        cin >> ptr[i].enrollment;

        cin.ignore();

        cout << "Name: ";
        getline(cin, ptr[i].name);

        cout << "Branch: ";
        cin >> ptr[i].branch;

        cout << "Semester: ";
        cin >> ptr[i].semester;

        cout << "Percentage: ";
        cin >> ptr[i].percentage;

        cout << "Grade: ";
        cin >> ptr[i].grade;
    }

    // Access records using address
    displayStudents(ptr, n);

    // Calculate class statistics
    classAverage(ptr, n);
    highestPercentage(ptr, n);
    lowestPercentage(ptr, n);

    // Release allocated memory
    delete[] ptr;
    ptr = nullptr;

    cout << "\n\nDynamic Memory Released Successfully";
    cout << "\nAddress Reset Successfully";

    return 0;
}
