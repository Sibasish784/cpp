using namespace std;
#include<iostream>
class student
{
    public:
    int rollno;
    char name[20];
};
int main()
{
    student s;
    cout<<"Enter the Roll No. : ";
    cin>>s.rollno;
    cout<<"Enter the Name : ";
    cin>>s.name;
    cout<<"Roll No : "<<s.rollno;
    cout<<"\nName : ";
    puts(s.name);
    //cout<<"Enter the Roll No. : ";
   // cin>>s.rollno;
   // cout<<"Enter the Name : ";
   // cin>>s.name;
   // cout<<"Roll No : "<<s.rollno;
    //cout<<"\nName : ";
    //puts(s.name);
}
