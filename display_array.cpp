#include<iostream>
using namespace std;
int main()
{
    int a[1000], i, n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout<<"Enter "<<n<<" elements in the array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\n Elements in array are : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    
}