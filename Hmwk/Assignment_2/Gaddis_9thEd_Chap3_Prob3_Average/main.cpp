/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:37 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float a,b,c,d,e,aver;
    cout<<"Input 5 numbers to average.\n";
cin>>a>>b>>c>>d>>e;
aver = (a+b+c+d+e)/5;
cout<<"The average = "<<fixed<<showpoint<<setprecision(1)<<aver;
    
    return 0;
}

