#include <iostream>
using namespace std;

class Bank{
	string name;
	int code;
	string address;
	
	public:
		// setter functions
		void setName(string n) {
			name=n;
		}
		void setCode(int c) {
			code=c;
		}
		void setAddress(string a) {
			address=a;
		}
		// getter functions
		string getName() {
			return name;
		}
		int getCode() {
			return code;
		}
		string getAddress() {
			return address;
		}
		// updater functions
		void updateName(string n) {
			setName(n);
		}
		void updateCode(int c) {
			setCode(c);
		}
		void updateAddress(string a) {
			setAddress(a);
		}
};

class Branch {
	int branchId;
	string name;
	string address;
	
	public:
		// setter functions
		void setBranchId(int b) {
			branchId=b;
		}
		void setName(string n) {
			name=n;
		}
		void setAddress(string a) {
			address=a;
		}
		// getter functions
		int getBranchId() {
			return branchId;
		}
		string getName() {
			return name;
		}
		string getAddress() {
			return address;
		}
		// updater functions
		void updateBranchId(int b) {
			setBranchId(b);
		}
		void updateName(string n) {
			setName(n);
		}
		void updateAddress(string a) {
			setAddress(a);
		}
};

class Loan {
	int loanId;
	string loanType;
	int amount;
	
	public:
		// setter functions
		void setLoanId(int l) {
			loanId=l;
		}
		void setLoanType(string t) {
			loanType=t;
		}
		void setAmount(int a) {
			amount=a;
		}
		// getter functions
		int getLoanId() {
			return loanId;
		}
		string getLoanType() {
			return loanType;
		}
		int getAmount() {
			return amount;
		}
		// updater functions
		void updateLoanId(int l) {
			setBranchId(l);
		}
		void updateLoanType(string t) {
			setLoanType(t);
		}
		void updateAmount(string a) {
			setAmount(a);
		}
};

class Account {
	long long accountNo;
	string accountType;
	long balance;
	
	public:
		// setter functions
		void setAccountNo(long long n) {
			accountNo=n;
		}
		void setAcountType(string t) {
			accountType=t;
		}
		void setBalance(long b) {
			balance=b;
		}
		// getter functions
		long long getAccountNo() {
			return accountNo;
		}
		string getAcountType() {
			return accountType;
		}
		long getBalance() {
			return balance;
		}
		// updater functions
		void updateAccountNo(int n) {
			setAccountNo(n);
		}
		void updateAcountType(string t) {
			setAcountType(t);
		}
		void updateBalance(string b) {
			setBalance(b);
		}
};

class customer {
	int cusId;
	string name;
	string phone;
	string address;
	
	public:
		// setter functions
		void setCusId(int c) {
			cusId=c;
		}
		void setName(string n) {
			name=n;
		}
		void setPhone(string p) {
			phone=p;
		}
		void setAddress(string a) {
			address=a;
		}
		// getter functions
		int getCusId() {
			return cusId;
		}
		string getName() {
			return name;
		}
		string getPhone() {
			return phone;
		}
		string getAddress() {
			return address;
		}
		// updater functions
		void updateCusId(int c) {
			setCusId(c);
		}
		void updateName(string n) {
			setName(n);
		}
		void updatePhone(string p) {
			setPhone(p);
		}
		void updateAddress(string a) {
			setAddress(a);
		}
};


int main {

}
