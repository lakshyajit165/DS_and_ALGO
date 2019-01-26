/*
  The Loner
  You are given an array A of size N. All the elements of A, except one element, occur twice. You need to find the element that doesn't have its duplicate in A.

Input Format:
The first line of input contains T, the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains N, the size of the array. The second line contains N elements of A separated by spaces.

Output Format:
For each testcase, in a new line, print the element that occurs single time in A. If no such elements exists then print -1.

Your Task:
Since this is a function problem, you don't need to read any input. Just complete the provided function findLoner.

Constraints:
1 <= T <= 500
1<= N <= 107
1 <= Ai <= 1018

Examples:
Input:
2
5
1 1 2 2 3
6
1 1 2 2 3 3
Output:
3
-1 
 
 */
#include <bits/stdc++.h>
using namespace std;
long long findLoner(long long arr[],int);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cout<<findLoner(arr,n)<<endl;
	}
	return 0;
}

//User function Template for C++
//Complete this function
long long findLoner(long long arr[],int n)
{
    //Your code here
    
    long long res = arr[0];
    
    for(int i = 1; i<n; i++){
        res = res ^ arr[i];
    }    
    if(res == 0)
        return -1;
    else
        return res;
}