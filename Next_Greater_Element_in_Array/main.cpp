/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 6 October, 2018, 10:45 PM
 */

#include <bits/stdc++.h>

using namespace std;

void NGE(int arr[], int n){
    
    stack<int> s;
    int arr1[n];
    
    for(int i = n-1; i>=0; i--){
        
        while(!s.empty() && s.top()<arr[i])
            s.pop();
        
        if(s.empty())
            arr1[i] = -1;
        else
            arr1[i] = s.top();
        
        s.push(arr[i]);
    }
    for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ---> "<<arr1[i]<<endl;
    
}
int main() {
    
    int n;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    NGE(A,n);
    return 0;
}

