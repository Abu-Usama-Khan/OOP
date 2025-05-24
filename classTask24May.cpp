#include <iostream>
using namespace std;

class Shape {
protected:
	double length;
	double breadth;
	
public:
	virtual double calculateArea() = 0;
};

class Square : public Shape {
	
public:
	Square(double len) {
		length = len;
	}
	double calculateArea() override {
		return length*length;
	}
	
};

class Rectangle : public Shape {
	
public:
	Rectangle(double len, double br) {
		length = len;
		breadth = br;
	}
	double calculateArea() override {
		return length*breadth;
	}
	
};

class Triangle : public Shape {
	
public:
	Triangle(double len, double br) {
		length = len;
		breadth = br;
	}
	double calculateArea() override {
		return (length*breadth)/2;
	}
	
};

void areaCalculation();


int main() {
	areaCalculation(); 
}


void areaCalculation() {
	char typ;
	bool check = true;
	for(int i=0; i<3; i++) {
		do {
			cout <<"Enter type of shape (s, r, t) for Square, Rectangle and Triangle: ";
			cin >>typ;
			if (typ=='s'||typ=='r'||typ=='t') {
				check=false;
			}
			else cout <<"Invalid option!\n";
		} while(check);
		
		switch (typ) {
			case 's' : {
				double len;
				cout <<"Enter length of Square: ";
				cin >>len;
				Square s1 = Square(len);
				cout <<"Area of Square is: "<<s1.calculateArea() <<endl;
				break;
			}
			case 'r' : {
				double len, br;
				cout <<"Enter length of Rectangle: ";
				cin >>len;
				cout <<"Enter breadth of Rectangle: ";
				cin >>br;
				Rectangle r1 = Rectangle(len, br);
				cout <<"Area of Rectangle is: "<<r1.calculateArea() <<endl;
				break;
			}
			case 't' : {
				double len, br;
				cout <<"Enter base of Triangle: ";
				cin >>len;
				cout <<"Enter height of Triangle: ";
				cin >>br;
				Triangle t1 = Triangle(len, br);
				cout <<"Area of Triangle is: "<<t1.calculateArea() <<endl;
				break;
			}
		}
	}
}
