#include <iostream>
using namespace std;

class students {
	
	public:
		int age;
		string name;
		
		void displayFunc() {
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

void fillArr(students r[]) {
	
	
	
	for (int i=0; i<2; i++) {
		r[i].name = takeNameAsInput();
		r[i].age = takeAgeAsInput();
	}
	
	
		
}


int main() {
	
	students s[2];
	
	fillArr(s);
	
	for (int i=0; i<2; i++) {
		s[i].displayFunc();
	}
	
	return 0;
}


// Little diff
//
//#include <iostream>
//using namespace std;
//
//class students {
//	
//	public:
//		int age;
//		string name;
//		
//		void displayFunc() {
//			cout <<"Name: " <<name <<",\tAge: " <<age <<endl;
//		}
//		
//};
//
//int takeAgeAsInput() {
//	int num;
//	
//	cout <<"Enter Age: ";
//	cin >>num;
//	
//	return num;
//}
//
//string takeNameAsInput() {
//	string val;
//	
//	cout <<"Enter Name: ";
//	cin >>val;
//	
//	return val;
//}
//
//void mainImplement() {
//	
//	students s[10];
//	
//	for (int i=0; i<10; i++) {
//		s[i].name = takeNameAsInput();
//		s[i].age = takeAgeAsInput();
//	}
//	
//	for (int i=0; i<10; i++) {
//		s[i].displayFunc();
//	}
//		
//}
//
//
//int main() {
//	
//	mainImplement();
//	
//	return 0;
//}
