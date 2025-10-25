#include <iostream>
using namespace std;

int main() {
    int num1 = 247, num2 = 129, answer, correctAnswer;

    correctAnswer = num1 + num2;

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "= ";
    cin >> answer;

    if (answer == correctAnswer)
        cout << "Congratulations! Your answer is correct." << endl;
    else
        cout << "Sorry, the correct answer is " << correctAnswer << "." << endl;

    return 0;
}
