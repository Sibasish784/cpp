using namespace std;
#include<iostream>
class base        //single base class
{
    protected:
    int x;
    public:
    void getdata()
    {
        cout<<"Enter the value of x : ";
        cin>>x;
    }
};
class derive : public base      //single derive class
{
    private:
    int y;
    public:
    void reddata()
    {
        cout<<"Enter the value of y : ";
        cin>>y;
    }
    void product()
    {
        cout<<"Product : "<<x*y;
    }
};
int main()
{
    derive a;                 //Object of derived class
    a.getdata();
    a.reddata();                     
    a.product();
    return 0;
}