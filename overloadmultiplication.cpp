using namespace std;
#include<iostream>
class A
{
int p,q;
public:
	A(){}
	
A(int i,int j)
{
p=i;
q=j;
}
void show()
{
cout<<"p="<<p<<endl;
cout<<"q="<<q<<endl;
}
friend A operator*(int a,A ob)
{
A temp;//default constructor
temp.p=a*ob.p;;
temp.q=a*ob.q;
return temp;
}
};
int main()
{
A obj(3,4);
int r=7;
A result;
result=r*obj;//operator*(r,obj)
cout<<"result=";
result.show();
}
