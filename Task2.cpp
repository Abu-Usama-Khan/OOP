#include <iostream>
using namespace std;

class Student{
	string* name = new string();
	int rollNum;
	int math=0;
	int english=0;
	int science=0;
	int total = 0;
	
	public:
		//Constructors
		Student() {
			
		}
		
		Student(int sub1, int sub2, int sub3) {
			this->math=sub1;
			this->english=sub2;
			this->science=sub3;
			setTotalMarks();
		}
		
		Student(int sub1, int sub2) {
			this->math=sub1;
			this->english=sub2;
			setTotalMarks();
		}
		
		Student(int sub1) {
			this->math=sub1;
			setTotalMarks();
		}
		
		//Destructor
		~Student() {
        	delete name;
        	cout <<"Destructor called\n";
    	}
		
		//Setter Functions
		void setMathMarks(int marks) {
			this->math = marks;
			setTotalMarks();
		}
		
		void setEnglishMarks(int marks) {
			this->english = marks;
			setTotalMarks();
		}
		
		void setScienceMarks(int marks) {
			this->science = marks;
			setTotalMarks();		}
		
		void setRollNumber(int num) {
			this->rollNum = num;
		}
		
		void setName(string name) {
			*this->name = name;
		}
		
		void setTotalMarks() {
			this->total = this->english + this->math + this->science;
		}
		
		//Getter Functions
		void getMathMarks() {
			cout <<"Marks in Math are: " <<this->math <<endl;
		}
		
		void getEnglishMarks() {
			cout <<"Marks in English are: " <<this->english <<endl;
		}
		
		void getScienceMarks() {
			cout <<"Marks in Science are: " <<this->science <<endl;
		}
		
		int getTotalMarks() {
			return this->total;
		}
		
		void getRollNumber() {
			cout <<"ROll Number: " <<this->rollNum <<endl;
		}
		
		void getname() {
			cout <<"Name: " <<*this->name <<endl;
		}
		
		void displayStudent() {
			getname();
			getRollNumber();
			getMathMarks();
			getEnglishMarks();
			getScienceMarks();
			cout <<"Total Marks are: " <<getTotalMarks() <<endl;
		}
};

void sortStudents(Student students[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(students[j].getTotalMarks() < students[j+1].getTotalMarks()) {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}

int main() {
    Student students[5];

    students[0] = Student(85, 90, 95);
    students[0].setName("Ali Khan");
    students[0].setRollNumber(101);

    students[1] = Student(78, 88);
    students[1].setName("Fatima Ahmed");
    students[1].setRollNumber(102);

    students[2] = Student(92);
    students[2].setName("Usman Malik");
    students[2].setRollNumber(103);

    students[3] = Student();
    students[3].setName("Bilal Hussain");
    students[3].setRollNumber(104);
    students[3].setMathMarks(75);
    students[3].setEnglishMarks(82);
    students[3].setScienceMarks(88);

    students[4] = Student(90, 85, 80);
    students[4].setName("Ayesha Raza");
    students[4].setRollNumber(105);

    cout << "Before sorting:\n";
    for(int i = 0; i < 5; i++) {
        students[i].displayStudent();
    }

    sortStudents(students, 5);

    cout << "After sorting:\n";
    for(int i = 0; i < 5; i++) {
        students[i].displayStudent();
    }

	return 0;	
}
