//Find out the Sum by Friend Function
#include<iostream>

using namespace std;

class integer
{
  int a, b;
  public:
    void set_value()
    {
    a=50;
    b=30;
    }
  friend int mean(integer s);  //declaration of friend function
};

int mean(integer s)
{
  return int(s.a+s.b)/2.0; //friend function definition
}
int main()
{
  integer c;
  c.set_value();
  cout<< "Mean value of 50 & 30 is :" <<mean(c);
  return 0;
}