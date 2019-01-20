/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 *
 * Created on January 17, 2019, 5:47 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    
    string texta, textb, textc;
    cout<<"Sorting Names\n"
<<"Input 3 names\n";
cin>>texta;
cin>>textb;
cin>>textc;

cout<<endl;
  if (texta<textb&&textb<textc) {
    cout<<texta<<endl;
    cout<<textb<<endl;
    cout<<textc;
} else if (texta<textc&&textc<textb) {
    cout<<texta<<endl;
    cout<<textc<<endl;
    cout<<textb;
    
} else if (textb<texta&&texta<textc) {
    cout<<textb<<endl;
    cout<<texta<<endl;
    cout<<textc;
    
} else if (textb<textc&&textc<texta) {
   cout<<textb<<endl;
   cout<<textc<<endl;
   cout<<texta;
} else if (textc<texta&&texta<textb) {
    cout<<textc<<endl;
    cout<<texta<<endl;
    cout<<textb;
    
} else {
    cout<<textc<<endl;
    cout<<textb<<endl;
    cout<<texta;
    
    
}
    
    
    
    
    
    return 0;
}

