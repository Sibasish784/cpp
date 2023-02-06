using namespace std;
#include<iostream>
class A {
	protected:
	int x;	
	public:
  A(int p) 
  {
  	x=p;
  	cout<<"A's constructor"<<endl;
  }
};
class B {
	protected:
	int y,r;	
	public:
  B(int p,int q) 
  {
  	y=p;
  	r=q;
  	cout<<"B's constructor"<<endl;
  }
};
 
class D:public B,public A //multiple
{
	  int z;
	public:
  D(int p,int q,int r,int s):A(p),B(q,r)
  {
  	z=s;
  	cout<<"D's constructor"<<endl;
  }
  void show()
  {
  	cout<<"x="<<x<<endl;
  	cout<<"y="<<y<<endl;
  	cout<<"r="<<r<<endl;
  	cout<<"z="<<z<<endl;
  }
};
 
int main() {
   
    D obj(5,6,8,9);
    obj.show();
  }

