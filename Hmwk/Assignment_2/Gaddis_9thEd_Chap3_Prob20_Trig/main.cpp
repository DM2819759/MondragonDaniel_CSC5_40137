/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:47 PM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float d, s, c, t ; 
    cout<<"Calculate trig functions\n" <<"Input the angle in degrees.\n";
cin>> d;
s = (d / 57.295784138);

cout<<"sin(" << d <<") = " <<fixed<< setprecision(4) <<sin(s) <<"\n";
cout<<setprecision(0)<<"cos("  << d <<") = "<<fixed<< setprecision(4) <<cos(s)  <<"\n";
cout<<setprecision(0)<<"tan("  << d <<") = "<<fixed <<setprecision(4) <<tan(s);

    return 0;
}

