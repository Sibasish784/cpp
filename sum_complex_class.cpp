using namespace std;
#include<iostream>
class complex
{
    float real, imag;
    public:
    void getdata();
    void putdata();
    void sum (complex, complex);
};
void complex::getdata()
{
    cout<<"Enter real part : ";
    cin>>real;
    cout<<"Enter imaginary part : ";
    cin>>imag;
}
void complex::putdata()
{
    cout<<real<<"+"<<imag<<"i";
}
void complex::sum(complex A, complex B)
{
    real = A.real + B.real;
    imag = A.imag + B.imag;
}
int main()
{
    complex X,Y,Z;
    X.getdata();
    Y.getdata();
    Z.sum(X,Y);
    Z.putdata();
}