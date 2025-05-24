#include <iostream>
using namespace std;

class Addition {
	int x=10;
	double x1 = 10.1;
	
public:
	void add(int y) {
		cout <<"The sum of " <<x <<" and " <<y <<" is: " <<x+y <<endl;
		cout <<"func1 called!\n";
	}
	void add(double y) {
		cout <<"The sum of " <<x1 <<" and " <<y <<" is: " <<x+y <<endl;
		cout <<"func2 called!\n";
	}
	void add(int y, int z) {
		cout <<"The sum of " <<x <<" , " <<y <<" and " <<z <<" is: " <<x+y <<endl;
		cout <<"func3 called!\n";
	}
};


int main() {
	Addition a1;
	a1.add(10);
	a1.add(10.4);
	a1.add(20,30);
	
}
