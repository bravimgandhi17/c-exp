#include <iostream>
using namespace std;
int main()
{
    int num,count=0,flag=1;
    do
    {
        cout<<"enter the number"<<endl;
        cin>>num;
        if(num%8==0)
        {
            count++; flag=1;
        }
        else
        {
            flag=0;
        }
    }
    while(flag==1);
    cout<<"total "<<count<<" numbers are divisible by 8";
    return 0;

}