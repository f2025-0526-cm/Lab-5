#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int middle;

    if ((a > b && a < c) || (a < b && a > c))
        middle = a;
    else if ((b > a && b < c) || (b < a && b > c))
        middle = b;
    else
        middle = c;

    cout << "The middle number is: " << middle << endl;

    return 0;
}
