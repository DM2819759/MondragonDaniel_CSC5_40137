/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int max, n, total, incre;
    cout<<"Input the maximum room capacity and the number of people\n";
cin>>max;
cin>> n;

total = n - max;
incre = max - n;
if (n>max) 

cout<<"Meeting cannot be held.\n" <<"Reduce number of people by "<<total <<" to avoid fire violation.";

else
cout<<"Meeting can be held.\n" <<"Increase number of people by " <<incre  <<" will be allowed without violation."; 

    
    return 0;
}

