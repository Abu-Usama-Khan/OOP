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
		
		// Copy Constructor
    	Student(const Student& other) 
        : name(new string(*other.name)),  // Deep copy name
          rollNum(other.rollNum),
          math(other.math),
          english(other.english),
          science(other.science),
          total(other.total) {
        cout << "Copy constructor called for " << *name << endl;
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
			cout <<endl;
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
    Student* students[5];

	//Objects creation using dynamic allocation in array(got idea through deep seek)
    students[0] = new Student(85, 90, 95);
    students[0]->setName("Abu Usama Khan");
    students[0]->setRollNumber(101);

    students[1] = new Student(78, 88);
    students[1]->setName("Asad Mehmood");
    students[1]->setRollNumber(102);
    students[1]->setScienceMarks(73);

    students[2] = new Student(92);
    students[2]->setName("Abdul Quddus");
    students[2]->setRollNumber(103);
    students[2]->setEnglishMarks(56);
    students[2]->setScienceMarks(68);

    students[3] = new Student();
    students[3]->setName("Ahmer Ali");
    students[3]->setRollNumber(104);
    students[3]->setMathMarks(75);
    students[3]->setEnglishMarks(82);
    students[3]->setScienceMarks(88);

    students[4] = students[0];
    students[4]->setName("Syed Furquan");
    students[4]->setRollNumber(105);
    
    

    //Display before sorting
    cout << "Before sorting:\n";
    for (int i = 0; i < 5; i++) {
        students[i]->displayStudent();
    }

    //Sort students
    sortStudents(*students, 5);

    // Display after sorting
    cout <<"After sorting:\n";
    for (int i = 0; i < 5; i++) {
        students[i]->displayStudent();
    }

    //Removing objects
    for (int i = 0; i < 5; i++) {
        delete students[i];
    }

    return 0;
}
