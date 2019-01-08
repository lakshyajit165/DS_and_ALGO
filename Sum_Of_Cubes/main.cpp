// GEEKS FOR GEEKS
/*
 Given N, count all ‘a’(>=1) and ‘b’(>=0) that satisfy the condition a3 + b3 = N.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains integer N.

Output:
For each testcase, in a new line, print count of all 'a' and 'b' that satisfy the above equation.

Constraints:
1 <= T <= 100
a>=1, b>=0
1 <= N <= 105

Example:
Input:
2
9
28

Output:
2
2
 
 */


#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t,n,count = 0;
    cin>>t;
    while(t--){
      
       cin>>n;
       for(int i = 1; i<=cbrt(n); i++){
           int a = pow(i,3);
           float b = cbrt(n-a);
           if(floor(b) == ceil(b))
               count++;
       }
       cout<<count<endl;
    }
    return 0;
}