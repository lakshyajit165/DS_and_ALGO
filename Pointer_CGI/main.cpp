/*
 Given a unique positive integer array of length len with elements RANGING FROM 0 TO (len-1),
 write a program to interchange the element value with the corresponding index values.
 
 Ex: input: a[0]=3, a[1]=2, a[2]=0, a[3]=1
    output: a[0]=2, a[1]=3, a[2]=1, a[3]=0
 
 Th input to the function swapArr shall consist of an array arr and its length len. The function should
 return an array after replacing the elements with their index values. The values in arr shall always be
 and cover all numbers between 0 and (length of array - 1)
 */

#include <iostream>
using namespace std;

int* swapArr(int* arr, int len){
    
    int *res = (int*)malloc(len*sizeof(int));
    for(int i = 0; i<len; i++){
        res[arr[i]] = i;
    }
    
    
    return res;
}
int main() {
    
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n; i++)
        cin>>arr[i];
    
    int* res = swapArr(arr, n);
    
    for(int i = 0; i<n; i++)
        cout<<res[i]<<" ";
    return 0;
}

