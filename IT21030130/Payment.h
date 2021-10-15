class Payment
{
  private:
    int paymentID;
    int date;
    double amount;

  public:
    void setPaymentDetails(int pID, int pDate, double pAmount);
    void printReceipt();
};