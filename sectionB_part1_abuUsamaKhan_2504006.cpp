#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
	int rollNo;
	float gpa;
	
public:
	//Constructors default and parameterized
	Student() :name("Not given"), rollNo(-1), gpa(-1) {}
	Student(string n, int r, float g) : name(n), rollNo(r), gpa(g) {}
	
	//setter functions
	void setName(string n) {
		this->name = n;
	}
	void setRollNo(int r) {
		this->rollNo = r;
	}
	void setGpa(float g ) {
		this->gpa = g;
	}
	
	//getter functions
	string getName() {
		return this->name;
	}
	int getRollNo() {
		return this->rollNo;
	}
	float getGpa() {
		return this->gpa;
	}
	
	//display function
	void displayInfo() {
		cout <<"\nStudent Info:\n"
			 <<"Name:\t" <<getName() <<endl
			 <<"Roll #:\t" <<getRollNo() <<endl
			 <<"GPA:\t" <<getGpa() <<endl;
	}
};

void displayList(Student**);
void sortList(Student**);


int main() {
	Student** students = new Student*;
	string studentNames[] = {"Ahmed", "Usama", "Asad", "Adil", "Saad"};
	int studentRoll[] = {100,101,102,103,104};
	float studentGpa[] = {3.0, 3.21, 3.11, 3.43, 2.85};
	
	students[3]->displayInfo();
	
	for(int i=0; i<5; i++) {
		students[i]->setName(studentNames[i]);
		students[i]->setRollNo(studentRoll[i]);
		students[i]->setGpa(studentGpa[i]);
	}
	
	students[3]->displayInfo();
	
	displayList(students);
	sortList(students);
	displayList(students);
}


void displayList(Student** students) {
	for(int i=0; i<5; i++) {
		students[i]->displayInfo();
	}
	
}

void sortList(Student** students) {
	for (int i=0; i<4; i++) {
		for (int j=0; j<4-i; j++) {
			if (students[j]->getGpa() < students[j+1]->getGpa()){
				Student* temp = students[j];
				students[j] = students[j+1];
				students[j+1] = temp;
			}
		}
	}
}


