/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 *
 * Created on January 19, 2019, 8:13 PM
 * Federal Budget ->  $4.1 trillion https://en.wikipedia.org/wiki/2018_United_States_federal_budget
 * Military Budget -> $700 billion https://militarybenefits.info/2018-defense-budget-overview/
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   float milBdgt,fedBdgt,mlPrcnt;
   milBdgt=7.0e11f;
   fedBdgt=4.1e12f; 
    
   cout<<fixed<<setprecision(2)<<showpoint;
   cout<<"This is the military budget as a percentage of the federal budget.\n";
   cout<<"Military budget = "<<(milBdgt/fedBdgt)*100<<"%"<<endl;
   cout<<"Federal budget  = "<<fedBdgt<<endl;
    
    return 0;
}

