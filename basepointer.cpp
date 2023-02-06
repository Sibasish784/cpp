using namespace std;
#include<iostream>
class A
{
    protected:
	int i;
	int j;
	public:
		 virtual void input()
		{
			cout<<"Enter i and j"<<endl;
			cin>>i>>j;
		}
		  virtual void display()
		{
			cout<<"i="<<i<<endl;
			cout<<"j="<<j<<endl;
		}
};
class B:public A
{
	int k;
	public:
		void input()
		{
			cout<<"Enter k"<<endl;
			cin>>k;
		}
		void disp()
		{
			cout<<"k="<<k<<endl;
		}
};
int main()
{
	A *bptr;//base class pointer
	A objA;
	B objB;
	bptr=&objA;
	bptr->input();//access method of bbase class
	bptr->display();
	bptr=&objB;
	bptr->input();//method of derived class(method is not called during compilation time and it is called during execution time)
	bptr->disp();	
}
