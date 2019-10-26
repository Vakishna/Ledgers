// Author: Vakishna Thayalan
// Licence: Mozilla Public Licence
// Date: 27 October 2019

#include "accounts.h"

Account::Account() {
    SetNickname();
    this->AccountType = SetAccountType();
    SetInitialBal();    
}

void Account::PrintDesc() {    
    std::cout << "Account " << this->Name << ": " << std::endl; 
    std::cout << "Type: " << this->AccountType;
    std::cout << "Account Balance: " << std::endl;
    std::cout << this->balanceCR << " CR" << std::endl;
    std::cout << this->balanceDR << " DR" << std::endl;
    std::cout << "Transactions: ";
    
}

std::string Account::SetNickname() {
    std::string name;
    std::cin >> name;
    return name;
}


Type Account::SetAccountType() {
    std::cout << "New Account Initialization: " << std::endl;
    std::cout << "Please select the account type: " << std::endl;
    std::cout << "1. Equity" << std::endl;
    std::cout << "2. Asset" << std::endl;
    std::cout << "3. Liability" << std::endl;
    std::cout << "4. Expense" << std::endl;
    std::cout << "5. Revenue" << std::endl;
    std::cout << "Option >> ";

    int temp;
    std::cin >> temp;

    switch (temp) {
        case 1:
            return Equity;
            break;
        case 2:
            return Asset;
            break;
        case 3:
            return Liability;
            break;
        case 4:
            return Expense;
            break;
        case 5:
            return Revenue;
            break;
        default:
            break;
    }

   return Asset; 

}

void Account::SetInitialBal() {
    std::cout << "Please enter the initial balance (CR): " << std::endl;
    std::cout << ">> ";
    std::cin >> this->balanceCR;
    std::cout << "Please enter the initial balance (DR): ";
    std::cout << ">> ";
    std::cin >> this->balanceDR;
}



// Balance Manipulation
void Account::incCR(double amount) {
    this->balanceCR += amount;
}


void Account::decCR(double amount) {
    this->balanceCR -= amount;
}

void Account::incDR(double amount) {
    this->balanceDR += amount;
}

void Account::decDR(double amount) {
    this->balanceDR -= amount;
}
