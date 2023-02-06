//wap to input and display the array elements.
using namespace std;
# include<iostream>
int main()
{
    int size, arr[size];
    cout<<"Enter the size of the array\n";
    cin>>size;
    cout<<"Enter the array elements : ";
    for(int i=0; i<=size-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n The array elements are : ";
    for(int i=0; i<=size-1; i++)
    {
        cout<<arr[i];
    }
    
}