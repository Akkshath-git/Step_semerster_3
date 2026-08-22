#include <iostream>
using namespace std;
int findGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    return num1;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD = " << findGCD(num1, num2) << endl;

    return 0;
}