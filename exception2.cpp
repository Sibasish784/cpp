//exception Handling Divide by zero Example Program
using namespace std;
#include<iostream>

int main()
{
int var1,var2;
float var3;
cout<<"enter the dividend:";
cin>>var1;
cout<<"\n";
cout<<"enter the divisor:";
cin>>var2;
cout<<"\n";
//exception handling begins here
try //try block
{
if(var2!=0) //checking if divisor is zero
{
var3=var1/var2;
cout<<"outcome :"<<var3;
}
else
{
throw(var2); //throwing the exception found
}
}
//catch block
catch(int exc)
{
cout<<"division by zero is not possible. Please try again with different value of variables";
}
}

