using namespace std;
#include<iostream>
class A
{
	int i;
	int j;
	public:
		void input(int a,int b)
		{
			i=a;
			j=b;
		}
		void display()
		{
			cout<<"i="<<i;
			cout<<"j="<<j;
		}
};
int main()
{
	A *ptr1;
	A obj;
	ptr1=&obj;
	ptr1->input(5,6);
	ptr1->display();
}
