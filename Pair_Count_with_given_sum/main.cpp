/*
 Count pairs with given sum
Given an array of integers, and a number ‘sum’, find the number of pairs of integers 
 in the array whose sum is equal to ‘sum’.
 
 * A better solution is possible in O(n) time.

Below is the Algorithm.

1. Create a map to store frequency of each number in the array. (Single traversal is required)
2. In the next traversal, for every element check if it can be combined with any other element 
 * (other than itself!) to give the desired sum. Increment the counter accordingly.
3. After completion of second traversal, we’d have twice the required value stored in counter because 
 * every pair is counted two times. Hence divide count by 2 and return. 

 
 */
#include<bits/stdc++.h>
using namespace std;
int PairCount(int arr[], int n, int sum){
    
    unordered_map<int, int> m;
    
    //store counts of all elements in the map m
    for(int i = 0; i<n; i++)
        m[arr[i]]++;
    
    int twice_count = 0;
    
    // iterate through each element and increment the 
    // count (Notice that every pair is counted twice) 
    for(int i = 0; i<n; i++){
        twice_count += m[sum - arr[i]];
        
        // if (arr[i], arr[i]) pair satisfies the condition, 
        // then we need to ensure that the count is 
        // decreased by one such that the (arr[i], arr[i]) 
        // pair is not considered 
        if(sum - arr[i] == arr[i])
            twice_count--;
    }
    
    //return half the twice count
    return twice_count/2;
}
int main(){
    
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cin>>sum;
    cout<<PairCount(arr,n,sum);
    return 0;
}