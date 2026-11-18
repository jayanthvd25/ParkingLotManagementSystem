#include "../include/Vehicle.h"

int main() {

    Vehicle v1("Jayanth", "KA06AB1234", "Car", "10:00 AM", "V101");

    Vehicle v2("Rahul", "KA06CD5678");

    Vehicle v3 = v1;

    cout << "\n--- Vehicle 1 ---\n";
    v1.displayVehicleDetails();

    cout << "\n--- Vehicle 2 ---\n";
    v2.displayVehicleDetails();

    cout << "\n--- Vehicle 3 (Copied) ---\n";
    v3.displayVehicleDetails();

    cout << "\nVehicle Number: " << v1.getVehicleNumber();
    cout << "\nVehicle Type: " << v1.getVehicleType() << endl;

    return 0;
}