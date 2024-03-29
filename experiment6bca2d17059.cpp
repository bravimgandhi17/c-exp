#include <iostream>
#include<math.h>
using namespace std;
class Shape
 {
public:
    virtual double area()  = 0;  //pure virtual function
    virtual double perimeter()  = 0; 
    virtual ~Shape() //destructor
    {} 
};


class Circle : public Shape
 {
private:
    double radius;
public:
    Circle(double r) 
    {
        radius=r;
    }

    double area() 
    {
        return 3.14 * radius * radius;
    }

    double perimeter() 
     {
        return 2 * 3.14 * radius;
    }
};


class Rectangle : public Shape 
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b)
    {
        length=l;
        breadth =b;
    }

    double area()
     {
        return length * breadth;
    }

    double perimeter() 
     {
        return 2 * (length + breadth);
    }
};


class Triangle : public Shape 
{
private:
    double side1,side2,side3;

public:
    Triangle(double s1, double s2, double s3) 
     {
        side1=s1;
        side2=s2;
        side3=s3;
     }

    double area() 
     {
        
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() 
     {
        return side1 + side2 + side3;
    }
};

int main()
 {
    Circle c(35.0);
    Rectangle r(4.0, 10.0);
    Triangle t(5.0, 4.0, 8.0);

    Shape *p;
    p=&c;
    cout<<"area of circle="<< p->area()<<endl;
    cout<<"perimeter of circle="<<p->perimeter()<<endl;
    
    p=&c;
    cout<<"area of rectangle="<< p->area()<<endl;
    cout<<"perimeter of rectangle="<<p->perimeter()<<endl;
  
    p=&c;
    cout<<"area of Triangle="<< p->area()<<endl;
    cout<<"perimeter of Triangle="<<p->perimeter()<<endl;
        return 0;
}
