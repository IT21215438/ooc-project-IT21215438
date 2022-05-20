#include<iostream>
#include<cstring>
using namespace std;

class Bid
{
	
 private:
	
  char bidID [10];
  double bidAmount;
  char createdDate [20];

 public:
 	Bid();
 	Bid(char bID[],double Bamount, char createdDt[]);
 	void displayBiddingDetails();
};

 Bid ::Bid()
 {
 	strcpy(bidID , "B001");
 	bidAmount = 130000;
 	strcpy(createdDate,"2020/2/2");
 }

 Bid ::Bid(char bID[],double Bamount, char createdDt[])
{
  strcpy(bidID,bID);
  bidAmount = Bamount;
  strcpy(createdDate,createdDt);
  
}
 void Bid :: displayBiddingDetails()
 {
 	cout << "Bid ID : " << bidID <<endl;
 	cout << "Bid Amount : " << bidAmount <<endl;
 	cout << "Created Date : " << createdDate <<endl;
 }
 
 int main()
 {
 	Bid bid1;
 	Bid * bid2;
 	bid2 = new Bid ("B002" , 120000 , "2020/4/2");
 	
 	bid1.displayBiddingDetails();
 	bid2 -> displayBiddingDetails();
 	cout<< endl;
 	
 	return 0;
 }
