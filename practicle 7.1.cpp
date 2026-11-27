#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 100;

int myStrlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void myStrcpy(char *dest, const char *src)
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0') i++;
}

void myStrcat(char *dest, const char *src)
{
    int i = myStrlen(dest), j = 0;
    while (src[j] != '\0') dest[i++] = src[j++];
    dest[i] = '\0';
}

int mySearch(const char *text, const char *key)
{
    int n = myStrlen(text), m = myStrlen(key);
    if (m == 0 || m > n) return 0;
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        while (j < m && text[i + j] == key[j]) j++;
        if (j == m) return 1;
    }
    return 0;
}

void myFirstName(const char *name, char *first)
{
    int i = 0;
    while (name[i] != '\0' && name[i] != ' ')
    {
        first[i] = name[i];
        i++;
    }
    first[i] = '\0';
}

void myLastName(const char *name, char *last)
{
    int n = myStrlen(name), pos = -1;
    for (int i = 0; i < n; i++)
        if (name[i] == ' ') pos = i;
    if (pos == -1) last[0] = '\0';
    else myStrcpy(last, name + pos + 1);
}

int main()
{
    char enroll[SIZE], name[SIZE], branch[SIZE], keyword[SIZE];
    char refManual[2 * SIZE], refStd[2 * SIZE];
    char firstM[SIZE], lastM[SIZE], firstS[SIZE], lastS[SIZE];

    cout << "********************************************\n";
    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter Enrollment Number : ";
    cin.getline(enroll, SIZE);
    cout << "Enter Student Name : ";
    cin.getline(name, SIZE);
    cout << "Enter Branch : ";
    cin.getline(branch, SIZE);

    myStrcpy(refManual, name);
    myStrcat(refManual, "-");
    myStrcat(refManual, enroll);

    strcpy(refStd, name);
    strcat(refStd, "-");
    strcat(refStd, enroll);

    cout << "--------------------------------------------\n";
    cout << "Student Reference\n";
    cout << refManual << "   (manual)\n";
    cout << refStd << "   (standard functions)\n";

    myFirstName(name, firstM);
    myLastName(name, lastM);

    const char *firstSpace = strchr(name, ' ');
    if (firstSpace == NULL)
    {
        strcpy(firstS, name);
        lastS[0] = '\0';
    }
    else
    {
        strncpy(firstS, name, firstSpace - name);
        firstS[firstSpace - name] = '\0';
        strcpy(lastS, strrchr(name, ' ') + 1);
    }

    cout << "--------------------------------------------\n";
    cout << "First Name\n" << firstM << "   (manual)\n" << firstS << "   (standard functions)\n";
    cout << "Last Name\n" << lastM << "   (manual)\n" << lastS << "   (standard functions)\n";

    cout << "--------------------------------------------\n";
    cout << "Enter Keyword : ";
    cin.getline(keyword, SIZE);

    cout << (mySearch(name, keyword) ? "Keyword Found." : "Keyword Not Found.")
         << "   (manual)\n";
    cout << (strstr(name, keyword) != NULL ? "Keyword Found." : "Keyword Not Found.")
         << "   (standard functions)\n";

    cout << "--------------------------------------------\n";
    cout << "Student Report\n";
    cout << "Enrollment Number : " << enroll << endl;
    cout << "Student Name : " << name << endl;
    cout << "Branch : " << branch << endl;

    return 0;
}
