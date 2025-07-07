#include <iostream>
using namespace std;

bool isSpyNumber(int num) {
    int sum = 0;
    int product = 1;


    while ( num > 0) {
        int digit = num % 10; 
        sum += digit;        
        product *= digit;    
        num /= 10;           
    }

    
    if (sum == product) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isSpyNumber(number)) {
        cout << number << " is a spy number." ;
    } else {
        cout << number << " is not a spy number." ;
    }

    return 0;
}