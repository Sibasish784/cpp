using namespace std;
#include<iostream>
class complex
{
float real,img;
public:
complex()
{
real=0;
img=0;
}
complex(float r,float i)
{
real=r;
img=i;
}
void show()
{
cout<<real<<"+i"<<img<<endl;
}
complex operator+(complex &p)
{
complex w;//default constructor
w.real=real+p.real;
w.img=img+p.img;
return w;
}
};
int main()
{
complex s(3,4);
complex t(4,5);
complex m;
m=s+t;//s.operator+(t)
cout<<"s=";
s.show();
cout<<"t=";
t.show();
cout<<"result=";
m.show();
}

