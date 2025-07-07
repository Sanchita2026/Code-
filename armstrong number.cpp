#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digitCount = 0;

    
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }

    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int number;

    cout << "Enter the number  ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." ;
    } else {
        cout << number << " is not an Armstrong number." ;
    }

    return 0;
}