#include <iostream>
#include <string>
#include <vector>
#include <iomanip> // For formatting output
#include <fstream> // For file handling
#include <map> // For currency conversion rates

using namespace std;

// Structure to represent a bank account
struct Transaction {
    string type;  // "Deposit", "Withdrawal", "Transfer"
    double amount;
};

struct Loan {
    double loanAmount;
    double remainingBalance;
    int repaymentPeriod; // In months
    bool isApproved;
};

struct Account {
    int accountNumber;
    string accountHolderName;
    double balance;
    vector<Transaction> transactions; // To store transaction history
    Loan loan; // To store loan details
    bool isLocked; // To indicate if the account is locked
    bool isFrozen; // To indicate if the account is frozen
    string accountType; // "Savings" or "Checking"
    string password; // Password for sensitive operations
    bool isJointAccount; // Indicates if it's a joint account
    vector<string> jointAccountHolders; // List of joint account holders
    vector<string> activityLog; // Log of all account activities
    double overdraftLimit; // Overdraft limit for checking accounts
    double customInterestRate; // Custom interest rate for the account
};

bool amount;

// Function prototypes
void displayMenu();
void createAccount(vector<Account>& accounts);
void depositMoney(vector<Account>& accounts);
void withdrawMoney(vector<Account>& accounts);
void checkBalance(const vector<Account>& accounts);
void transferMoney(vector<Account>& accounts);
void printAccountStatement(const vector<Account>& accounts);
void searchAccountByName(const vector<Account>& accounts);
void deleteAccount(vector<Account>& accounts);
void listAllAccounts(const vector<Account>& accounts);
void applyInterest(vector<Account>& accounts);

// New functions
void sendTransactionNotification(const Account &account);
void logAccountActivity(Account& account, const string& activity);
void enableJointAccount(vector<Account>& accounts);
void enableOverdraftProtection(vector<Account>& accounts);
void setCustomInterestRate(vector<Account>& accounts);

void applyForLoan(vector<Account> vector1);

void repayLoan(vector<Account> vector1);

void checkLoanStatus(vector<Account> vector1);

void exportAccountData(vector<Account> vector1);

void importAccountData(vector<Account> vector1);

void lockOrUnlockAccount(vector<Account> vector1);

void enforceTransactionLimits(vector<Account> vector1);

void currencyConversion(vector<Account> vector1);

void exportTransactionHistory(vector<Account> vector1);

void freezeAccount(vector<Account> vector1);

void enforceMinimumBalance(vector<Account> vector1);

void setAccountType(vector<Account> vector1);

void sendTransactionNotification(vector<Account> vector1);

int main() {
    vector<Account> accounts; // Vector to store all accounts
    int choice;

    cout << "Welcome to the Enhanced Banking System!" << endl;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount(accounts);
                break;
            case 2:
                depositMoney(accounts);
                break;
            case 3:
                withdrawMoney(accounts);
                break;
            case 4:
                checkBalance(accounts);
                break;
            case 5:
                transferMoney(accounts);
                break;
            case 6:
                printAccountStatement(accounts);
                break;
            case 7:
                searchAccountByName(accounts);
                break;
            case 8:
                deleteAccount(accounts);
                break;
            case 9:
                listAllAccounts(accounts);
                break;
            case 10:
                applyInterest(accounts);
                break;
            case 11:
                applyForLoan(accounts);
                break;
            case 12:
                repayLoan(accounts);
                break;
            case 13:
                checkLoanStatus(accounts);
                break;
            case 14:
                exportAccountData(accounts);
                break;
            case 15:
                importAccountData(accounts);
                break;
            case 16:
                lockOrUnlockAccount(accounts);
                break;
            case 17:
                enforceTransactionLimits(accounts);
                break;
            case 18:
                currencyConversion(accounts);
                break;
            case 19:
                exportTransactionHistory(accounts);
                break;
            case 20:
                freezeAccount(accounts);
                break;
            case 21:
                enforceMinimumBalance(accounts);
                break;
            case 22:
                setAccountType(accounts);
                break;
            case 23:
                sendTransactionNotification(accounts);
                break;
            case 24:
                enableJointAccount(accounts);
                break;
            case 25:
                enableOverdraftProtection(accounts);
                break;
            case 26:
                setCustomInterestRate(accounts);
                break;
            case 27:
                cout << "Thank you for using the Enhanced Banking System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 27);

    return 0;
}

void sendTransactionNotification(vector<Account> vector1) {

}

void setAccountType(vector<Account> vector1) {

}

void enforceMinimumBalance(vector<Account> vector1) {

}

void freezeAccount(vector<Account> vector1) {

}

void exportTransactionHistory(vector<Account> vector1) {

}

void currencyConversion(vector<Account> vector1) {

}

void enforceTransactionLimits(vector<Account> vector1) {

}

void lockOrUnlockAccount(vector<Account> vector1) {

}

void importAccountData(vector<Account> vector1) {

}

void exportAccountData(vector<Account> vector1) {

}

void checkLoanStatus(vector<Account> vector1) {

}

void repayLoan(vector<Account> vector1) {

}

void applyForLoan(vector<Account> vector1) {

}

// Function to display the menu
void displayMenu() {
    cout << "\n===== Enhanced Banking System Menu =====" << endl;
    cout << "1. Create a new account" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Check balance" << endl;
    cout << "5. Transfer money between accounts" << endl;
    cout << "6. Print account statement" << endl;
    cout << "7. Search account by name" << endl;
    cout << "8. Delete an account" << endl;
    cout << "9. List all accounts" << endl;
    cout << "10. Apply interest to all accounts" << endl;
    cout << "11. Apply for a loan" << endl;
    cout << "12. Repay loan" << endl;
    cout << "13. Check loan status" << endl;
    cout << "14. Export account data to file" << endl;
    cout << "15. Import account data from file" << endl;
    cout << "16. Lock/Unlock an account" << endl;
    cout << "17. Enforce transaction limits" << endl;
    cout << "18. Currency conversion" << endl;
    cout << "19. Export transaction history to file" << endl;
    cout << "20. Freeze an account" << endl;
    cout << "21. Enforce minimum balance requirement" << endl;
    cout << "22. Set account type (Savings/Checking)" << endl;
    cout << "23. Send transaction notification" << endl;
    cout << "24. Enable joint account" << endl;
    cout << "25. Enable overdraft protection" << endl;
    cout << "26. Set custom interest rate" << endl;
    cout << "27. Exit" << endl;
}

// Existing functions remain unchanged...

// New Feature: Send transaction notification
void sendTransactionNotification(const Account &account) {
    cout << "\nNotification sent to account #" << account.accountNumber << ":" << endl;
    bool transactionType;
    cout << "- Transaction Type: " << transactionType << endl;

    cout << "- Amount: $" << fixed << setprecision(2) << amount << endl;
}

// New Feature: Log account activity
void logAccountActivity(Account& account, const string& activity) {
    account.activityLog.push_back(activity);
    cout << "Activity logged: " << activity << endl;
}

// New Feature: Enable joint account
void enableJointAccount(vector<Account>& accounts) {
    int accountNumber;
    cout << "\nEnter account number to enable joint account: ";
    cin >> accountNumber;

    for (Account& account : accounts) {
        if (account.accountNumber == accountNumber) {
            account.isJointAccount = true;
            cout << "Enter additional account holder names (comma-separated): ";
            string jointHolders;
            cin.ignore(); // Ignore leftover newline
            getline(cin, jointHolders);

            size_t pos = 0;
            string token;
            while ((pos = jointHolders.find(',')) != string::npos) {
                token = jointHolders.substr(0, pos);
                account.jointAccountHolders.push_back(token);
                jointHolders.erase(0, pos + 1);
            }
            account.jointAccountHolders.push_back(jointHolders); // Add the last holder

            cout << "Joint account enabled successfully." << endl;
            return;
        }
    }

    cout << "Account not found. Please check the account number." << endl;
}

// New Feature: Enable overdraft protection
void enableOverdraftProtection(vector<Account>& accounts) {
    int accountNumber;
    cout << "\nEnter account number to enable overdraft protection: ";
    cin >> accountNumber;

    for (Account& account : accounts) {
        if (account.accountNumber == accountNumber && account.accountType == "Checking") {
            cout << "Enter overdraft limit (in dollars): $";
            cin >> account.overdraftLimit;

            cout << "Overdraft protection enabled successfully." << endl;
            cout << "Overdraft Limit: $" << fixed << setprecision(2) << account.overdraftLimit << endl;
            return;
        }
    }

    cout << "Account not found or overdraft protection is only available for checking accounts." << endl;
}

// New Feature: Set custom interest rate
void setCustomInterestRate(vector<Account>& accounts) {
    int accountNumber;
    cout << "\nEnter account number to set custom interest rate: ";
    cin >> accountNumber;

    for (Account& account : accounts) {
        if (account.accountNumber == accountNumber) {
            cout << "Enter custom interest rate (e.g., 5 for 5%): ";
            cin >> account.customInterestRate;

            cout << "Custom interest rate set successfully." << endl;
            cout << "Custom Interest Rate: " << fixed << setprecision(2) << account.customInterestRate << "%" << endl;
            return;
        }
    }

    cout << "Account not found. Please check the account number." << endl;
}