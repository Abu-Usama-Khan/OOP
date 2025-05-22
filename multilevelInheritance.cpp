#include <iostream>
#include <string>
using namespace std;

class A {
	protected:
		int a;
};

class B: public A{
	protected:
		int b;
};

class C: public B{
	private:
		int c;
		
	public:
		C() {
			this->a = 0;
			this->b = 0;
			this->c = 0;
		}
		
		C(int a, int b, int c) {
			this->a = a;
			this->b = b;
			this->c = c;
		}
		
		void displayVal() {
			cout <<a <<"\t" <<b <<"\t" <<c;
		}
	
};


int main() {
	C objC = C(100,200,300);
	//cout <<objB.b;
	//cout <<objB.a;
	objC.displayVal();
	
	return 0;
}
