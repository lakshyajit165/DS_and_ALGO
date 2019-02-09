/*
 
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

