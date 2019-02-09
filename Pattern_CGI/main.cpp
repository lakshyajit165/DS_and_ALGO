/*
 Problem Statement:
 * 
 Given an integer N, print N lines in the following manner - 
 if N = 4
 the pattern generated would be
 1*2*3*4
 9*10*11*12
 13*14*15*16
 5*6*7*8
 
 The input to the function squarePatterPrint() shall consist of an integer N
 (Assume 0 <= N <= 100)
 Do not return anything from the function
 
*/
 
 

#include <iostream>

using namespace std;

/*
 * 
 */
void squarePatternPrint(int n){
    
    int A[n][n];
    int count = 1;
    for(int i = 0; i<n; i++)
        for(int j = 0;j<n; j++){
            A[i][j] = count;
            count+=1;
        }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i % 2 == 0){
                if(A[i][j] % n == 0)
                    cout<<A[i][j]<<"\n";
                else
                    cout<<A[i][j]<<"*";
            }
        }
    }
    
    for(int i = n-1; i>=0; i--){
        for(int j = 0; j<n; j++){
            if(i%2 != 0){
                if(A[i][j] % n == 0)
                    cout<<A[i][j]<<"\n";
                else
                    cout<<A[i][j]<<"*";
            }
        }
    }
}
int main() {
    
    int n;
    cin>>n;
    squarePatternPrint(n);
    return 0;
}

