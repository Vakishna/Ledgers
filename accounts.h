#include <iostream>
#include <vector>
#include <string>
#include "accounttype.h"
class Account {

    private:
        std::string Name;
        Type AccountType;
        double balanceCR;
        double balanceDR;
        



    
    protected:
        void incCR(double amount);
        void incDR(double amount);
        void decCR(double amount);
        void decDR(double amount);
        double getCR();
        double getDR();
        void PrintDesc();




    public:
        Account();
        std::string SetNickname();
        std::string AccountRef;
        Type SetAccountType();
        void SetInitialBal();
        





        
};
