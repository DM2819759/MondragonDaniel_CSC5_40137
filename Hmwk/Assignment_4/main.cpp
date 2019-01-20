/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 *
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

    char choice;
    
    cout<<"Menu Program\n";
    cout<<"Enter 1 for Gaddis_9thEd_Chap5_Prob1_Sum\n";
    cout<<"Enter 2 for Gaddis_9thEd_Chap5_Prob13_MinMax\n";
    cout<<"Enter 3 for Gaddis_9thEd_Chap5_Prob22_Rectangle\n";
    
    cin>>choice;
    
        switch (choice) 
        {
            case ('1') :{
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
            case ('2') :{
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
            case ('3') :{
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

        default:    cout<<"Exiting Menu, no problem selected"<<endl;
 
        }
           
    
    return 0;
}

