#include<iostream>
#include<cstring>
using namespace std;

class Supplier : public Account

{

	protected:
		
		char SupplierId[10];
		char SupplierName[20];
		char NIC[10];
		int Age;
		int MobileNo;
		
	
	private:
		
		char UserStatus[10];
			
	public:
	
	    Supplier(const char Sid[],const char Sname[],const char nic[],int age ,int mobiNo,const char Ustatus[]);
		void DisplayDetails();		
	
};

 Supplier :: Supplier(const char Sid[],const char Sname[],const char nic[],int age, int mobiNo,const char Ustatus[])
 {
 	strcpy(SupplierId,Sid);
 	strcpy(SupplierName,Sname);
 	strcpy(NIC,nic);
 	Age = age;
 	MobileNo = mobiNo;
    strcpy(UserStatus,Ustatus);
 }
 
  void Supplier :: DisplayDetails()
  {
  	cout<< "Supplier Id : "<< SupplierId <<endl
  	    <<"Supplier name : "<< SupplierName <<endl
  	    << "Nic : "<< NIC <<endl
  	    << "Supplier age : "<< Age <<endl
  	    <<"Mobile number : " << MobileNo <<endl
  	    <<"User status : " <<UserStatus <<endl;
        
  }
  
  int main()
  {
  	Supplier * s1 = new Supplier("S001","Peter","2999845473",30,0701254671,"Active");
  	
  	s1 -> DisplayDetails();

  	return 0;
 
  	
