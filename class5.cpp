using namespace std;
#include<iostream>
class Emp
{
    private:
    int empid;
    char name[10];
    char dept[10];
    public:
    void input();
    void display();  //prototype;
};
void Emp::input()  //used scope resolution operator :: to inform getdata fun^n is belongs to student class 
{                  //or called membership visibility operator
    cout<<"Enter all the Employee information ";
    cout<<"\nEnter Employee id : ";
    cin>>empid;
    cout<<"Enter Employee Name : ";
    cin>>name;
    cout<<"Enter Employee Department : ";
    cin>>dept;
}
void Emp::display()
{
    cout<<"Employee id : "<<empid;
    cout<<"\nName :"<<name;
    cout<<"\nDepartment : ";
    puts(dept);
}
int main()
{
    Emp E;
    for(int i=0; i<2; i++)
    {
        E.input();
        E.display();
    }
}      