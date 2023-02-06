using namespace std;
#include<iostream>  
  class Shape //abstract class
  {  
  protected:  
    double x, y;  
  public:  
    void set_dim(double i, double j=0) 
	{  
      x = i;  
      y = j;  
    }  
     virtual void show_area()=0; 
      //cout << "No area  defined for this class."<<endl;  
     
  } ;  
       
  class triangle : public Shape {  
    public:  
      void show_area() {  
        cout << "Triangle with height ";  
        cout << x << " and base " << y;  
        cout << " has an area of ";  
        cout << x * 0.5 * y << ".\n";  
      }  
  };  
       
  class square : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Square with dimensions ";  
        cout << x << "x" << y;  
        cout << " has an area of ";  
        cout << x *  y << ".\n";  
       }  
  };  
       
  class circle : public Shape {  
    public:  
      void show_area(void) {  
        cout << "Circle with radius ";  
        cout << x;  
        cout << " has an area of ";  
        cout << 3.14 * x * x;  
      }  
  } ;  
       
  main(void)  
  {  
    Shape *p;  
    Shape obj;//object creation not allowed
    triangle t; 
    square s;  
    circle c;  
       
    p = &t;  
    p->set_dim(10.0, 5.0);  
    p->show_area();  
       
    p = &s;  
    p->set_dim(10.0, 5.0);  
    p->show_area(); //square class method 
       
    p = &c;  
    p->set_dim(9.0);  
    p->show_area();   
  }
