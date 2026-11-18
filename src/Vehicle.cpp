#include "../include/Vehicle.h"

Vehicle::Vehicle(string ownerName, string vehicleNumber, string vehicleType, string entryTime, string vehicleID)
    :ownerName(ownerName),
    vehicleNumber(vehicleNumber),
    vehicleType(vehicleType),
    entryTime(entryTime),
    vehicleID(vehicleID) {
}

Vehicle::Vehicle(string ownerName, string vehicleNumber)
    :ownerName(ownerName),
    vehicleNumber(vehicleNumber),
    vehicleType("Unknown"),
    entryTime("Unknown"),
    vehicleID("Unknown") {
}

Vehicle::Vehicle(const Vehicle& other)
    :ownerName(other.ownerName), vehicleNumber(other.vehicleNumber), vehicleType(other.vehicleType),entryTime(other.entryTime), vehicleID(other.vehicleID) {
}

void Vehicle::displayVehicleDetails() const {
    cout<<"Owner Name: "<<ownerName<<endl;
    cout<<"Vehicle Number: "<<vehicleNumber<<endl;
    cout<<"Vehicle Type: "<<vehicleType<<endl;
    cout<<"Entry Time: "<<entryTime<<endl;
    cout<<"Vehicle ID: "<<vehicleID<<endl;
}

string Vehicle::getVehicleNumber() const{
    return vehicleNumber;
}

string Vehicle::getVehicleType() const{
    return vehicleType;
}