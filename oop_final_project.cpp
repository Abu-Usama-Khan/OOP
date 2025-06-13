#include <iostream>
#include <string>
using namespace std;

class SystemDirector {
	string name;
	string password;
};

void mainStream();

void subMenu();


int main() {
	
	mainStream();
	
}


void mainStream() {
	cout <<"\n\t----------Welcome to----------\n"
		 <<"\t--Aviation Management System--\n\n";
		 
	int selection;
	bool check;
	do {
		check = false;
		
		cout <<"Select task to perform (1-4):\n"
			 <<"1) Create\n"
			 <<"2) Read\n"
			 <<"3) Update\n"
			 <<"4) Delete\n\n";
		cin >> selection;
		
		switch (selection) {
			case 1: {
				subMenu();
				break;
			}
			case 2: {
				subMenu();
				break;
			}
			case 3: {
				subMenu();	
				break;
			}
			case 4: {
				subMenu();
				break;
			}
			default: {
				cout <<"\nInvalid Input!\n\n";
				check = true;
				break;
			}
		}
	} while (check);
}

void subMenu(){
	int selection;
	bool check;
	do {
		check = false;
		
		cout <<"\nSelect aviation stream (1-3):\n"
			 <<"1) Airport\n"
			 <<"2) Airline\n"
			 <<"3) IATA Organization\n\n";
		cin >> selection;
		
		switch (selection) {
			case 1: {
				break;
			}
			case 2: {
				break;
			}
			case 3: {	
				break;
			}
			case 4: {
				break;
			}
			default: {
				cout <<"\nInvalid Input!\n\n";
				check = true;
				break;
			}
		}
	} while (check);
}
