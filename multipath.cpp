#include<iostream>
using namespace std;
class A
{
	protected:
		int id;
	public:
		void get()
		{
			cout<<"Enter id\n";
			cin>>id;
		}			
};
class B:virtual public A
{
};
class C:virtual public A
{
};
class D:public B,public C
{
	public:
		void display()
		{
			cout<<"id="<<id; 
		}
};
int main()
{
	D obj;
	obj.get();
	obj.display();
}
