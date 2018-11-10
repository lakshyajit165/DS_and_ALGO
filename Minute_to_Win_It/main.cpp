/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 19 October, 2018, 10:11 PM
 */

#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    
    ll n,k,temp,count = 0;
    cin>>n>>k;
    ll A[n];
    for(ll i = 0; i<n; i++)
        cin>>A[i];
    for(ll i = 1; i<=n-1; i++){
        temp = A[i-1] + k;
        if(A[i] != temp){
            A[i] = temp;
            count++;
        }
    }
    cout<<count;
    return 0;
}

