class Account
{
	protected:
		
	    char Id[10];
		char Name[20];
		char NIC[10];
		int Age;
		int MobileNo;
		
		
	public :
	    Account();
		Account(const char id[],const char name[],const char nic,int age,int mobiN0);
		void StoreDetails(); 		
};
  
 
  
class Buyer : public Account
{
	protected:
		
		char BuyerId[10];
		char BuyerName[20];
		char NIC[10];
		int Age;
		int MobileNo;
		
	
	private:
		
		char UserStatus[10];
			
	public:
	
	    Buyer(const char Bid[],const char Bname[],const char nic[],int age ,int mobiNo,const char Ustatus[]);
		void DisplayDetails();		
	
};

 class Admin : public Account
{
	protected:
		
		char AdminId[10];
		char AdminName[20];
		char NIC[10];
		int Age;
		int MobileNo;
		
	public:
	
	    Admin(const char Aid[],const char Aname[],const char nic[],int age ,int mobiNo);
		void DisplayDetails();		
	
};


