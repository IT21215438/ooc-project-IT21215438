#include<iostream>
#include #include "Account.h"
#include "Buyer.h"
#include "Admin.h"
using namespace std;

 int main()
  {
  	Buyer * b1 = new Buyer("B001","kEVIN","200005647",20,70789,"Active");
  	Admin * a1 = new Admin("A001","Sam","200098564",25,0773425477);
  	
  	b1 -> DisplayDetails();
  	a1 -> DisplayDetails();
  	
  	return 0;
  	
  }
