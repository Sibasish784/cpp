using namespace std;
#include<iostream>
int count=0;
class alpha
{
public:
alpha( )
{
count ++;
cout<<"\n no of object created :"<<count<<endl;
}
~alpha( )
{
cout<<"\n no of object destroyed :" <<count<<endl;
count--;
}
};
int main( )
{
cout<<" \n \n enter main \n:";
alpha A1,A2,A3,A4;
{
cout<<" \n enter block 1 :\n";
alpha A5;
alpha A6;
}
}
