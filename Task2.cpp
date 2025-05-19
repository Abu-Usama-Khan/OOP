#include <iostream>
using namespace std;

class Student{
	int* name = new int;
	int rollNum;
	int math;
	int english;
	int science;
	int total = 0;
	
	public:
		//Constructors
		void Student() {
			
		}
		
		void Student(int sub1, int sub2, int sub3) {
			this->math=sub1;
			this->english=sub2;
			this->science=sub3;
		}
		
		void Student(int sub1, int sub2) {
			this->math=sub1;
			this->english=sub2;
		}
		
		void Student(int sub1) {
			this->math=sub1;
		}
		
		//Setter Functions
		
		
};


int main() {
	
	return 0;	
}
