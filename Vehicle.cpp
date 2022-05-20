#include "Payment.h"
#include "Auction.h"
#define SIZE 2

class Vehicle {

private:
    char vehicleId[10];
    char registrationNo[10];
    char vehicleType[10];
    double bidPrice;
    Payment *payment[SIZE];   //Class Relationship
public:
	Vehicle();
  	Vehicle(const char V_Id[], const char V_regNo[], const char V_Type[], double V_bdPrice);
  	void displayVehicleDetails();
	~Vehicle(){}
};

#include <cstring>

Vehicle::Vehicle()
{
	strcpy(vehicleId , "");
	strcpy(registrationNo , "");
	strcpy(vehicleType , "");
	bidPrice = 0;
}

Vehicle::Vehicle(const char V_Id[], const char V_regNo[], const char V_Type[], double V_bdPrice)
{
  strcpy (vehicleId , V_Id);
  strcpy (registrationNo , V_regNo);
  strcpy (vehicleType , V_Type);
  bidPrice = V_bdPrice;
}

void Vehicle::displayVehicleDetails()
{
  cout << "Vehicle ID : " << vehicleId << endl;
  cout << "Registration Number : " << registrationNo << endl;
  cout << "Vehicle Type : " << vehicleType << endl;
  cout << "Bid Price : " << bidPrice << endl;
}
