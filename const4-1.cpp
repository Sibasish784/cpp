using namespace std;
#include<iostream>
class code
{
int id;
public:
code ( ) 
{ 
} //Dummy constructor
code (int a) 
{ 
id=a; 
} // 1 Argument constructor
code(code &x) //Copy Constructor
{
id=x.id;
}
void display( )
{
cout<<id;
}
};
int main( )
{
code A(100);  //1 Argument Constructor
code B(A);    //B new Object and A is the existing Object(copy constructor)
code C=A;
code D;
D=A;          //copy constructor is not called but it is called assignment operator overloading
cout<<" \n id of A :"; 
A.display( );
cout<<" \nid of B :"; 
B.display( );
cout<<" \n id of C:"; 
C.display( );
cout<<" \n id of D:";
 D.display( );
}
