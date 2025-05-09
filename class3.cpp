#include <iostream>
using namespace std;

class Students {
    int rollNumber, age;
    string name, email;
    string cnic;
    
    public:
    // my constructor
    Students(string fn, string ln, string email, int rn, int age, string cnic) {
    	setName(fn, ln);
    	setEmail(email);
    	setRollNo(rn);
    	setAge(age);
    	setCnic(cnic);
    	getAllDetails();
    }
    Students() {
    	setName("No", "Name");
    	setEmail("No Email");
    	setRollNo(0);
    	setAge(0);
    	setCnic(0);
    	//getAllDetails();
        //cout<<"\nHi Constructor here\n";
    }
    // my setters
    void setRollNo(int r) {
        rollNumber = r;
    }
    void setEmail(string e) {
        email = e;
    }
    void setName(string fn, string ln) {
        name = fn+" "+ln;
    }
    void setAge(int a) {
        age = a;
    }
    void setCnic(string cn) {
        cnic = cn;
    }
    // my getters
    int getRollNo() {
        return rollNumber;
    }
    string getEmail() {
        return email;
    }
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getCnic() {
        return cnic;
    }
    void getAllDetails() {
        cout<<"Name: "<<getName()<<"\t"<<"Roll Number: "<<getRollNo()<<"\t"<<"Email: "<<getEmail()<<"\t"
			<<"Age: "<<getAge()<<"\t"<<"CNIC "<<getCnic()<<endl;
    }
};


int initializeFunc();

Students genData();


int main() {
	
	int n = initializeFunc();
	
	Students studentsData[n];

	for (int i=0; i<n; i++) {
		studentsData[i] = genData();
	}
	
    
    return 0;
}


int initializeFunc() {
	int num;
	cout <<"Enter number of Students: ";
	cin >>num;
	return num;
}

Students genData() {
	
	Students tempVar;
	string fname, lname, email;
	int rollNum, age;
	string cnic;
	
	cout <<"Enter Your First Name: ";
	cin >>fname;
	cout <<"Enter Your Last Name: ";
	cin >>lname;
	cout <<"Enter Your Roll Number: ";
	cin >>rollNum;
	cout <<"Enter Your Email : ";
	cin >>email;
	cout <<"Enter Your Age : ";
	cin >>age;
	cout <<"Enter Your CNIC : ";
	cin >>cnic;
	tempVar = Students(fname, lname, email, rollNum, age, cnic);
	
	return tempVar;
	
}



//    string name;
//    int rollNum, subjectsCount;
//    float totalMarks;
//    
//    cout <<"Enter Your Name: ";
//    getline(cin, name);
//    cout <<"Enter Your Roll Number: ";
//    cin >>rollNum;
//    cout <<"Enter number of subjects : ";
//    cin >>subjectsCount;
//    cout <<"Enter Marks Obtained : ";
//    cin >>totalMarks;
//    
//    Students S[3] = {Students(), Students(name, rollNum, subjectsCount, totalMarks), Students()};
