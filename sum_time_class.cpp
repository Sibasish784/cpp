using namespace std;
#include<iostream>
class time
{
    int hour,min;
    public:
    void getdata();
    void putdata();
    void sum(time,time);
};
void time::getdata()
{
    cout<<"Enter the Time : ";
    cout<<"\n";
    cout<<" Enter Hours : ";
    cin>>hour;
    cout<<" Enter Minutes : ";
    cin>>min;
}
void time::putdata()
{
    cout<<"The sum is : "<<hour<<" hours "<<min<<" mins";
}
void time::sum(time A, time B)
{
    hour = A.hour + B.hour;
    min = A.min + B.min;
    if(min>=60)
    {
        hour = hour+1;
        min = min-60;
    }

}
int main()
{
    time x,y,z;
    x.getdata();
    y.getdata();
    z.sum(x,y);
    z.putdata();
}