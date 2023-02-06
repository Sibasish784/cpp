#include<iostream>
using namespace std;

class Student
{
	protected:
        int roll;
        char name[21];
    public:
        void getdata()
        {
                cout<<"\n -----------------------------------------";
                cout<<"\n Enter the Roll No.            : ";
                cin>>roll;
                cout<<"\n Enter the Student Name        : ";
                cin>>name;
        }
        void putdata()
        {
                cout<<"\n -----------------------------------------";
                cout<<"\n ********** Student Marksheet **********";
                cout<<"\n -----------------------------------------";
                cout<<"\n Roll No.             :  "<<roll;
                cout<<"\n Student Name         :  "<<name<<endl;
        }
};
class Test : public Student      //Class Test derived from Class Student
{
    public:
        int p , c , m ;
        void accept_data()
        {
                getdata();//student class method
                cout<<"\n Enter Marks for Physics : ";
                cin>>p;
                cout<<"\n Enter Marks for Chemestry : ";
                cin>>c;
                cout<<"\n Enter Marks for Math : ";
                cin>>m;
        }
        void display_data()
        {
                putdata();//student class
                cout<<"\n Marks of Subject in Physics   :  "<<p;
                cout<<"\n Marks of Subject in Chemestry   :  "<<c;
                cout<<"\n Marks of Subject in Maths   :  "<<m;
        }
};
class Result : public Test      //Class Result derived from Class Test
{
	float avg;
    public:
        void calculate ()
        {
                avg = (p+c+m)/3.0;
                cout<<"\n\n Average mark in PCM is    :  "<<avg;
                cout<<"\n ----------------------------------------- \n";
        }
};
int main()
{
        int cnt, i ;
        cout<<"\n Enter The No. of Students You Want : ";
        cin>>cnt;
		Result str[cnt];     //Object 'str' is created of derived Class Result
        
        for(i=0; i<cnt; i++)
        {
                str[i].accept_data();//method of Test class
                str[i].display_data();//method of Test class
                str[i].calculate();//method of Result class
        }
        return 0;
}
