#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void demonstrateIncrementDecrement()
{
    const int INITIAL_CPF_MARKS = 70;
    int cpfMarks;
    int valueUsed;
    int before;

    cout << "\n===== Task 3 & 4: Increment / Decrement =====\n";
    cout << left << setw(6) << "Sr." << setw(14) << "Statement"
         << setw(10) << "Before" << setw(10) << "After"
         << "Expression value\n";
    cout << "-------------------------------------------------------\n";

    cpfMarks = INITIAL_CPF_MARKS;
    before = cpfMarks;
    valueUsed = ++cpfMarks;
    cout << left << setw(6) << 1 << setw(14) << "++cpfMarks"
         << setw(10) << before << setw(10) << cpfMarks << valueUsed << endl;

    cpfMarks = INITIAL_CPF_MARKS;
    before = cpfMarks;
    valueUsed = --cpfMarks;
    cout << left << setw(6) << 2 << setw(14) << "--cpfMarks"
         << setw(10) << before << setw(10) << cpfMarks << valueUsed << endl;

    cpfMarks = INITIAL_CPF_MARKS;
    before = cpfMarks;
    valueUsed = cpfMarks++;
    cout << left << setw(6) << 3 << setw(14) << "cpfMarks++"
         << setw(10) << before << setw(10) << cpfMarks << valueUsed << endl;

    cpfMarks = INITIAL_CPF_MARKS;
    before = cpfMarks;
    valueUsed = cpfMarks--;
    cout << left << setw(6) << 4 << setw(14) << "cpfMarks--"
         << setw(10) << before << setw(10) << cpfMarks << valueUsed << endl;
}

void evaluateExpression()
{
    int cpfMarks = 70;
    int mathMarks = 80;
    int cpfBefore = cpfMarks;
    int mathBefore = mathMarks;

    cout << "\n===== Task 5-8: Expression Evaluation =====\n";
    cout << "Initial: cpfMarks = " << cpfMarks
         << ", mathMarks = " << mathMarks << endl << endl;

    int term1 = ++cpfMarks;
    cout << "Step 1: ++cpfMarks   -> value = " << term1
         << " | cpf = " << cpfMarks << ", math = " << mathMarks << endl;

    int term2 = cpfMarks++;
    cout << "Step 2: cpfMarks++   -> value = " << term2
         << " | cpf = " << cpfMarks << ", math = " << mathMarks << endl;

    int term3 = --mathMarks;
    cout << "Step 3: --mathMarks  -> value = " << term3
         << " | cpf = " << cpfMarks << ", math = " << mathMarks << endl;

    int term4 = ++mathMarks;
    cout << "Step 4: ++mathMarks  -> value = " << term4
         << " | cpf = " << cpfMarks << ", math = " << mathMarks << endl;

    int term5 = mathMarks--;
    cout << "Step 5: mathMarks--  -> value = " << term5
         << " | cpf = " << cpfMarks << ", math = " << mathMarks << endl;

    int result = term1 + term2 + term3 + term4 - term5;
    cout << "\nresult = " << term1 << " + " << term2 << " + " << term3
         << " + " << term4 << " - " << term5 << " = " << result << endl;

    cout << "\nObservation Table:\n";
    cout << left << setw(28) << "Subject" << setw(18) << "Before"
         << "After\n";
    cout << "--------------------------------------------------\n";
    cout << left << setw(28) << "Computer Programming Fdn."
         << setw(18) << cpfBefore << cpfMarks << endl;
    cout << left << setw(28) << "Mathematics"
         << setw(18) << mathBefore << mathMarks << endl;
}

void showSafeAverage()
{
    int totalMarks = 400;
    int subjectCount = 0;

    cout << "\n===== Task 9: Corrected Runtime / Logical Error =====\n";
    if (subjectCount != 0)
    {
        cout << "Average = " << (float)totalMarks / subjectCount << endl;
    }
    else
    {
        cout << "Cannot divide by zero - subjectCount is 0.\n";
    }

    float m1 = 70, m2 = 80, m3 = 90;
    float averageMarks = (m1 + m2 + m3) / 3.0;
    cout << "Correct average of 70, 80, 90 = " << averageMarks << endl;
}

void studentAcademicSummary()
{
    const int SUBJECT_COUNT = 5;
    const int MAX_MARKS_PER_SUBJECT = 100;

    string studentName;
    int enrollmentNumber;
    string subjectNames[SUBJECT_COUNT] = {
        "Computer Programming", "Mathematics", "Physics",
        "English", "Electronics"
    };
    int marks[SUBJECT_COUNT];
    int totalMarks = 0;

    cout << "\n===== Student Academic Summary =====\n";
    cout << "Enter student name: ";
    cin.ignore();
    getline(cin, studentName);
    cout << "Enter enrollment number: ";
    cin >> enrollmentNumber;

    for (int i = 0; i < SUBJECT_COUNT; i++)
    {
        cout << "Enter marks for " << subjectNames[i]
             << " (out of " << MAX_MARKS_PER_SUBJECT << "): ";
        cin >> marks[i];
        totalMarks += marks[i];
    }

    float averageMarks = (float)totalMarks / SUBJECT_COUNT;
    float percentage = ((float)totalMarks /
                        (SUBJECT_COUNT * MAX_MARKS_PER_SUBJECT)) * 100;

    cout << "\n------------------------------------------\n";
    cout << "Name       : " << studentName << endl;
    cout << "Enrollment : " << enrollmentNumber << endl;
    cout << "------------------------------------------\n";
    cout << left << setw(5) << "No." << setw(25) << "Subject"
         << right << setw(8) << "Marks" << endl;
    cout << "------------------------------------------\n";
    for (int i = 0; i < SUBJECT_COUNT; i++)
    {
        cout << left << setw(5) << (i + 1) << setw(25) << subjectNames[i]
             << right << setw(8) << marks[i] << endl;
    }
    cout << "------------------------------------------\n";
    cout << fixed << setprecision(2);
    cout << left << setw(30) << "Total"      << right << setw(8) << totalMarks << endl;
    cout << left << setw(30) << "Average"    << right << setw(8) << averageMarks << endl;
    cout << left << setw(30) << "Percentage" << right << setw(7) << percentage << "%" << endl;
    cout << "------------------------------------------\n";
}

void showTranslationProcess()
{
    cout << "\n===== Program Translation Process =====\n";
    cout << left << setw(6) << "Step" << setw(22) << "Tool"
         << setw(20) << "Input" << "Output\n";
    cout << "-----------------------------------------------------------\n";
    cout << left << setw(6) << 1 << setw(22) << "Editor"       << setw(20) << "Typed code"    << "main.cpp\n";
    cout << left << setw(6) << 2 << setw(22) << "Preprocessor" << setw(20) << "main.cpp"      << "main.i\n";
    cout << left << setw(6) << 3 << setw(22) << "Compiler"     << setw(20) << "main.i"        << "main.s (assembly)\n";
    cout << left << setw(6) << 4 << setw(22) << "Assembler"    << setw(20) << "main.s"        << "main.o (object)\n";
    cout << left << setw(6) << 5 << setw(22) << "Linker"       << setw(20) << "main.o + libs" << "a.out / main.exe\n";
    cout << left << setw(6) << 6 << setw(22) << "Loader"       << setw(20) << "Executable"    << "Program in memory\n";
    cout << left << setw(6) << 7 << setw(22) << "CPU"          << setw(20) << "Program"       << "Output\n";
}

int main()
{
    int menuChoice;

    do
    {
        cout << "\n====== Student Record Management System ======\n";
        cout << "1. Increment / Decrement demo (Task 3 & 4)\n";
        cout << "2. Expression evaluation (Task 5-8)\n";
        cout << "3. Corrected error example (Task 9)\n";
        cout << "4. Student academic summary (5 subjects)\n";
        cout << "5. Program translation process chart\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> menuChoice;

        switch (menuChoice)
        {
            case 1: demonstrateIncrementDecrement(); break;
            case 2: evaluateExpression();            break;
            case 3: showSafeAverage();               break;
            case 4: studentAcademicSummary();        break;
            case 5: showTranslationProcess();        break;
            case 0: cout << "Thank you. Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (menuChoice != 0);

    return 0;
}
