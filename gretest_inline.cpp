// Inline Funtion to find out gretest number
using namespace std;
#include<iostream>
inline gretest(int a, int b, int c)  //Inline function defination
{
    int grt=0;
    if(a>b)
    grt=a;
    else 
    grt=b;
    if(c>grt)
    grt=c;
    return grt; 
}
int main()
{
    cout<<"The gretest among 203, 302 and 105 is : "<<gretest(203, 302, 105)<<"\n";  //Inline function call
    return 0;
}