//constructor in single inheritance
using namespace std;
#include<iostream>
class A {
	protected:
	int x,y;	
	public:
  A(int p,int r) 
  {
  	x=p;
  	y=r;
    cout<<"Base Class Constructor Called \n";
  }
};
 
class D:public A {
	  int z;
	public:
  D(int p,int q,int r):A(p,r)
  {
  	z=q;
    cout<<"Derived Class Constructor Called\n";
  }
  void show()
  {
  	cout<<"x="<<x<<endl;
  	cout<<"y="<<y<<endl;
  	cout<<"z="<<z<<endl;
  }
};
 
int main() {
   
    D obj(5,6,7);//Derived constructor
    obj.show();
  }

