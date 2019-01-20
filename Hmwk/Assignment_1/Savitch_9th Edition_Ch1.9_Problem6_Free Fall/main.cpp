

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 8, 2019, 11:22 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    int t, accleration, distance;
    cout<<"Input the time in free-fall\n"; cout<<"\n";
cin>> t;
accleration = 32;
distance =  1/2.0* (accleration * (t*t) );

 cout<<"The distance = "; cout<<distance; cout<<" feet";
    
    return 0;
}

