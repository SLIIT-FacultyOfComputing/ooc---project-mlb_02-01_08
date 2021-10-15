#include "Payment.h"
#include<iostream>
using namespace std;

void Payment::setPaymentDetails(int pID, int pDate, double pAmount)
{
  paymentID = pID;
  date = pDate;
  amount = pAmount;
}

void Payment::printReceipt()
{
  cout << "Payment ID = " << paymentID << endl;
	cout << "Date = " << date << endl;
	cout << "Amount = " << amount<< endl;
	cout << endl;
}