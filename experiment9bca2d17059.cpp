#include <iostream>
using namespace std;
class stringOperation
{
     public:
     int length(char str[30])
     {
        int l=0;
        for(l=0;str[l]!='\0';l++);
        return l;
     }
    void reverse(char str[30])
     {
        char t[30];
        int i,l,j=0;
        l=length(str); 
        l--;
        for(i=l; i>=0; i--)
        {
            t[j]=str[i];
            j++;
            
        }
        cout<<t;
     }
   void concat(char a[30],char b[30])
    {
       int l1,l2,i,j=0;
     char str[60];
       l1=length(a);
       l2=length(b);
       
       for(i=0;i<l1;i++)
       {
         str[j]=a[i];
         j++;
       }
       for(i=0;i<l2;i++)
       {
         str[j]=b[i];
         j++;
       }
       str[j]='\0';
       cout<<str;
    }
};
int main()
{
    stringOperation obj;
  char p[30],q[30];

    cout<<"enter first string"<<endl;
    cin>>p;
    cout<<"enter second string"<<endl;
    cin>>q;
    int len;
    len=obj.length(p);
    cout<<"\n length of first sring is:"<<len;
    cout<<"\n reverse of the first string is: ";
    obj.reverse(p);
 
    cout<<"\n concatenated string is: ";
       
   obj.concat(p,q);
    return 0;
}
