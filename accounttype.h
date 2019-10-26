enum Type {
    Equity,
    Asset,
    Liability,
    Expense,
    Revenue
};

enum Base {
    Credit,
    Debit
};


class AccountType {
    public:
        AccountType(Type AccountType);
        void AssignBase();
    private:
        Type Account;
};



