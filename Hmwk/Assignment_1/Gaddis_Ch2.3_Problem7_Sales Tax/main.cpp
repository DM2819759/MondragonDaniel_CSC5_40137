/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 8, 2019, 11:26 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    double n, total;
    
    cout<<"Input price of purchase\n";
cin>> n;

total = (n *0.04)+(n*0.02);


cout<<"The total sales tax is "; cout<< total;
    
    return 0;
}

