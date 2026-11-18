#ifndef VEHICLE_H
#define VEHICLE_H

#include <bits/stdc++.h>
using namespace std;

class Vehicle {
private:
    string ownerName;
    string vehicleNumber;
    string vehicleType;
    string entryTime;
    string vehicleID;

public:
    Vehicle(string ownerName, string vehicleNumber, string vehicleType, string entryTime, string vehicleID);

    Vehicle(string ownerName, string vehicleNumber);

    Vehicle(const Vehicle& other);

    void displayVehicleDetails() const;

    string getVehicleNumber() const;
    string getVehicleType() const;
};


#endif