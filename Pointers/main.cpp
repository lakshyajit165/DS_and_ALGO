/* Output Finding Question GFG*/

#include <iostream>
using namespace std;
  
void multiplication1(int *x, int *y)
{
    *x *= *y;
}

void multiplication2(int &a, int &b)
{
    b *= a;
}
int main() 
{ 
    int x = 5, y = 10;
    multiplication1(&x, &y);
    multiplication2(x, y);
    cout << x <<endl;
    cout << y; 
    
   return 0; 
}  

/*
 OutPut:
 * 50
 * 500
 
 */