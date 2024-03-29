#include <iostream>
using namespace std;
class room
{
    public:
    int lenght,breadth;
    void get()
    {
        cout<<"enter the lenght"<<endl;
        cin>>lenght;
        cout<<"enter the breadth"<<endl;
        cin>>breadth;
    }
    void display()
    {
      cout<<"value of the lenght is:"<<lenght<<endl;
      cout<<"value of the breadth is:"<<breadth<<endl;
    }
    void area()      //area of the rectangle
    {
        int ar;
        ar=lenght*breadth;
        cout<<"area is:"<<ar<<endl;
    }
    void perimeter()   //perimeter of rectangle
    {
        int pr;
        pr=2*(lenght+breadth);
        cout<<"perimeter is:"<<pr<<endl;
    }
};
int main()
{
    room r1,r2,r3,r4,r5;
    r1.get();
    r1.display();
    r1.area();
    r1.perimeter();
    r2.get();
    r2.display();
    r2.area();
    r2.perimeter();
    r3.get();
    r3.display();
    r3.area();
    r3.perimeter();
    r4.get();
    r4.display();
    r4.area();
    r4.perimeter();
    r5.get();
    r5.display();
    r5.area();
    r5.perimeter();
    return 0;
}