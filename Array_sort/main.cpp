/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 1 December, 2018, 10:10 PM
 */
//To check if the array can be sorted in a single swap or not
#include <bits/stdc++.h>

using namespace std;
int isSorted(int n, int arr[]){
    
    int first = 0, second = 0, count = 0;
    for(int i = 1; i<n; i++){
        if(arr[i] < arr[i-1]){
            count++;
            if(first == 0)
                first = i;
            else
                second = i;
        }
    }
    if(count > 2)
        return false;
    if(count == 0)
        return true;
    if(count == 2){
        swap(arr[first-1],arr[second]);
    }    
    else if(count == 1)
        swap(arr[first-1],arr[first]);
    
    for(int i = 1; i<n; i++){
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
    
    
}
int main() {
    
    int arr[] = {1,4,3,2};
    int n = sizeof(arr)/sizeof(n);
    if(isSorted(n,arr))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;    
    return 0;
}

