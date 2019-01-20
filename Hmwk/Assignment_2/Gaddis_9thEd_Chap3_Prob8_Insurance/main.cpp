/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:41 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float r, insure;
    cout<<"Insurance Calculator\n"
<<"How much is your house worth?\n";
cin>> r;
insure = r * 0.80;

cout<<"You need $" <<insure  <<" of insurance."; 

    return 0;
}

