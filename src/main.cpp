#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    string ownerName;
    string vehicleNumber;
    string vehicleType;
    string entryTime;
    string vehicleID;

    public:

    Vehicle(string ownerName,string vehicleNumber,string vehicleType,string entryTime,string vehicleID):ownerName(ownerName),vehicleNumber(vehicleNumber),vehicleType(vehicleType),entryTime(entryTime),vehicleID(vehicleID) {
    }

    Vehicle(string ownerName, string vehicleNumber)
        : ownerName(ownerName),vehicleNumber(vehicleNumber),vehicleType("Unknown"),entryTime("Unknown"),
        vehicleID("Unknown") {
    }

    Vehicle(const Vehicle& other): ownerName(other.ownerName), vehicleNumber(other.vehicleNumber), vehicleType(other.vehicleType),entryTime(other.entryTime), vehicleID(other.vehicleID) {
    }

    void displayVehicleDetails(){
        cout<<"Owner Name: "<<ownerName<<endl;
        cout<<"Vehicle Number: "<<vehicleNumber<<endl;
        cout<<"Vehicle Type: "<<vehicleType<<endl;
        cout<<"Entry Time: "<<entryTime<<endl;
        cout<<"Vehicle ID: "<<vehicleID<<endl;
    }
};


int main() {

    Vehicle v1("Jayanth", "KA06AB1234", "Car", "10:00 AM", "V101");

    Vehicle v2("Rahul", "KA06CD5678", "Bike", "10:30 AM", "V102");

    Vehicle v3("Sita", "KA06EF9012");

    v1.displayVehicleDetails();
    v2.displayVehicleDetails();
    v3.displayVehicleDetails();

    return 0;
}