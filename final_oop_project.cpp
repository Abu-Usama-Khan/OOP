#include <iostream>
#include <fstream>
#include <string>
using namespace std;


// Classes

class Airport {
public:
    string name, city, country, airportCode;

    void input() {
        cout << "Enter Airport Name: "; 
		getline(cin, name);
        cout << "Enter City: "; 
		getline(cin, city);
        cout << "Enter Country: "; 
		getline(cin, country);
        cout << "Enter Airport Code: "; 
		getline(cin, airportCode);
    }

    string toString() const {
        return "Name:\t\t" + name + "\n" + "City:\t\t" + city + "\n" + "Country:\t" + country + "\n" + "Airport Code:\t" + airportCode + "\n";
    }
};

class Airline {
public:
    string name, airlineCode, originCountry;

    void input() {
        cout << "Enter Airline Name: "; 
		getline(cin, name);
        cout << "Enter Airline Code: "; 
		getline(cin, airlineCode);
        cout << "Enter Origin Country: "; 
		getline(cin, originCountry);
    }

    string toString() const {
        return "Name:\t\t" + name + "\n" + "Airline Code:\t" + airlineCode + "\n" + "Origin Country:\t" + originCountry + "\n";
    }
};

class IataOrganization {
public:
    string name, directorName, directorEmail;

    void input() {
        cout << "Enter Organization Name: "; 
		getline(cin, name);
        cout << "Enter Director Name: "; 
		getline(cin, directorName);
        cout << "Enter Director Email: "; 
		getline(cin, directorEmail);
    }

    string toString() const {
        return "Name:\t\t" +  name + "\n" + "Director Name:\t" + directorName + "\n" + "Director Email:\t" + directorEmail + "\n";
    }
};


// Functions

void writeToFile(string filename, string data) {
    ofstream out(filename.c_str(), ios::app);
    out << data << "\n";
    out.close();
}

void viewFile(string filename) {
    ifstream in(filename.c_str());
    string line;
    while (getline(in, line)) {
        if (line.empty()) cout << endl;
        else cout << line << endl;
    }
    in.close();
}

void deleteFileContent(string filename) {
    ofstream out(filename.c_str(), ios::trunc);
    out.close();
    cout << "All data deleted from " << filename << endl;
}

void updateFile(string filename) {
    cout << "This will clear and let you re-enter entries." << endl;
    deleteFileContent(filename);
    int n;
    cout << "Enter number of records to add: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        if (filename == "airport.txt") {
            Airport a; a.input();
            writeToFile(filename, a.toString());
        } else if (filename == "airline.txt") {
            Airline a; a.input();
            writeToFile(filename, a.toString());
        } else if (filename == "iata_organization.txt") {
            IataOrganization i; i.input();
            writeToFile(filename, i.toString());
        }
    }
}


// Main Program

int main() {
    int choice, subChoice;
    string file;

    while (true) {
    	
        cout <<"\nProject Created by:\nMember1: Abu Usama Khan\nMember2: Abdul Quddus\nITM Batch 4 (evening)\n"
			 <<"\n=========WELCOME TO=========\n"
			 << "\n===== IATA SYSTEM MENU =====\n\n";
			 
        cout << "1. Add\n2. View\n3. Update\n4. Delete\n5. Exit\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 5) break;

        cout << "\nSelect Category:\n1. Airport\n2. Airline\n3. IATA Organization\nEnter your choice: ";
        cin >> subChoice;
        cin.ignore();

        if (subChoice == 1) file = "airport.txt";
        else if (subChoice == 2) file = "airline.txt";
        else if (subChoice == 3) file = "iata_organization.txt";
        else { 
		cout << "Invalid choice!\n"; 
		continue; 
		}

        if (choice == 1) {
            if (file == "airport.txt") {
                Airport a; 
				a.input();
                writeToFile(file, a.toString());
            } else if (file == "airline.txt") {
                Airline a; 
				a.input();
                writeToFile(file, a.toString());
            } else if (file == "iata_organization.txt") {
                IataOrganization i; 
				i.input();
                writeToFile(file, i.toString());
            }
            
        } else if (choice == 2) {
            viewFile(file);
        } else if (choice == 3) {
            updateFile(file);
        } else if (choice == 4) {
            deleteFileContent(file);
        } else {
            cout << "Invalid action!\n";
        }
    }

    return 0;
}

