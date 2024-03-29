#include <iostream>
using namespace std;
int sum(int n)
{
    int s=0,i;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
int main()
    {
       int n,i,total=0;
       cout<<"Enter any  number"<<endl;
       cin>>n;
       for(i=1;i<=n;i++)
       total=total + sum(i);
       cout<<"The sum  of the series is:"<<total<<endl;
       return 0;
    }
