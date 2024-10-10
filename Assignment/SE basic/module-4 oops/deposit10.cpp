/* 10. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
#include<string>
using namespace std;

class BankAc {
    private:
        int acNo;       // Account number
        double bal;     // Account balance
    
    public:
        // Constructor to initialize account number and balance
        BankAc(int ac, double balance = 0.0) { 
            acNo = ac;
            bal = balance;
        }

        // Function to deposit money
        void deposit() { 
            double amount;
            cout << "Enter your deposit amount: ";
            cin >> amount;
            bal += amount;
            cout << "Amount deposited successfully! Your Current Balance is: "
                 << bal << endl;
        } 

        // Function to withdraw money
        void withdraw() { 
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount; 
            if (amount > bal) {
                cout << "Insufficient Balance! Your balance is: " << bal << endl;
            } else {
                bal -= amount;
                cout << "Amount withdrawn successfully! New Balance is: " << bal << endl;
            }
        } 

        // Function to display account details
        void displayBalance() {
            cout << "Account Number: " << acNo << ", Current Balance: " << bal << endl;
        }
};

int main() {
    int acNo;
    cout << "Enter your account number: ";
    cin >> acNo;

    // Creating an account with account number and initial balance
    BankAc bank(acNo, 100000);  // Initial balance is 100000

    // Display initial account details
    bank.displayBalance();

    char option;
    bool continueTransactions = true;
    
    // Repeat until user decides to stop
    while (continueTransactions) {
        cout << "\nChoose an option: " << endl;
        cout << "D: Deposit" << endl;
        cout << "W: Withdraw" << endl;
        cout << "B: Display Balance" << endl;
        cout << "E: Exit" << endl;
        cin >> option;

        switch(option) {
            case 'D':
            case 'd':
                bank.deposit();
                break;
            case 'W':
            case 'w':
                bank.withdraw();
                break;
            case 'B':
            case 'b':
                bank.displayBalance();
                break;
            case 'E':
            case 'e':
                continueTransactions = false;
                break;
            default:
                cout << "Invalid option! Please try again." << endl;
        }
    }

    return 0;
}

