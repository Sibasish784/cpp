using namespace std;
# include<iostream>
int addition(int num1 ,int num2);
int main()
{
    int num1;
    int num2;
    int add;
    cout <<"Type 1st number : ";
    cin >> num1;
    cout<<"Type 2nd number : ";
    cin >>num2;
    add = addition(num1 ,num2);
    cout <<"Addition is : "<<add;
    return 0;

}
int addition(int num1 ,int num2)
{
    return (num1+num2);
}