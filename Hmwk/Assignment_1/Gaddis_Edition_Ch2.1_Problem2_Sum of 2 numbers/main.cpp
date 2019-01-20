
/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 *
 * Created on January 8, 2019, 3:16 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    int x, y, total;
    
     cout<<"Input 2 integer numbers\n";
    cin>> x;
    cin>> y;
    
    total = x+y;
    
    cout<<"The sum of "; cout<<x; cout<<"+"; cout<<y; cout<<"="; cout<<total ;
    return 0;
}

