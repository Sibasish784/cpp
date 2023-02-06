// Return type object   
using namespace std;
#include<iostream>
class complex;
{
    float real, imag;
    public:
    void getdata();
    void putdata();
    complex sum (complex B);
}:
void complex::getdata()
{
    cout<<"Enter the real part : ";
    cin>>real;
    cout<<"Enter the imaginary part : ";
    cin>>imag;
}
void complex::putdata()
{
    cout<<real<<"+"<<imag;
}
complex complex::sum(complex B)
{
    complex temp;
    temp.real = real + B.real;
    temp.imag = imag + B.imag;
    return temp;
}
int main()
{
    complex X,Y,Z;
    X.getdata();
    Y.getdata();
    Z=X.sum(Y);
    Z.putdata();
}