#include <iostream>
using namespace std;
class number
{
     public:
        int num;
        number(int n)
        {
            num=n;
       }
       void convert()
       {
        int a[100],i=0,j;
        while(num>0)
        {
            a[i]=num%2;
            num=num/2;
            i++;
        }
        cout<<endl<<"equivalent binary number:";
        for(j=i-1;j>=0;j--)
        cout<<a[j];
       }
};
int main()
{
    int n;
    cout<<"enter decimal number: ";
    cin>>n;
    number obj(n);
    obj.convert();
    

}