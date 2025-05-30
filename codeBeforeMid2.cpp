#include <iostream>
#include <cstring>

using namespace std;

class Teacher {
public:
    string name;
    int age;
	
	Teacher() : name("Not given"), age(0) {}
    Teacher(const string n, const int a) : name(n), age(a){}
    
    //Setter functions
    void setName(string n) {
		name=n;
	}
    void setAge(int a) {
		age=a;
	}
    
    //getter functions
    void getName() {
    	cout <<name;
	}
	void getAge() {
    	cout <<age;
	}

};

void sortTeachersList(Teacher []);


int main() {
	string name;
	int age;
	
    Teacher teachersList[15];
    
    for (int i=0; i<15; i++) {
    	cout <<"Enter " <<i+1 <<" Teacher's name: ";
    	cin >>name;
    	
    	cout <<"Enter " <<i+1 <<" Teacher's age: ";
    	cin >>age;
    	
    	teachersList[i].setName(name);
    	teachersList[i].setAge(age);
	}
	
	sortTeachersList(teachersList);
	
	for (int i=0; i<15; i++) {

    	cout <<"Teacher's Name: ";
		teachersList[i].getName();
    	cout <<"\tTeacher's Age: ";
    	teachersList[i].getAge();
    	cout <<endl;
	}
	
    return 0;
}


void sortTeachersList(Teacher teachers[] ) {
	for (int i=0; i<14; i++) {
		for (int j=0; j<14-i; j++) {
			if(teachers[j].age > teachers[j+1].age) {
				Teacher temp = teachers[j];
				teachers[j] = teachers[j+1];
				teachers[j+1] = temp;
			}
		}
	}
}


