using namespace std;
#include<iostream>
class A {
	protected:
	int x;
	int y;	
	public:
  A(int p,int q) 
  {
  	x=p;
  	y=q;
  	cout<<"A's constructor"<<endl;
  }
};
class B:public A {
	protected:
	int z;	
	public:
  B(int p,int q,int r) :A(p,q)
  {
  	z=r;
  	cout<<"B's constructor"<<endl;
  }
};
 
class D:public B {
	public:
  D(int p,int q):B(p,q,q*2)
  {
  	cout<<"D's constructor"<<endl;
  }
  void show()
  {
  	cout<<"x="<<x<<endl;
  	cout<<"y="<<y<<endl;
  	cout<<"z="<<z<<endl;
  }
};
 
int main() {
   
    D obj(5,6);
    obj.show();
  }

