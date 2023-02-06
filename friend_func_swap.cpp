// WAP to create 2 classes A and B. num1 is the private member of class A and num2 is the private member of
// class B. Define the exchange() which is member function of A and friend of B and it will swap the two no.s
//of two different classes.
#include<iostream>
using namespace std;
class B;  // Forward Declaration
class A
{
    int x;
    public:
    void get(int p)
    {
        x=p;
    }
    void show()
    {
        cout<<"x = "<<x;
    }
    void swap(B&);
};
class B
{
    int y;
    public:
    void get(int q)
    {
        y=q;
    }
    void show()
    {
        cout<<" , y = "<<y;
    }
    friend void A::swap(B&);
};
void A::swap(B &ob2)
{
    int temp = x;
    x=ob2.y;
    ob2.y=temp;
}
int main()
{
    A ob1;
    ob1.get(5); //x = 5
    B ob2;
    ob2.get(7); // y = 7
    cout<<"Before swapping : \n";
    ob1.show();
    ob2.show();
    ob1.swap(ob2);
    cout<<"\nAfter swapping : \n";
    ob1.show();
    ob2.show();
}