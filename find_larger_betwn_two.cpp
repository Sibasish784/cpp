#include<iostream>
using namespace std;
int main()
{
    int x, y;
	
	cout << "Enter first Number  : ";
	cin >> x;
    cout << "Enter second Number  : ";
	cin >> y;
	
	if(x > y)
	{
    	cout << x << " is Greater Than " << y;  
	}         
	else if(y > x)
	{
		cout << y << " is Greater Than " << x;  
  	}
  	else
  	{
  		cout << "Both are Equal";
	}
 	return 0;
}