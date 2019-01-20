
/* 
 * File:   main.cpp
 * Author: Daniel
 *
 * Created on January 8, 2019, 7:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int q, d, n, total;
    
    cout<<"Enter the number of Quarters, Dimes and Nickels\n"; cout<<"\n";
cin>>q;
cin>>d;
cin>>n;

total = q*25 + d*10 + n*5;

cout<<q; cout<<" Quarters"; cout<<" + "; cout<<d; cout<<" Dimes"; cout<<" + "; cout<<n; cout<<" Nickels"; cout<<" = "; cout<< total; cout<<" cents!";
    
    return 0;
}

