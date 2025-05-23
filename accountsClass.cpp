#include <iostream>
using namespace std;


class Payment {
protected:
	float amount;
public:
	Payment () {
		amount = 1500;
	}
};

class Cash : public Payment {
private:
	float cashTendered;

public:
	Cash (float ct) {
		cashTendered = ct;
	}
	void displayInfo() {
		cout <<"Cash Tendered: " <<cashTendered <<endl;
	}
};

class Cheque : public Payment {
private:
	string name;
	string bankId;
	
public:
	Cheque (string n, string bid) {
		name = n;
		bankId = bid;
	}
	void authorized() {
		cout <<"Authorized!\n";
	}
	
	void displayInfo() {
		cout <<"Name: " <<name <<"\tBankId:" <<bankId <<endl;
	}
};

class Credit : public Payment {
private:
	string name;
	string type;
	string expDate;
	
public:
	Credit (string n, string typ, string ed) {
		name = n;
		type = typ;
		expDate = ed;
	}
	void authorized() {
		cout <<"Authorized!\n";
	}
	
	void displayInfo() {
		cout <<"Name: " <<name <<"\ttype: " <<type <<"Expiry Date: " <<expDate <<endl;
	}
};


int main () {
	Cash payCash = Cash(786.5);
	Cheque payCheque = Cheque("Usama Khan", "bnk123");
	Credit payCredit = Credit("Abu Usama", "Curent", "29/Dec/2025");
	payCash.displayInfo();
	payCheque.displayInfo();
	payCredit.displayInfo();
	
}

