#include <iostream>
using namespace std;

// Structure for academic details
struct Academic
{
    int semester;
    float percentage;
    string grade;
};

// Structure for contact details
struct Contact
{
    string mobile;
    string email;
};

// Structure for student
struct Student
{
    string enrollment;
    string name;
    string branch;
    Academic academic;
    Contact contact;
};

// Display student details using pointer
void displayStudent(Student *ptr)
{
    cout << "\nEnrollment: " << ptr->enrollment;
    cout << "\nName: " << ptr->name;
    cout << "\nBranch: " << ptr->branch;
    cout << "\nSemester: " << ptr->academic.semester;
    cout << "\nPercentage: " << ptr->academic.percentage;
    cout << "\nGrade: " << ptr->academic.grade;
    cout << "\nMobile: " << ptr->contact.mobile;
    cout << "\nEmail: " << ptr->contact.email;
}

// Update contact information
void updateContact(Student *ptr)
{
    cout << "\nEnter New Mobile: ";
    cin >> ptr->contact.mobile;

    cout << "Enter New Email: ";
    cin >> ptr->contact.email;
}

// Display academic details
void displayAcademic(Student *ptr)
{
    cout << "\nSemester: " << ptr->academic.semester;
    cout << "\nPercentage: " << ptr->academic.percentage;
    cout << "\nGrade: " << ptr->academic.grade;
}

int main()
{
    int n;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "Enter Number of Students: ";
    cin >> n;

    // Create array of structures
    Student s[10];

    // Accept student details
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enrollment: ";
        cin >> s[i].enrollment;

        cin.ignore();

        cout << "Name: ";
        getline(cin, s[i].name);

        cout << "Branch: ";
        cin >> s[i].branch;

        cout << "Semester: ";
        cin >> s[i].academic.semester;

        cout << "Percentage: ";
        cin >> s[i].academic.percentage;

        cout << "Grade: ";
        cin >> s[i].academic.grade;

        cout << "Mobile: ";
        cin >> s[i].contact.mobile;

        cout << "Email: ";
        cin >> s[i].contact.email;
    }

    // Display all student records
    cout << "\n\nStudent Records\n";

    for (int i = 0; i < n; i++)
    {
        displayStudent(&s[i]);
        cout << "\n--------------------";
    }

    // Update first student's contact
    if (n > 0)
    {
        cout << "\n\nUpdate First Student Contact";
        updateContact(&s[0]);

        cout << "\nUpdated Contact";
        displayStudent(&s[0]);

        cout << "\nAcademic Information";
        displayAcademic(&s[0]);
    }

    return 0;
}
