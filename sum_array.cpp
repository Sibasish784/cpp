using namespace std;
#include<iostream>
int main()
{
    int n, arr[1000];
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the array elements ";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    //cout>>"The sum array elements are";
    for(int i=0;i<=n-1;i++)
    {
        sum=sum+arr[i];

    }
    cout<<"The sum="<<sum;
}