 #include <iostream>
using namespace std;

int main() {
    int seconds,mins,hours,days;;

    cout << "Enter the number of seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        double days = seconds / 86400.0;
        cout << "That is " << days << " days." << endl;
    }
    else if (seconds >= 3600) {
        double hours = seconds / 3600.0;
        cout << "That is " << hours << " hours." << endl;
    }
    else if (seconds >= 60) {
        double minutes = seconds / 60.0;
        cout << "That is " << minutes << " minutes." << endl;
    }
    else {
        cout << "That is " << seconds << " seconds." << endl;
    }

    return 0;
}
