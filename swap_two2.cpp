# include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the 1st integer : ";
    cin>>a;
    cout<<"Enter the 2nd integer : ";
    cin>>b;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"After swapping \n";
    cout<<"The 1st integer is : "<<a<<"\n";
    cout<<"The 2nd integer is : "<<b;
    return 0;
}