/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 16 November, 2018, 1:11 AM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    double a,b;
    double h;
    cin>>b>>a;
    h = (2 * a) / b;
    cout.setf(ios::fixed);
    cout<<setprecision(0)<<ceil(h)<<endl;
    return 0;
}

