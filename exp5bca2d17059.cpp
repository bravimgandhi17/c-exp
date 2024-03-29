#include <iostream>
using namespace std;
class Rectangle
{
    public:
    int length,breadth;
    void getdata(int,int);
    int area();
};
void Rectangle :: getdata(int L, int B)
{
    length=L;
    breadth=B;
}
int Rectangle :: area()
{
    int r=length*breadth;
    return r;
}
int main()
{ 
    Rectangle rect;
    int a,b;
    cout<<"enter length and breadth";
    cin>>a>>b;
    rect.getdata(a,b);
    cout<<"\n area of rectangle="<<rect.area();
    return 0;
}
    
    
