#include <iostream>
#include <string>
using namespace std;

class A {
	protected:
		int a;
};

class B: public A{
	private:
		int b;
		
	public:
		B() {
			a = 0;
			b = 0;
		}
		
		B(int av, int bv) {
			a = av;
			b = bv;
		}
		
		void displayVal() {
			cout <<a <<"\t" <<b;
		}
	
};


int main() {
	B objB = B(100,200);
	//cout <<objB.b;
	//cout <<objB.a;
	objB.displayVal();
	
	return 0;
}
