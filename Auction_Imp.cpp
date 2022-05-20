#include<iostream>
#include #include "Account.h"
#include "Buyer.h"
#include "Admin.h"
using namespace std;

 Buyer :: Buyer(const char Bid[],const char Bname[],const char nic[],int age, int mobiNo,const char Ustatus[])
 {
 	strcpy(BuyerId,Bid);
 	strcpy(BuyerName,Bname);
 	strcpy(NIC,nic);
 	Age = age;
 	MobileNo = mobiNo;
    strcpy(UserStatus,Ustatus);
 }
 
  void Buyer :: DisplayDetails()
  {
  	cout<< "Buyer Id : "<< BuyerId <<endl
  	    <<"Buyer name : "<< BuyerName <<endl
  	    << "Nic : "<< NIC <<endl
  	    << "Buyer age : "<< Age <<endl
  	    <<"Mobile number : " << MobileNo <<endl
  	    <<"User status : " <<UserStatus <<endl<<endl;
        
  }
  
  
 Admin :: Admin(const char Aid[],const char Aname[],const char nic[],int age, int mobiNo)
 {
 	strcpy(AdminId,Aid);
 	strcpy(AdminName,Aname);
 	strcpy(NIC,nic);
 	Age = age;
 	MobileNo = mobiNo;
 	
 }
 
  void Admin :: DisplayDetails()
  {
  	cout<< "Admin Id : "<< AdminId <<endl
  	    <<"Admin name : "<< AdminName <<endl
  	    << "Nic : "<< NIC <<endl
  	    << "Admin age : "<< Age <<endl
  	    <<"Mobile number : " << MobileNo <<endl<<endl;
 
  }
