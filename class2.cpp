#include <iostream>
using namespace std;

class students {
	
	int age;
	string name;
		
	public:
		
		void setStudentData(string n, int num) {
			name=n;
			age=num;
		}
		
		void getStudentData() {
			cout <<"Name: " <<name <<",\tAge: " <<age <<endl;
		}
		
};

int takeAgeAsInput() {
	int num;
	
	cout <<"Enter Age: ";
	cin >>num;
	
	return num;
}

string takeNameAsInput() {
	string val;
	
	cout <<"Enter Name: ";
	cin >>val;
	
	return val;
}

void mainImplement() {
	
	students s[2];
	
	for (int i=0; i<2; i++) {
		
		s[i].setStudentData(takeNameAsInput(), takeAgeAsInput());
		
	}
	
	for (int i=0; i<2; i++) {
		s[i].getStudentData();
	}
		
}


int main() {
	
	mainImplement();
	
	return 0;
}
