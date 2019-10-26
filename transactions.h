class Transaction {
    
    public:
        Transaction();
        Transaction(double CR, double DR);
        Transaction(double amount);
        void setBal(double bal);




    private:
        double amountCR;
        double amountDR;
        double balance;


};




