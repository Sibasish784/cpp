using namespace std;
#include<iostream>
class test
{
    int code=0;
    static int count;
    public:
    void setcode()
{
    code=++code;
    count=count+1;
}
void showcode()
{
    cout<<"code : "<<code;
    cout<<"\n";
}
static void showcount()
{
    cout<<"count : "<<count;
}
};
int test::count;  //Defining Static Member
int main()
{
    test t1, t2, t3;
    t1.setcode();
    t2.setcode();
    t3.setcode();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    test::showcount();
    test::showcount();
    test::showcount();
    return 0;
}