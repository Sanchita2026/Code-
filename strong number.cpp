
#include <iostream>
using namespace std;

int factorial(int num) {
  if (num == 0)
    return 1;

  return num * factorial(num - 1);
}

int Strong_number(int num) {

  int digit, sum = 0;
  int temp = num;

  while (temp != 0) {
    digit = temp % 10;

    sum = sum + factorial(digit);
    temp /= 10;
  }

  return sum == num;
}
int main() {
  int num;
  cout << "enter the number ";
  cin >> num;

  if (Strong_number(num))
    cout << num << " is Strong Number";
  else
    cout << num << " is Not Strong Number";
}