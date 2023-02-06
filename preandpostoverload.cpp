using namespace std;
#include<iostream>
class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count(int p) 
	{
    value=p;	
	}  


    // Overload ++ when used as prefix
    void operator ++ () 
	{
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) 
	{
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count obj(7);

    // Call the "void operator ++ (int)" function
    obj++;
    obj.display();

    // Call the "void operator ++ ()" function
    ++obj;

    obj.display();
    return 0;
}
