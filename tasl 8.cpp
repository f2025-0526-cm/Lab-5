#include <iostream>
using namespace std;

int main() {
    int age, activities;
    double fee, reduction, total;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the number of activities attended: ";
    cin >> activities;

    if (age <= 6) {
        fee = 5;
        reduction = 0.75;
    } else if (age <= 12) {
        fee = 10;
        reduction = 1.25;
    } else if (age <= 18) {
        fee = 15;
        reduction = 2;
    } else {
        fee = 25;
        reduction = 2;
    }

    total = fee - (activities * reduction);
    if (total < 1)
        total = 1;

    cout << "Membership fee: $" << total << endl;

    return 0;
}
