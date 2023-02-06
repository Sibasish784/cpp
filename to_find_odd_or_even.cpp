#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;

    cout << "Enter an integer : ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is a even number";
    else
        cout << n << " is a odd number";

    return 0;
}