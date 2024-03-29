#include <iostream>
#include<math.h>
using namespace std;
class BankAccount
 {
private:
    static int totalTransactions; // Static variable to count total transactions
    string accountnumber;
    double balance;

public:
    BankAccount(string actnum, double bal) 
    {
        accountnumber=actnum;
        balance=bal;
    }
    // Static method to get the total number of transactions
    static int getTotalTransactions()
     {
        return totalTransactions;
      }

    
    static void updateTotalTransactions()
     {
        totalTransactions++;
    }


    void deposit(double amount)
     {
        balance =balance+ amount;
        updateTotalTransactions(); 
    }


    void withdraw(double amount) 
    {
        if (balance >= amount)
         {
            balance =balance- amount;
            updateTotalTransactions(); 
        } 
        else
         {
            cout << "Insufficient balance for withdrawal" << endl;
        }
    }

    void display() 
     {
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: " << balance << endl;
    }
};


int BankAccount::totalTransactions = 0;

int main()
 {
    BankAccount obj1("123456789", 10500.0);
    BankAccount obj2("965553321", 2500.0);
    obj1.deposit(2000.0);
    obj1.withdraw(500.0);
    obj1.deposit(560);
    obj2.deposit(3700.0);
    obj2.withdraw(900.0);
    
    cout << "Total Transactions: " << BankAccount::getTotalTransactions() << endl;

    return 0;
}
