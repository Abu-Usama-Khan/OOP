#include <iostream>
#include <string>
using namespace std;

class Payment {
protected:
	int pid;
	int amount;
	string currency;
	string doneOn;
};

class User {
protected:
	string name;
	string joiningDate;
};

class Gym : public Payment, public User {
public:
	
	void addUser(string name, string jd) {
		this->name=name;
		this->joiningDate=jd;
	}
	void addFees(int pid, int am, string cur, string doneOn) {
		this->pid=pid;
		this->amount=am;
		this->currency=cur;
		this->doneOn=doneOn;
	}
	void displayUserPaymentInfo() {
		cout <<"\nName:\t" <<this->name <<endl;
		cout <<"Joining Date:\t" <<this->joiningDate <<endl;
		cout <<"Payment ID:\t" <<this->pid <<endl;
		cout <<"Amount Paid:\t" <<this->amount <<endl;
		cout <<"Currency:\t" <<this->currency <<endl;
		cout <<"Payment Date:\t" <<this->doneOn <<endl;
	}
};

void gymMemAndPayment();


int main() {

	gymMemAndPayment();
	
}


void gymMemAndPayment() {
	Gym gym[5];
	string name, joiningDate, currency, doneOn;
	int pid, amount; 
	
	for (int i=0; i<5; i++) {
		cout <<"Enter Name of gym member " <<i+1 <<":";
		cin >>name;
		cout <<"Enter Joining Date of gym member " <<i+1 <<" (day/mm/yyyy):";
		cin >>joiningDate;
		gym[i].addUser(name, joiningDate);
		cout <<"Enter Payment ID of gym member " <<i+1 <<":";
		cin >>pid;
		cout <<"Enter Payment Amount of gym member " <<i+1 <<":";
		cin >>amount;
		cout <<"Enter Payment Amount Currency of gym member " <<i+1 <<":";
		cin >>currency;
		cout <<"Enter Payment Date of gym member " <<i+1 <<" (day/mm/yyyy):";
		cin >>doneOn;
		gym[i].addFees(pid, amount, currency, doneOn);
		
	}
	
	for(int i=0; i<5; i++) {
		gym[i].displayUserPaymentInfo();
	}
}


