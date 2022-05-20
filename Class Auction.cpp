#include<iostream>
#include<cstring>
using namespace std;

class Auction
{
	private:
		
	  char AuctionId[10];
	  char StartDate[10];
	  char EndDate[10];
	  
	  public:
	  	
	  Auction(const char auctionId[],const char startDate[],const char endDate[]);	
	  void DisplayDetails();	
};

 Auction :: Auction(const char auctionId[],const char startDate[],const char endDate[])
 {
 	strcpy(AuctionId,auctionId);
 	strcpy(StartDate,startDate);
 	strcpy(EndDate,endDate);
 	
 }
 
 void Auction :: DisplayDetails()
 {
 	cout<< "Auction Id : "<<AuctionId<<endl
 	     <<"Start date : "<<StartDate<<endl
 	     <<"End date : "<<EndDate<<endl;
 	     	
 }
 
 int main()
 {
 	Auction * A1 = new Auction("","","");
 	
 	A1 -> DisplayDetails();
 	
 	return 0;
 }
