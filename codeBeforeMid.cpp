#include <iostream>
#include <cstring>

using namespace std;

class Course {
public:
    char name[50];
    char code[10];
    int totalMarks;
    int marksObtained;

    Course(const char* n = "", const char* c = "", int tm = 0, int mo = 0) {
        strcpy(name, n);
        strcpy(code, c);
        totalMarks = tm;
        marksObtained = mo;
    }
};

class Student {
public:
    char name[50];
    char email[50];
    Course course;

    Student(const char* n = "", const char* e = "", int marks = 0) {
        strcpy(name, n);
        strcpy(email, e);
        course = Course("OOP", "CS101", 75, marks);
    }
};

class Teacher {
public:
    char name[50];
    char email[50];
    Student** students;
    int numStudents;

    Teacher(const char* n, const char* e, int num) {
        strcpy(name, n);
        strcpy(email, e);
        numStudents = num;
        students = new Student*[numStudents];
    }

    void addStudent(int index, const char* sName, const char* sEmail, int marks) {
        students[index] = new Student(sName, sEmail, marks);
    }

    void submitMarksToAdmin() {
        // Sort students from highest to lowest marks (simple bubble sort)
        for (int i = 0; i < numStudents - 1; ++i) {
            for (int j = 0; j < numStudents - i - 1; ++j) {
                if (students[j]->course.marksObtained < students[j + 1]->course.marksObtained) {
                    Student* temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }

        // Print marks from highest to lowest
        cout << "Submitting marks to admin (Highest to Lowest):\n";
        for (int i = 0; i < numStudents; ++i) {
            cout << students[i]->name << " (" << students[i]->email << ") - "
                 << "OOP Marks: " << students[i]->course.marksObtained << "/"
                 << students[i]->course.totalMarks << endl;
        }
    }

    ~Teacher() {
        for (int i = 0; i < numStudents; ++i) {
            delete students[i];
        }
        delete[] students;
    }
};

// Sample usage
int main() {
    int N;
    cout << "Enter number of students: ";
    cin >> N;

    Teacher t("Prof. Farhan", "farhan@uok.edu.pk", N);

    for (int i = 0; i < N; ++i) {
        char sName[50], sEmail[50];
        int marks;
        cout << "\nEnter name of student " << (i + 1) << ": ";
        cin >> sName;
        cout << "Enter email of student " << (i + 1) << ": ";
        cin >> sEmail;
        cout << "Enter OOP marks obtained (out of 75): ";
        cin >> marks;

        t.addStudent(i, sName, sEmail, marks);
    }

    cout << endl;
    t.submitMarksToAdmin();

    return 0;
}

