using namespace std;
#include<iostream>
class student
{
    private:
    int rollno;
    char name[20];
    public:
    void getdata();
    void putdata();
};
void student::getdata()     //used scope resolution operator :: to inform getdata fun^n is belongs to student class  
{                           //or called membership visibility operator
    cout<<"Enter the Roll No. : ";
    cin>>rollno;
    cout<<"Enter the Name : ";
    cin>>name;
}
void student::putdata()     //used scope resolution operator :: to inform putdata fun^n is belongs to student class
{    
    cout<<"Roll No : "<<rollno;
    cout<<"\nName : ";
    puts(name);
}    
int main()        
{
    student s,s1;
    s.getdata();
    s.putdata();
    s1.getdata();
    s1.putdata();
}
