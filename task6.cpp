#include <iostream>
using namespace std;

int main() {
    int quantity;
    double price = 99.0, discount = 0.0, total;

    cout << "Enter the number of units sold: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid input. Quantity must be greater than 0." << endl;
        return 0;
    }

    if (quantity >= 100)
        discount = 0.5;
    else if (quantity >= 50)
        discount = 0.4;
    else if (quantity >= 20)
        discount = 0.3;
    else if (quantity >= 10)
        discount = 0.2;

    total = quantity * price * (1 - discount);

    cout << "Total cost: $" << total << endl;

    return 0;
}
