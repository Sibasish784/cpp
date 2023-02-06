//constructor in inheritance
using namespace std;
#include<iostream>
class Base {
	public:
  Base() {
    cout<<"Base Class Constructor Called ";
  }
  ~Base() {
    cout<<"Base Class destructor Called ";
  }
};
 
class Derived:public Base {
	public:
  Derived() {
    cout<<"Derived Class Constructor Called ";
  }
  ~Derived() {
    cout<<"Derived Class destructor Called ";
  }
};
 
int main() {
   
    Derived d ;
  }

