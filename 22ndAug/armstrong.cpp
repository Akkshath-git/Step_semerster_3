#include <iostream>
using namespace std;
bool isArmstrong(int number) {
    int original = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum = sum + digit * digit * digit;
        number = number / 10;
    }

    return sum == original;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}