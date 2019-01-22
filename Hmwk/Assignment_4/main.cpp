/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 * Purpose: Lab Assignment 6
 * Created on January 18, 2019, 11:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char choice; //"choice" is declared
    //Output for menu starts here!
    cout<<"Menu Program\n";
    cout<<"Enter 1 for Gaddis_9thEd_Chap5_Prob1_Sum\n";
    cout<<"Enter 2 for Gaddis_9thEd_Chap5_Prob13_MinMax\n";
    cout<<"Enter 3 for Gaddis_9thEd_Chap5_Prob22_Rectangle\n";
    cout<<"Enter 4 for Gaddis_9thEd_Chap5_Prob7_PayInPennies\n";
    
    cin>>choice; //User makes input here for menu selection
    
        switch (choice) 
        {
            case '1' :{
                               int v,t,n;
                                v=0;
                                t=0;
                                cout<<"Sum = ";
                                cin>>v;


                            while (v<0)
                            {

                              cout<<"Enter positive values only!";


                            }
                             for (n=1; n<= v; n++)
                                    {

                                t = n + t;

                                    }
                                cout<<t;
                   break; 
                    }
            case '2' :{
                                cout<<"This program will find the smallest, and the largest number the user inputs.\n";
                                cout<<"Type -99 when you are done."<<endl;
                               int n,i,h,low;
                                 i=0;
                                 n=0;
                                while (n != -99)
                                {
                                    cin>>n;
                                        if (i==0)
                                    {

                                     h=n;
                                     low=n;
                                    }
                                         else 
                                    {
                                    if (n>h&&n!=-99)
                                    h=n;
                                    else if (n<low&&n!=-99)
                                    low=n;                                   
                                    }
                                    i++;
                                }
                            cout<<"Smallest number in the series is "<<low<<endl;
                            cout<<"Largest  number in the series is "<<h;
                    break;
                    }
            case '3' :{
                cout<<"Type any number up to 15, and any letter to see a rad rectangle!"<<endl;
                      int n,loop,L;
                      char a;
                      cin>>n>>a;
                      while (n<=15)
                      {
                          for (loop=0;loop<n;loop++)
                           {
                              for(int j=0;j<n;j++)
                               {
                                 cout<<a;
                                }
                                 if (loop+1<n)
                                  {
                                    cout<<endl;
                                  }
                            }
                                    n=16;
                       } 
               
                    break;      
                    } 
            case '4' :{
                cout<<"This program will calculate a person's wage who earns a penny the first day"<<endl;
                cout<<"which doubles each day after the first.\n";
                cout<<"Type a number for how many days will this go far."<<endl;
                        
                            float d,p,t,k,f;
                                d=0.00;
                                t=0.00;
                                cin>>d;

                            cout<<fixed<<setprecision(2)<<showpoint;
                            while (d<1)
                            {
                            cout<<"Cannot accept a value less than 1.";
                            }
                            for (p=0;p<=d;p++)
                            {

                             t=(p-1);



                            }
                            k=t*t;
                            f=k+d;
                            cout<<"Pay = $"<<(f)/100;

                
                
                    break;
                    }

        default:    cout<<"Exiting Menu, no problem selected"<<endl;
 
        }
           
    
    return 0;
}

