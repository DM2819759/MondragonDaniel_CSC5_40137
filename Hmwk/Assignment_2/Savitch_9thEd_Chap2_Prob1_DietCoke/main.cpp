/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:26 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int w, max;
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
cout<<"Input the desired dieters weight in lbs.\n";
cin>> w;
max = (((w*453.59) / 7.0) / 0.001) /350 ;
cout<<"The maximum number of soda pop cans\n";
cout<<"which can be consumed is "; cout<< max; cout<<" cans";
    
    
    return 0;
}

