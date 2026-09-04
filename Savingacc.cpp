#include <iostream>
using namespace std;

class SavingAccount
{
protected:
    int accNo;
    string name;
    float balance;
    int transactionCount;
    float interestRate;

public:

    // Constructor
    SavingAccount(int a, string n, float b)
    {
        accNo = a;
        name = n;
        balance = b;
        transactionCount = 0;
        interestRate = 5;
    }

    void deposit()
    {
        float amount;

        cout << "Enter deposit amount: ";
        cin >> amount;

        balance = balance + amount;
        transactionCount++;

        cout << "Deposit successful." << endl;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter withdraw amount: ";
        cin >> amount;

        balance = balance - amount;
        transactionCount++;

        cout << "Withdraw successful." << endl;
    }

    void transactionFee()
    {
        if (transactionCount > 10)
        {
            balance = balance - 10;
            cout << "Transaction Fee = 10" << endl;
        }
    }

    void calculateInterest()
    {
        float interest;

        interest = balance * interestRate / 100;

        cout << "Interest Rate = " << interestRate << "%" << endl;
        cout << "Interest = " << interest << endl;
    }

    void display()
    {
        cout << "\n--- Saving Account ---" << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transactions: " << transactionCount << endl;
    }
};


// CheckingAccount is child of SavingAccount
class CheckingAccount : public SavingAccount
{
public:

    // Constructor
    CheckingAccount(int a, string n, float b)
        : SavingAccount(a, n, b)
    {
    }

    void checkAccount()
    {
        cout << "\n--- Checking Account ---" << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};


int main()
{
    int accNo;
    string name;
    float balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;

    CheckingAccount c(accNo, name, balance);

    // Transactions
    c.deposit();
    c.transactionFee();

    c.withdraw();
    c.transactionFee();

    // Interest
    c.calculateInterest();

    // Checking Account
    c.checkAccount();

    return 0;
}