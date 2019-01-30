#include <iostream>
using namespace std;

void operation(int *a, int *b)
{
    b = a;
    *b = 5;   // line 1
}

int x = 2, y = 3; 
int main()
{
    operation(&x, &y);
    if((x - y) % 2 == 0)
     cout << "Even";
    else
     cout << "Cannot determine";
    return 0;
} 