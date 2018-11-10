/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 10 November, 2018, 6:57 PM
 */

//Given an unsigned integer x. Round it up to the next greater multiple of 8 using bitwise operations only.
#include <iostream>

using namespace std;

int round(int x){
    return((x+7)&(-8));
}
int main() {
    
    int a;
    cin>>a;
    cout<<round(a);
    return 0;
}

