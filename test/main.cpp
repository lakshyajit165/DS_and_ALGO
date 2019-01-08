#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int A[] = {1,2,3,5,4};
    int N = sizeof(A)/sizeof(A[0]);
    cout<<distance(A, max_element(A, A + N));
        
    return 0;
}