#include <iostream>
#include <string>
using namespace std;

//Classes

class Employee{
	//member attributes
	
	string name; 
	int employeeId;
	
public:
	//member functions
	
	//pure virtual and virtual functions
	virtual void displayInfo() = 0;
	
	virtual bool isEqual(Employee& other) {
		
		//I will assign manager ID with prefix 1 i.e. 1001,
		//developer ID with prefix 2 i.e. 2001 and
		//intern ID with prefix 3 i.e. 3001.
		//so the employees will be compared on both bases i.e. designation + seniority(joining the company)
		
		if (this->getEmployeeId() == other.getEmployeeId())
			return true;
		else
			return false;	
	}
	
	bool isSenior(Employee& other) {
		//additional function
		//made due to misunderstanding of isEqual() function
		//let it in the code with diff name because it has been made
		
		//I will assign manager ID with prefix 1 i.e. 1001,
		//developer ID with prefix 2 i.e. 2001 and
		//intern ID with prefix 3 i.e. 3001.
		//so the employees will be compared on both bases i.e. designation + seniority(joining the company)
		
		if (this->getEmployeeId() < other.getEmployeeId())
			return true;
		else
			return false;	
	}
	
	//Dynamic Cast Function
	
	void identifyRole(Employee* emp) {
		cout << emp.displayInfo()
	}
	
	//setters
	void setName(string n) {
		name = n;
	}
	
	void setEmployeeId(int id) {
		employeeId = id;
	}
	
	//getters
	string getName() {
		return name;
	}
	
	int getEmployeeId() {
		return employeeId;
	}
	
};


class Manager : public Employee {
	//member attributes
	
	string designation;
	string department;
	
public:	
	//constructor
	
	Manager(string n, int id, string dep) {
		setName(n);
		setEmployeeId(id);
		designation = "Manager";
		department = dep;
	}
	
	//member functions
		
	void displayInfo() override {
		cout <<"Name:\t" <<getName() <<endl
			 <<"Employee Id:\t" <<getEmployeeId() <<endl
			 <<"Designation:\t" <<designation <<endl
			 <<"Department:\t" <<department <<endl;		 
	}
	
};


class Developer : public Employee {
	//member attributes
	
	string designation;
	string programmingLanuage;
	
public:
	//constructor
	
	Developer(string n, int id, string pl) {
		setName(n);
		setEmployeeId(id);
		designation = "Developer";
		programmingLanuage = pl;
	}
	
	//member functions
	
	void displayInfo() override {
		cout <<"Name:\t" <<getName() <<endl
			 <<"Employee Id:\t" <<getEmployeeId() <<endl
			 <<"Designation:\t" <<designation <<endl
			 <<"Programming Language:\t" <<programmingLanuage <<endl;		 
	}
	
	void promote() {
		designation = "Manager";
	}
	
};


class Intern : public Employee {
	//member attributes
	
	string designation;
	int durationMonths;
	
public:
	//constructor
	
	Intern(string n, int id, int dm) {
		setName(n);
		setEmployeeId(id);
		designation = "Developer";
		durationMonths = dm;
	}
	
	//member functions
	
	void displayInfo() override {
		cout <<"Name:\t" <<getName() <<endl
			 <<"Employee Id:\t" <<getEmployeeId() <<endl
			 <<"Designation:\t" <<designation <<endl
			 <<"Duration Months:\t" <<durationMonths <<endl;
	}
	
	void promote() {
		designation = "Developer";
	}
	
};


// Main Program

int main() {
	//creating objects
	
	Manager mgr1 = Manager("Usama", 1001, "Development");
	Manager mgr2 = Manager("Furquan", 1002, "Testing");
	
	Developer dev1 = Developer("Hamza", 2001, "cpp");
	
	Intern int1 = Intern("Anas", 3001, 6);
	
	//using isEqual() and isSenior() functions
	
	if (mgr1.isEqual(mgr2))
		cout<<"The Employees are equal";
	else
		cout<<"The Employees are not equal";
		
	if (mgr1.isSenior(mgr2))
		cout<<"The Employee" <<mgr1.getEmployeeId() <<"is senior";
	else
		cout<<"The Employee" <<mgr2.getEmployeeId() <<"is senior";
		
	if (dev1.isEqual(int1))
		cout<<"The Employees are equal";
	else
		cout<<"The Employees are not equal";
		
	
		
}

