#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	string author;
	int price;
	
public:
	//Constructors default and parameterized
	Book() :title("Not given"), author("Not given"), price(-1) {}
	Book(string t, string a, int p) : title(t), author(a), price(p) {}
	
	//setter functions
	void setTitle(string t) {
		this->title = t;
	}
	void setAuthor(string a) {
		this->author = a;
	}
	void setPrice(int p ) {
		this->price = p;
	}
	
	//getter functions
	string getTitle() {
		return this->title;
	}
	string getAuthor() {
		return this->author;
	}
	int getPrice() {
		return this->price;
	}
	
	//discount calculation function
	int calculateDiscount() {
		return this->price * 0.8;
	}
};


int main() {
	Book b1 = Book("Animals kingdom", "Ahmed", 500 );
	cout <<"Price after 20% discount: " <<b1.calculateDiscount() <<" PKR";
}
