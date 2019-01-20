/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 17, 2019, 6:34 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int b;
    cout<<"Book Worm Points\n"
<<"Input the number of books purchased this month.\n";
cin>>b;

    if (b<0) {
    cout<<"Books purchased =  "<<b<<endl;
    cout<<"Points earned   = 0";
}   else if (b>=4) {
    cout<<"Books purchased =  "<<b<<endl;
    cout<<"Points earned   = 60";
}   else if (b==3) {
    cout<<"Books purchased =  "<<b<<endl;
    cout<<"Points earned   = 30";
}   else if (b==2) {
    cout<<"Books purchased =  "<<b<<endl;
    cout<<"Points earned   = 15";
}   else if (b==1) {
    cout<<"Books purchased =  "<<b<<endl;
    cout<<"Points earned   = 5";
}

    
    
    return 0;
}

