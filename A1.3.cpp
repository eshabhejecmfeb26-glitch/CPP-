#include <iostream>
using namespace std;

class TollBooth {
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth() {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void reset() {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void vehiclePayingToll(int vehicleType) {
        totalVehicles++;

        if (vehicleType == 1)
            totalRevenue += 180;
        else if (vehicleType == 2)
            totalRevenue += 300;
        else if (vehicleType == 3)
            totalRevenue += 350;
    }

    int getTotalVehicles() { return totalVehicles; }
    double getTotalRevenue() { return totalRevenue; }
};

int main() {
    TollBooth t;
    int choice;

    do {
        cout << "\n1. Add Standard Car (Rs.180)";
        cout << "\n2. Add Truck (Rs.300)";
        cout << "\n3. Add Bus (Rs.350)";
        cout << "\n4. Display Total Vehicles";
        cout << "\n5. Display Total Revenue";
        cout << "\n6. Reset";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
        case 1: t.vehiclePayingToll(1); break;
        case 2: t.vehiclePayingToll(2); break;
        case 3: t.vehiclePayingToll(3); break;
        case 4: cout << "Total Vehicles: " << t.getTotalVehicles(); break;
        case 5: cout << "Total Revenue: " << t.getTotalRevenue(); break;
        case 6: t.reset(); cout << "Reset Done!"; break;
        case 7: cout << "Exiting..."; break;
        default: cout << "Invalid Choice!";
        }
    } while(choice != 7);

    return 0;
}