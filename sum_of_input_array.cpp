using namespace std;
#include<iostream>
int main()
{
    int size, arr[size];
    cout<<"Enter the size of the array\n";
    cin>>size;
    cout<<"Enter the array elements ";
    for(int i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    //cout>>"The sum array elements are";
    for(int i=0;i<=size-1;i++)
    {
        sum=sum+arr[i];

    }
    cout<<"The sum="<<sum;
}