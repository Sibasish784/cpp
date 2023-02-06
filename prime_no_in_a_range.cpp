#include <iostream>
using namespace std;
int main()
{
int a, b, i, count;
cout << "\n Enter the start value : ";
cin >> a;
cout << "\n Enter the end value : " ;
cin >> b;
cout << "\n Prime Numbers between " << a << " and " << b <<" are ";
while (a < b)
{
count = 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
count = 1;
break;
}
}
if (count == 0)
cout << a << " ";
a++;
}
cout << endl;
return 0;
}

