using namespace std;
# include<iostream>
class Complex
{
float real, imag;
public:
Complex()
{
real=0.0;
imag=0.0;	
}
Complex(float p){
	real=5.0;
	imag=p;
}
Complex(float p,float q)
{
	real=p;
	imag=q;
}
void show( );
void sum (Complex , Complex );//member function
friend Complex mul(Complex,Complex);//friend function
};
void Complex :: show( )
{
cout<<real<<"+"<<imag<<"i\n"; //4+5i
}
void Complex :: sum ( Complex A, Complex B)
{
real = A.real + B.real;
imag= A.imag + B.imag;
}
Complex mul(Complex A,Complex B)
{
  Complex temp;
  temp.real=(A.real * B.real)-(A.imag*B.imag);
  temp.imag=A.real*B.imag+A.imag*B.real;	
  return temp;
}
int main( )
{
Complex X(4);//1 arg
Complex Y(3,4);//2 arg
Complex Z,M;// default
X.show(); //5+4i
Y.show(); // 3+4i
Z.sum(X,Y);
cout<<"sum=\n";
Z.show();
M=mul(X,Y);
cout<<"mul=\n";
M.show();
}
