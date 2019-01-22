/*
 Given an array A of N elements. The task is to count all the subsets whose sum is even.

Input Format:
For each testcase, first line of input contains number of testcases T. For each testcase, there will be two lines, first of which containing N and next line contains N space seperated positive integers.

Output Format:
For each testcase, print the count of subsets whose sum of all elements is even.

Constraints:
1 <= T <= 100
1 <= N <= 10
1 <= A[i] <= 10

User Task:
Your task is to complete the function countSumSubsets() which counts all the subsets in which sum of all the elements is even.

Example:
Input:
1
3
1 2 3

Output:
3

Explanation:
Testcase 1: Three subsets are there whose sum of elements is even. Subsets are (3, 2, 1), (1, 3), (2).


 */
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
// Function prototype
int countSumSubsets(int[], int);
//Position this line where user code will be pasted.
// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    
	    cout << countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
int countSumSubsets(int arr[], int N){
    
    // Your code here
    int res,even = 0, odd = 0;
    for(int i = 0; i<N; i++){
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if(odd == 0){
        res = pow(2,even) - 1;
        
    }else{
        res = pow(2,(odd+even-1)) - 1;
       
    }
    return res;
}

/*
 Link for Formula: https://math.stackexchange.com/questions/1721926/number-of-subsets-of-a-set-with-even-sum-using-combinatorics-or-binomial
 */