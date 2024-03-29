#include <iostream>
#include<math.h>
using namespace std;
class Complex
{
private:
    double real,imag;

public:
    Complex(double r = 0.0, double i = 0.0)
    {
        real=r;
        imag=i;
    }
    void display()
     {
        cout << real << " r : " << imag << " i" << endl;
    }
    friend Complex operator+( Complex& c1,  Complex& c2);
    friend Complex operator-( Complex& c1,  Complex& c2);
    
};


Complex operator+( Complex& c1,  Complex& c2)
 {
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
Complex operator-( Complex& c1,  Complex& c2)
 {
    Complex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
}
int main()
 {
    Complex obj1(7.85, 9.0);
    Complex obj2(4.5, 6.5);

    Complex obj3 = obj1 + obj2;
    obj3.display();
  Complex obj4 = obj1 - obj2;
    obj4.display();
    return 0;
}
