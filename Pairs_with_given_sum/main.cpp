/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 19 October, 2018, 7:56 PM
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void disp_pairs(ll A[], ll n, ll sum){
    
    ll flag = 0;
    ll low = 0, high = n-1;
    while(low<high){
        if(A[low] + A[high] < sum)
            low++;
        else if(A[low] + A[high] > sum)
                high--;
             else{
                    cout<<A[low]<<" "<<A[high]<<" "<<sum<<endl;
                    flag = 1;
                    low++;
             } 
            
    }
    if(flag == 0)
        cout<<"-1"<<endl;
    
}

int main() {
    
    ll t;
    cin>>t;
    while(t--){
        ll n,sum;
        cin>>n;
        ll A[n];
        for(ll i = 0; i<n; i++)
            cin>>A[i];
        cin>>sum;
        disp_pairs(A,n,sum);
    }
    return 0;
}

