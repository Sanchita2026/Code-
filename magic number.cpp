#include <iostream>
using namespace std;
bool isMagicNumber(int n) {
   int sum = 0;
   while (n > 0 || sum > 9) {
      if (n == 0) {
         n = sum;
         sum = 0;
      }
      sum += n % 10;
      n /= 10;
   }
   return (sum == 1);
}
int main() {
   int number;
   cout <<"enter the number :";
   cin >>number;
   
   if(isMagicNumber(number)){
      cout << number << " is magic number";
   } else {
      cout << number << " is not magic number";
   }
}
