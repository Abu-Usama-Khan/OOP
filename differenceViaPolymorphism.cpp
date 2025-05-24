#include <iostream>
using namespace std;

class Difference {
	int x=10;
	double x1 = 10.1;
	
public:
	void diff(int y) {
		int dif = x-y;
		if (dif < 0) dif*=-1;
		cout <<"The difference of " <<x <<" and " <<y <<" is: " <<dif <<endl;
		cout <<"func1 called!\n";
	}
	void diff(double y) {
		double dif = x1-y;
		if (dif < 0) dif*=-1;
		cout <<"The sum of " <<x1 <<" and " <<y <<" is: " <<dif <<endl;
		cout <<"func2 called!\n";
	}
	void diff(int y, int z) {
		int dif = x-y-z;
		if (dif < 0) dif*=-1;
		cout <<"The sum of " <<x <<" , " <<y <<" and " <<z <<" is: " <<dif <<endl;
		cout <<"func3 called!\n";
	}
};


int main() {
	Difference a1;
	a1.diff(10);
	a1.diff(10.4);
	a1.diff(20,30);
	
}
