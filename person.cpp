#include <iostream>
using namespace std;

class person
{
    public:
    char name[100];
    int code;
    void input()
    {
        cout<<"\nEnter the name of the person : ";
        cin>>name;
        cout<<endl<<"Enter the code of the person : ";
        cin>>code;
    }
    void display()
    {
        cout<<endl<<"Name of the person : "<<name;
        cout<<endl<<"Code of the person : "<<code;
    }
};
 
class account:virtual public person
{
    public:
    float pay;
    void getpay()
    {
        cout<<endl<<"Enter the pay : ";
        cin>>pay;

    }
    void display()
    {
        cout<<endl<<"Pay : "<<pay;
    }
};
 
class admin:virtual public person
{
    public:
    int experience;
    void getexp()
    {
        cout<<endl<<"Enter the experience : ";
        cin>>experience;

    }
    void display()
    {
        cout<<endl<<"Experience : "<<experience;
    }
};
class master:public account,public admin
{
    public:
    char n[100];
    void gettotal()
    {
        cout<<endl<<"Enter the company name : ";
        cin>>n;
    }
    void display()
    {
        cout<<endl<<"Company name : "<<n;
    }
};
 
int main()
{
    master m1;
    m1.input();//person class
    m1.getpay();//Account class
    m1.getexp();//Experience class
    m1.gettotal();//Master class
    m1.person::display();//display() of person
    m1.account::display();//display() of Account
    m1.admin::display();//display() of admin
    m1.display();//display method of the derived class i.e Master class
    return 0;
}


