/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:35 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int s, h, total, over;
    cout.setf(ios::fixed);   cout.setf(ios::showpoint);   cout.precision(2);
cout<<"This program calculates the gross paycheck.\n"
<<"Input the pay rate in $'s/hr and the number of hours.\n" ;
cin>> s >> h;

total = s *h;
over = (s * 40) + ((2.0 * s) * (h-40));

if (h<40)
cout<<"Paycheck = $ "<<total;
else 
cout<<"Paycheck = $ "<<over;
    return 0;
}

