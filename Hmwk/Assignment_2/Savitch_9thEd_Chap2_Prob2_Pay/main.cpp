/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:29 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 
    int prev, n;
    cout<<"Input previous annual salary.\n";
cin>> prev;

n = prev / 26.3157894737;


cout.setf(ios::fixed);   cout.setf(ios::showpoint);   cout.precision(2); 
cout<<"Retroactive pay    = $  "; cout<<n; cout<<"\n";

n = ((prev / 1000.0) * 76.00) ;
n = prev + n;
cout<<"New annual salary  = $"; cout<<n;  cout<<"\n";
n = n / 12.0;
cout<<"New monthly salary = $  "; cout<<n;
    return 0;
}

