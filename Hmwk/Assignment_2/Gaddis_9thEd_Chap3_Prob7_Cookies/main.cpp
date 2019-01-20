/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 11, 2019, 10:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float c, cal;
    cout<<"Calorie Counter\n";
cout<<"How many cookies did you eat?\n";
cin>>c;

cal = c * 75;
cout<<"You consumed " <<cal   <<" calories.";
    return 0;
}

