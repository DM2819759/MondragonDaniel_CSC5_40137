/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float c, f;
    cout<<"Temperature Converter\n" <<"Input Degrees Fahrenheit\n";
cin>> c;
f = 5/9.0 * (c-32);
cout.setf(ios::fixed); cout.setf(ios::showpoint); cout.precision(1);
cout<< c <<" Degrees Fahrenheit = "<< f   <<" Degrees Centrigrade";
    return 0;
}

