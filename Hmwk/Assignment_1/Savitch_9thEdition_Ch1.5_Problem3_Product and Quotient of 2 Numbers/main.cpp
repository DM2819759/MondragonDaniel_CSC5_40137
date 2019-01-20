
/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 *
 * Created on January 8, 2019, 6:55 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    int x, y, total;
    cout<<"Input 2 integer numbers.\n";
cin>> x;
cin>> y;
total = x*y;
cout<<"\nThe product of "; cout<<x; cout<<"*"; cout<<y; cout<<" = "; cout<<total ;cout<<"\n";
total = y/x;
cout<<"\nThe quotient of "; cout<<y; cout<<"/"; cout<<x; cout<<" = "; cout<<total;
    
    
    return 0;
}

