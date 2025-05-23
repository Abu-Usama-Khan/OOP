#include <iostream>
using namespace std;

// Abstract base class
class Person {
protected:
    string name;
    int age;

public:
    // Pure virtual function
    virtual void getRole() = 0;

    // Setter functions
    void setName(const string& n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }

    // Common function
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Virtual destructor
    virtual ~Person() {}
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setSubject(const string& sub) {
        subject = sub;
    }

    void getRole() override {
        cout << name << " is a Teacher. Teaches: " << subject << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int grade;

public:
    void setGrade(int g) {
        grade = g;
    }

    void getRole() override {
        cout << name << " is a Student. Grade: " << grade << endl;
    }
};

// Derived class: Principal
class Principal : public Person {
public:
    void getRole() override {
        cout << name << " is the Principal of the school." << endl;
    }
};

int main() {
    Teacher t1;
    t1.setName("Mr. Ahmad");
    t1.setAge(40);
    t1.setSubject("Mathematics");

    Student s1;
    s1.setName("Ali");
    s1.setAge(16);
    s1.setGrade(10);

    Principal p1;
    p1.setName("Mrs. Khan");
    p1.setAge(50);

    Student s2;
    s2.setName("Sara");
    s2.setAge(15);
    s2.setGrade(9);

    Teacher t2;
    t2.setName("Ms. Fatima");
    t2.setAge(35);
    t2.setSubject("English");

    // Array of base class pointers pointing to objects
    Person* people[] = {&t1, &s1, &p1, &s2, &t2};

    cout << "=== School People Info ===" << endl;
//    for (Person* person : people) {
//        person->displayInfo();
//        person->getRole();
//        cout << "-------------------------" << endl;
//    }

	int count = 0;
	while(count<5) {
		people[count]->displayInfo();
		people[count]->getRole();
		count ++;
		cout << "-------------------------" << endl;
	}
    return 0;
}



