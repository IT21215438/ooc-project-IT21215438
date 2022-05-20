class Payment
{
  private:
    char paymentId[10];
    double amount;
    char paymentDate[10];
    char paymentStatus[10];

  public:
    Payment(char V_paymentId[], double V_amount, char V_paymentDate[], char V_paymentStatus[]);
    void displayPaymentDetails();
};

#include<cstring>

Payment::Payment(char V_paymentId[], double V_amount, char V_paymentDate[], char V_paymentStatus[])
{
  strcpy(paymentId,V_paymentId);
  amount = V_amount;
  strcpy(paymentDate,V_paymentDate);
  strcpy(paymentStatus,V_paymentStatus);
}

void Payment::displayPaymentDetails()
{
  cout<<"Payment ID: "<<paymentId<<endl;
  cout<<"Amount: "<<amount<<endl;
  cout<<"Payment Date: "<<paymentDate<<endl;
  cout<<"Payment Status: "<<paymentStatus<<endl;
}
