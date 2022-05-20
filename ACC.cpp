#include<iostream>
#include<cstring>
using namespace std;

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


 

 Account :: Account(const char id[],const char name[],const char nic,int age,int mobiN0)
 {
 	strcpy(Id,id);
 	strcpy(Name,name);
 	strcpy(NIC,nic);
 	Age = age;
 	MobileNo = mobiN0;
 	
 	
 }
