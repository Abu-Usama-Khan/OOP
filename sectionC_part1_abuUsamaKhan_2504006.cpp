#include <iostream>
#include <string>
using namespace std;

class University{
public:
	string universityName;
	string universityLoc;
	int numOfDeparts;
	int numOfStudents;
	int numOfEmployees;
	
	//Constructor
	University(string un, string ul, int nd, int ns, int ne) : 
	universityName(un), universityLoc(ul), numOfDeparts(nd), numOfStudents(ns), numOfEmployees(ne) {}
	
};

class Student : public University {
public:	
	string name;
	int rollNum;
	string department;
	int semester;
	string feeStatus;

	//Constructor
	Student (string un, string ul, int nd, int ns, int ne, string n, int rn, string d, int sem, string fs)
	: University(un, ul, nd, ns, ne),
	name(n), rollNum(rn), department(d), semester(sem), feeStatus(fs) {}
	
};


int main() {
	Student st1 = Student("UoK", "Karachi", 56, 26000, 6500, "Usama", 2504006, "DCS", 8, "clear");
	cout <<st1.universityName <<endl;
	cout <<st1.name <<endl;
}
