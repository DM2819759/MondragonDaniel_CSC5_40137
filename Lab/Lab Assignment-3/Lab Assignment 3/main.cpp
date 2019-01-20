

/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 * Description: Calculate the percentage Gas Tax on a gallon of gas,
 * and the profit made from a gallon of gas given
 * Created on January 16, 2019, 6:41 PM
 * Taxes -> http://watchdog.org/232083/california-gas-taxes
 * Profit -> http://www.forbes.com/2011/05/10/oil-company-earnings.html
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    const int PERCENT=100;
    //Declare variables
    float   u,      //Consumers amount of gas/gallon
            stateTx, //State Excise tax
            salesTx, //California Sales tax
            tradeF,  //Cap and Trade fee
            fedTx,   //Federal Excise tax
            stationP, //Station price
            oilPrf,  //Oil company profit percentage
            oilD;    //Oil company profit in dollar amounts
    
    
    //Set variable values 
    stateTx = 0.39;
    salesTx = 0.08;
    tradeF =  0.10;    
    fedTx =   0.184;
    oilPrf =  0.065;     
            
    //Output displayed here
    cout<<"This program will calculate percentage gas tax per gallon of gas. \n"
    <<"As well as the profit oil companies make per gallon of gas given."<<endl;
    cout<<"Input the amount it cost you per gallon the last time you put gas in your car.\n";
    cin>>u;
    
    stationP = (u-stateTx-fedTx-tradeF) / (1+salesTx);
    oilD = (u*oilPrf);
    
    cout<<fixed<<setprecision(3)<<showpoint;
    cout<<"Your Pump Price               = $"<< u <<"/gallon"<<endl;
    cout<<"California State Excise tax   = $"<< stateTx<<"/gallon\n";
    cout<<"Federal State Excise tax      = $"<< fedTx<<"/gallon\n";
    cout<<"California State Sales tax    = $"<<stationP*salesTx<<"/gallon\n";
    cout<<"Cap and Trade Fee tax         = $"<< tradeF<<"/gallon\n";
    cout<<"Station Price                 = $"<<stationP<<"/gallon\n";
    cout<<"Oil Company Profit Percentage = "<<oilPrf*PERCENT<<"%/gallon\n";
    cout<<"Dollar amount of profit gas companies make = $"<<oilD<<"/gallon\n";
    cout<<"Total Percentage Tax          = "
            <<((u-stationP)/stationP)*PERCENT <<"%/gallon\n";
    
    return 0;
}

