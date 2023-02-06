#include<iostream>
using namespace std;
int main()
{
    int rem, num, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num!= 0)
    {
        rem = num % 10;
        sum = sum+ rem;
        num = num / 10;
    }
    cout << "The sum of the digits is " << sum;
}