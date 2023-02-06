using namespace std;
#include<iostream>
class A
{
	int num;
	public:
		A()
		{
		}
	A(int p)
	{
	num=p;	
	}
	void display()
	{
		cout<<"num="<<num;
	}
	A operator >(A obj)
	{
		if(num>obj.num)
		return *this;
		else
		return obj;
	}
};
int main()
{
 A ob1(6);
 A ob2(10);
 A ob3=ob1>ob2;
 cout<<"largest number is"<<endl;
 ob3.display();
}
