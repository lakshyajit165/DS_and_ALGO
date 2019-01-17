/*
 Given a sorted array and a number x, find the pair in array whose sum is closest to x
 * 
 * Algorithm
 * 
 *  1) Initialize a variable diff as infinite (Diff is used to store the 
        difference between pair and x).  We need to find the minimum diff.
    2) Initialize two index variables l and r in the given sorted array.
           (a) Initialize first to the leftmost index:  l = 0
           (b) Initialize second  the rightmost index:  r = n-1
    3) Loop while l < r.
           (a) If  abs(arr[l] + arr[r] - sum) < diff  then 
               update diff and result 
           (b) Else if(arr[l] + arr[r] <  sum )  then l++
           (c) Else r--  
*/
#include<bits/stdc++.h>
using namespace std;
void PrintClosest(int arr[], int n, int x){
    
    int res_l, res_r; //to store the indices of the result pair
    
    // Initialize left and right indexes and difference between 
    // pair sum and x
    int l = 0, r = n-1, diff = INT_MAX;
    
    // While there are elements between l and r 
    while(l<r){
        
        // Check if this pair is closer than the closest pair so far 
        if(abs(arr[l] + arr[r] - x) < diff){
            
            res_l = l;
            res_r = r;
            diff = abs(arr[l] + arr[r] - x);
        }
        if(abs(arr[l] + arr[r] > x))
            r--;
        else
            l++;
    }
    
    cout <<" The closest pair is " << arr[res_l] << " and " << arr[res_r];
    
}
int main(){
    
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    PrintClosest(arr, n, x); 
    return 0;
}