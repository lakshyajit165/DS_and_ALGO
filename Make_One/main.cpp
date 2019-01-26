/*
 Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Input Format:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is r and c, r is the number of rows and c is the number of columns. The second line of each test case contains all the elements of the matrix in a single line separated by a single space.

Output Format:
Print the modified array.

Your Task:
Since this is a function problem, you don't need to read any input. Just complete the provided function makeThemOne.

Constraints:
1 ≤ T ≤ 102
1 ≤ r, c ≤ 103
0 ≤ A[i][j] ≤ 1

Example:
Input:
3
2 2
1 0 
0 0
2 3
0 0 0 
0 0 1
3 4
1 0 0 1 
0 0 1 0 
0 0 0 0

Output:
1 1
1 0
0 0 1 
1 1 1
1 1 1 1 
1 1 1 1 
1 0 1 1

Explanation:
Testcase1: Since only first element of matrix has 1 (at index 0,0) as value, so first row and first column are modified to 1.
 
 */


#include <bits/stdc++.h>
using namespace std;
// Global Declaration of arrays
// a : input array
// ar : auxiliary array
// ac : auxiliary array
int a[1000][1000];
int ar[1000];
int ac[1000];
// Function Prototype
void makeThemOne(int, int);
//Position this line where user code will be pasted.
// Driver Code
int main() {
	
	int testcase;
    cin >> testcase;
    while(testcase--){
    
    // r : number of rows
    // c : number of columns
    int r,c;
    cin >> r >> c;
    
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            cin >> a[i][j];
        }
    }
    
    makeThemOne(r, c);
    }
	
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
//Back-end complete function Template for C++
/* Funtion to make all rows and colums one
*  r : number of rows
*  c : number of columns
*  Note : arr is declared globally, you can
*  use arr in your function
*/
void makeThemOne(int r, int c){
    // Your code here
    int arr[1000][1000];
    
    for(int i = 0; i<r; i++)
        for(int j = 0; j<c; j++)
            arr[i][j] = a[i][j];
            
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(a[i][j] == 1){
                for(int k = 0; k<c; k++)
                    arr[i][k] = 1;
                for(int l = 0; l<r; l++)
                    arr[l][j] = 1;
            }
        }
    }
    
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;    
    }
}