#include <iostream>


using namespace std;

int main() {
    double weight;
    double distance;
    double costPerKg;
    double costPerKm;
    double shippingCost;

    cout << "Enter the weight of the package (in kg): ";
    cin >> weight;

    cout << "Enter the shipping distance (in km): ";
    cin >> distance;

    if (weight <= 0 || distance <= 0) {
        cout << "Weight and distance must be positive values." << endl;
        return 1;
    }

    if (weight <= 5) {
        costPerKg = 1.50;
    } else if (weight <= 20) {
        costPerKg = 2.00;
    } else {
        costPerKg = 3.50;
    }

    if (distance <= 100) {
        costPerKm = 0.50;
    } else if (distance <= 500) {
        costPerKm = 0.40;
    } else {
        costPerKm = 0.30;
    }

    shippingCost = (weight * costPerKg) + (distance * costPerKm);

    cout << fixed << setprecision(2);
    cout << "\n--- Shipping Cost Summary ---" << endl;
    cout << "Weight Cost ($" << costPerKg << "/kg): $" << (weight * costPerKg) << endl;
    cout << "Distance Cost ($" << costPerKm << "/km): $" << (distance * costPerKm) << endl;
    cout << "Total Shipping Cost: $" << shippingCost << endl;

    return 0;
}
