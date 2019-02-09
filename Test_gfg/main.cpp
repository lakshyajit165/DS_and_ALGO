#include<iostream> 
using namespace std; 
  
int &GFG() 
{ 
    int a = 20; 
    return a; 
} 
int main() 
{ 
    GFG() = 40; 
    cout << GFG(); 
    return 0; 
} 