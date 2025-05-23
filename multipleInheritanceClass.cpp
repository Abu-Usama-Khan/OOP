#include <iostream>
using namespace std;

// Base class 1
class Employee {
public:
    Employee() {
        cout << "Employee constructor called.\n";
    }
    
    ~Employee() {
        cout << "Employee deconstructor called.\n";
    }

    void work() {
        cout << "Employee works 9 to 5.\n";
    }

    void getSalary() {
        cout << "Employee receives salary every month.\n";
    }
};

// Base class 2
class Student {
public:
    Student() {
        cout << "Student constructor called.\n";
    }
    
    ~Student() {
        cout << "Student deconstructor called.\n";
    }

    void study() {
        cout << "Student studies for exams.\n";
    }

    void attendClass() {
        cout << "Student attends online classes.\n";
    }
};

// Derived class from both Employee and Student
class Intern : public Employee, public Student {
public:
    Intern() {
        cout << "Intern constructor called.\n";
    }
    
    ~Intern() {
        cout << "Intern deconstructor called.\n";
    }

    void doInternship() {
        cout << "Intern is learning and working simultaneously.\n";
    }
};

int main() {
    cout << "Creating Intern object...\n\n";

    Intern intern;

    cout << "\n--- Intern's Activities ---\n";
    intern.work();         // from Employee
    intern.getSalary();    // from Employee
    intern.study();        // from Student
    intern.attendClass();  // from Student
    intern.doInternship(); // own method

	cout <<"\nDestructor callings:\n";
	
    return 0;
}



