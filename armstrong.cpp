using namespace std;
# include<iostream>
int main()
{
    int x, y, z=0, p;
    cout<<"Enter a Number : ";
    cin>>x;
    p = x;
    while(x>0)
    {
        y = x%10;
        z = z+(y*y*y);
        x = x/10;
    }
    if(z==p)
    {
        cout<<"The Number "<<p<<" is a Armstrong Number.";
    }
    else
    {
        cout<<"The Number "<<p<<" is not a Armstrong Number.";
    }
    
}