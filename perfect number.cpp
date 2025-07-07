#include<iostream>
using namespace std;
int main ()
{  
    int num, div, sum=0;
    cout << "Enter the number  : ";
    cin >> num;
    for (int i=1; i < num; i++)
    {
        div = num % i;
        if (div == 0)
            sum = sum + i;
    }
    if (sum == num)
        cout  << num <<" is a perfect number";
    else
        cout  << num <<" is not a perfect number";
    return 0;
}

