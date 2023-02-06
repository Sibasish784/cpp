using namespace std;
# include<iostream>
int main()
{
    int arr[1000], i, num, n, cnt=0, pos;
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0; i<n; i++)
    {
        cout<<" ";
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched : ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            cnt=cnt+1;
            pos=i+1;
            break;
        }
    }    
    if(cnt==0)
    {
        cout<<"Element not found...!!";
    }
    else
    {
        cout<<"\n Element "<<num<<" found at position "<<pos;
    }
}