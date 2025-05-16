#include <iostream>
using namespace std;

class Account{
	double balance;
	
	public:
		//constructor
		Account(double b) {
			this->balance = b;
		}
		
		//copy constructor
		Account(const Account& other) {
			this->balance=other.balance;
		}
		
		//delete constructor
		~Account (){
			cout <<"Destuctor called!\n";
		}
		
		bool validateAmount(double am) {
			if (am>0) return true;
			return false;
		}
		
		void getAmount() {
			cout <<"Your Account Balance is: " <<this->balance <<endl;
		}
		
		void depositAmount(double am) {
			if (validateAmount(am)) this->balance+=am;
			
			else cout<<"Invalid Amount\n";
		}
		
		void withdrawAmount(double am) {
			
			if (validateAmount(am)) {
				if (am>this->balance) cout<<"Insufficient Balance!\n";
				
				else this->balance-=am;
			}
			
			else cout<<"Invalid Amount\n";
		}
};

bool validateAmount(double b) {
	if (b>0) return true;
	return false;
}

int main() {
	double bal;
	do {
		cout <<"Add opening account balance: ";
		cin >>bal;
	} while (!validateAmount(bal));
	
	Account acc1 = Account(bal);
	Account acc2 = acc1;
	
	acc2.depositAmount(000);
	
	acc1.getAmount();
	acc2.getAmount();
	
	acc1.withdrawAmount(-1600);
	acc2.withdrawAmount(3000);
	
	acc1.getAmount();
	acc2.getAmount();
}

//#include <iostream>
//using namespace std;
//
//// Function to deposit money into the account
//double deposit(double balance, double amount) {
//    return balance + amount;
//}
//
//// Function to withdraw money from the account
//double withdraw(double balance, double amount) {
//    if (balance >= amount) {
//        return balance - amount;
//    } else {
//        cout << "Insufficient funds!" << endl;
//        return balance;
//    }
//}
//
//int main() {
//    double balance = 1000.0;  // Initial balance
//
//    // Perform a deposit
//    balance = deposit(balance, 500);  // Deposit $500
//    cout << "Balance after deposit: $" << balance << endl;
//
//    // Perform a withdrawal
//    balance = withdraw(balance, 200);  // Withdraw $200
//    cout << "Balance after withdrawal: $" << balance << endl;
//
//    // Try to withdraw an amount greater than the balance
//    balance = withdraw(balance, 2000);  // Try withdrawing $2000 (Insufficient funds)
//    cout << "Final Balance: $" << balance << endl;
//
//    return 0;
//}
