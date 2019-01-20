/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 17, 2019, 9:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string name1, name2, name3;
    float a,b,c;
    
 cout<<"Race Ranking Program\n"
<<"Input 3 Runners\n"
<<"Their names, then their times\n";
cin>>name1>>a;
cin>>name2>>b;
cin>>name3>>c;

if (a<b&&b<c&&a>0&&b>0&&c>0){
    cout<<name1<<a<<endl;
    cout<<name2<<b<<endl;
    cout<<name3<<" "<<c;
    
}else if (a<c&&c<b&&a>0&&b>0&&c>0){
    cout<<name1<<a<<endl;
    cout<<name3<<" "<<c<<endl;
    cout<<name2<<b;
    
}else if (b<a&&a<c&&a>0&&b>0&&c>0){
    cout<<name2<<b<<endl;
    cout<<name1<<a<<endl;
    cout<<name3<<" "<<c;
    
}else if (b<c&&c<a&&a>0&&b>0&&c>0){
    cout<<name2<<b<<endl;
    cout<<name3<<" "<<c<<endl;
    cout<<name1<<a;
    
}else if (c<a&&a<b&&a>0&&b>0&&c>0){
    cout<<name3<<" "<<c<<endl;
    cout<<name1<<a<<endl;
    cout<<name2<<b;
    
}else if (c<b&&b<a&&a>0&&b>0&&c>0){
    cout<<name3<<" "<<c<<endl;
    cout<<name2<<b<<endl;
    cout<<name1<<a;
    
} else if (a<0){
    cout<<"Can't accept negative values";
} else if (b<0){
    cout<<"Can't accept negative values";
}else if (c<0){
    cout<<"Can't accept negative values";
}else {
    
}
    
    
    return 0;
}

