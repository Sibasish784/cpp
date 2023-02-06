//unary -- overloading
using namespace std;
#include<iostream>
class abc
{
int m,n;
public:
abc()
{
m=8;
n=9;
}
void show()
{
cout<<m<<n;
}
operator -- ()
{
--m;
--n;
}
};
int main()
{
abc x;
x.show();// original value
--x;//x.operator --()
x.show(); // decremented value
}
