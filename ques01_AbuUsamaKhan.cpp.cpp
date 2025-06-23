#include <iostream>
#include <string>
using namespace std;

class BorrowRecord{
	//member attributes
	
	string borrowDate;
	int dueDays;
	string* bookTitles;
	int* bookPages;
	int count=0;
	
public:
	//member functions
	
	void addBook(string title, int pages) {
		if (count <=5) {
			bookTitles[count] = title;
			bookPages[count] = pages;
			count++;
		}
	}
	
	int calcTotalPages() {
		int pageCount = 0;
		for(int i=0; i<count; i++) {
			pageCount+=bookPages[i];
		}
		
		return pageCount;	
	}
	
	int calcDueAmount(int days) {
		return calcTotalPages;
	}
	
	int calcFine(int days) {
		if (days>dueDays) {
			int extraDays = days-dueDays;
			return extraDays*10;
		}
		
	}
	
	void summary() {
		cout <<"Borrow Date:\t" <<borrowDate <<endl
			 <<"Due Day:\t" <<dueDays <<endl
			 <<"Total Pages:\t" <<calcTotalPages() <<endl
			 <<"Due Amount:\t" <<calcDueAmount() <<endl
			 <<"calcFine:\t" <<calcFine() <<endl; 
	}
	
};

class Member {
	//member attributes
	
	string name;
	string membershipId;
	string email;
	string contactNo;
	BorrowRecord* borrowRec;
	
public:
	//constructor
	
	Member(string n, string m, string e, string c) : name(n), membershipId(m), email(e), contactNo(c) {}
	
	//member functions
	void addBorrowRec(string bd, int d, string bt, int bp) {
		borrowRec[] = 
	}
	
};


int main() {
	
}
