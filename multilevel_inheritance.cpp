using namespace std;
#include<iostream>
class base  //single base class
{
    protected:
    int x;
    void getdata()
    {
        cout<<"Enter value of X : ";
        cin>>x;
    }
};
class derive1 : public base  //derived class from base class
{
    protected:
    int y;
    void readdata()
    {
        cout<<"\nEnter value of y : ";
        cin>>y;
    }
};
class derive2 : public derive1  //derive from class derive1
{
    private:
    int z;
    public:
    void indata()
    {
        getdata();
        readdata();
        cout<<"\nEnter value of z : ";
        cin>>z;
    }
    void product()
    {
        cout<<"\nProduct : "<<x * y * z ;
    }
};
int main()
{
    derive2 a;
    a.indata();
    a.product();
    return 0;
}