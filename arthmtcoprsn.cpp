#include<iostream>
using namespace std;
int main()
{
    float num1, num2, num3;

    cout<<"\n Enter first Numbers : ";
    cin>>num1;
    cout<<"\n Enter second Numbers : ";
    cin>>num2;

    num3=num1+num2;
    cout<<"\n Addition is : "<<num3;

    num3=num1-num2;
    cout<<"\n Subtraction is : "<<num3;

    num3=num1*num2;
    cout<<"\n Multiplication is : "<<num3;

    num3=num1/num2;
    cout<<"\n Division is : "<<num3;


    return 0;
}