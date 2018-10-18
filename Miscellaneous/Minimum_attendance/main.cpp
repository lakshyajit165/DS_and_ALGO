#include <cmath> 
#include <iostream> 
using namespace std; 
  
// Function to compute minimum lecture 
int minimumLectures(int m, int n) 
{ 
    int ans = 0; 
  
    // Formula to compute 
    if (n < (int)ceil(0.75 * m)) 
        ans = (int)ceil(((0.75 * m) - n) / 0.25); 
    else
        ans = 0; 
  
    return ans; 
} 
  
// Driver function 
int main() 
{ 
    //int M = 9, N = 1; 
    int M,N;
    cin>>M>>N;
    cout << minimumLectures(M, N); 
    return 0; 
} 