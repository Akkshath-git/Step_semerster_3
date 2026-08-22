#include <iostream>
using namespace std;
void primeNumber(int number) {
    cout << "Enter number: ";
    cin >> number;
    if (number <= 1) {
        cout << "Not a prime number" << endl;
        return;
    }
    bool isPrime = true;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
}

int main() {
    int number;
    primeNumber(number);
    return 0;
}