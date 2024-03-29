#include <iostream>
#include<math.h>
using namespace std;
int findMax(int* a, int* b, int* c) 
{
    int max ; 

    if (*a>*b && *a>*c ) 
    {
        max = *a; 
    }
    else if (*b>*a && *b > *c) 
    {
        max = *b;
    }
    else
    {
        max=*c;
    }

    return max;
}

int main()
 {
    int num1, num2, num3;

   
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    
    int big = findMax(&num1, &num2, &num3);

    
   cout << "Maximum number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << big << endl;

    return 0;
}
