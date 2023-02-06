using namespace std;
#include<iostream>
class student
{
    private:
    int rollno;
    char name[20];
    public:
    void getdata()
{
    cout<<"Enter the Roll No. : ";
    cin>>rollno;
    cout<<"Enter the Name : ";
    cin>>name;
}
void putdata()
{    
    cout<<"Roll No : "<<rollno;
    cout<<"\nName : ";
    puts(name);
}    
};
int main()  
{
    student s;
    for(int i=0; i<2; i++)
    {
        s.getdata();
        s.putdata();
    }
}      