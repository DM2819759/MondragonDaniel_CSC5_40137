/* 
 * File:   main.cpp
 * Author: Daniel M
 * Created on January 10, 2019, 12:46 PM
 * Purpose:  Menu example
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVYRMN=12;//Conversion 12 months in a year
const float PERCENT=100;//Conversion to percentage
const float PENNIES=100;//Conversion to pennies
const float HALFPNY=0.005F;//Half a penny
const float CNVLBGR=4.53592e2f;//Conversion from lbs to grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap4 Prob10 MathTutor"<<endl;
    cout<<"Type 2 for Gaddis 9thEd Chap3 Prob19 MonthlyPayment"<<endl;
    cout<<"Type 3 for Savitch 9thEd Chap2 Prob1 SodaPop"<<endl;
    cout<<"Type 4 for Gaddis 9thEd Chap4 Prob8 SortNames\n";
    cout<<"Type 5 for Gaddis 9thEd Chap4 Prob11 Books\n";
    cout<<"Type 6 for Gaddis 9thEd Chap4 Prob12 Bankcharges\n";
    cout<<"Type 7 for Gaddis 9thEd Chap4 Prob14 Race\n";
    cout<<"Type 8 for Savitch 9thEd Chap3 Prob1 RockPaperScissors\n";
    cout<<"Type 9 for Savitch 9thEd Chap3 Prob4 CompatibleSigns\n";
    cout<<"Type 10 for Savitch 9thEd Chap3 Prob3 Roman Conversion\n";
    
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{
                    //Set the random number seed
                    srand(static_cast<unsigned int>(time(0)));

                    //Declare all Variables Here
                    unsigned short op1,op2,answer,test;

                    //Input or initialize values Here
                    op1=rand()%900+100;//3 digit number   [100-999]
                    op2=rand()%999+1;  //1-3 digit number [1-999]

                    //Process/Calculations Here
                    answer=op1+op2;

                    //Output Located Here
                    cout<<setw(6)<<op1<<endl;
                    cout<<"+"<<setw(5)<<op2<<endl;
                    cout<<"------"<<endl;
                    cout<<(answer<1000?"   ":"  ");
                    cin>>test;
                    cout<<endl<<(answer==test?"Correct Answer":"Incorect Answer")<<endl;

                    break;
               }
        case '2':{
                    //Declare Variables
                    float monPymt,//Monthly Payment in $'s
                          intRate,//Interest Rate per year
                          loanAmt,//Loan amount in $'s
                          totPaid,//Total amount paid in $'s
                          intPaid;//Interest paid
                    int   nMnths;//Number of months

                    //Initialize or input i.e. set variable values
                    cout<<"Loan calculator program"<<endl;
                    cout<<"Input Loan Amount in $'s,"<<endl<<
                          "Interest Rate in %/yr, "<<endl<<
                          "and the number of Months to pay"<<endl;
                    cin>>loanAmt>>intRate>>nMnths;

                    //Map inputs -> outputs
                    intRate/=CNVYRMN;//Convert to %/month
                    intRate/=PERCENT;//Convert to decimal value per month
                    float temp=pow(1+intRate,nMnths);//Utility Variable
                    monPymt=intRate*temp*loanAmt/(temp-1);//Monthly payment
                    int iPymt=(monPymt+HALFPNY)*PENNIES;//Convert Payment to Pennies
                    monPymt=iPymt/PENNIES;//Converting back to Dollars
                    totPaid=monPymt*nMnths;//Total amount paid back
                    intPaid=totPaid-loanAmt;//Interest paid

                    //Display the outputs
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Loan Amount      = $"<<setw(10)<<loanAmt<<endl;
                    cout<<"Interest Rate    =  "<<setw(10)<<intRate*PERCENT<<"%/month"<<endl;
                    cout<<"Number of months =  "<<setw(7)<<nMnths<<endl;
                    cout<<"Monthly Payment  = $"<<setw(10)<<monPymt<<endl;
                    cout<<"Total Payment    = $"<<setw(10)<<totPaid<<endl;
                    cout<<"Interest Paid    = $"<<setw(10)<<intPaid<<endl;

                    break;
               }
        case '3':{
                    //Declare Variables
                    float   wD,//Weight in lbs of the dieter
                            ms,//Mass of sweetener that killed mouse in grams
                            mm,//Mass of mouse in grams
                            msp,//Mass of soda pop in grams
                            csp;//Soda pop concentration
                    int nCans;//Number of cans 

                    //Initialize or input i.e. set variable values
                    ms=5;     //5 grams that kill the mouse
                    mm=35;    //35 grams mass of mouse
                    msp=350;  //350 grams in a soda pop can
                    csp=.001f;//1/10 of 1%
                    cout<<"Program to calculate limit of Soda Pop Consumption"<<endl;
                    cout<<"Input the desired dieters weight in lbs"<<endl;
                    cin>>wD;

                    //Map inputs -> outputs
                    //nCans=wD*CNVLBGR*ms/mm/msp/csp;
                    nCans=wD*CNVLBGR*ms/(mm*msp*csp);

                    //Display the outputs
                    cout<<"The maximum number of soda pop cans"<<endl;
                    cout<<"which can be consumed are = "<<nCans<<endl;

                    break;
               }
        case '4' :{
            
                    string texta, textb, textc; 
            
                    cout<<"Sorting Names\n"
                    <<"Input 3 names\n";
                    cin>>texta;
                    cin>>textb;
                    cin>>textc;

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
                    break;
                }
        case '5' :{
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
            break;
                }
        case '6' :{
                            float a,c,m,low,n;
                            m=10.00;
                            low=15.00;       
                            n=0.00;
                               cout<<"Monthly Bank Fees\n"
                        <<"Input Current Bank Balance and Number of Checks\n";
                        cin>> a>> c;
                        cout<<fixed<<setprecision(2)<<fixed;


                        if (c>=60&&a>0&&a<400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.04<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<low<<endl;
                            cout<<"New Balance $    "<<a-(m+low+(c*0.04));


                        } else if (c>=40&&c<=59&&a>0&&a<400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.06<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<low<<endl;
                            cout<<"New Balance $    "<<a-(m+low+(c*0.06));


                        }else if (c>=20&&c<=39&&a>0&&a<400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.08<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<low<<endl;
                            cout<<"New Balance $    "<<a-(m+low+(c*0.08));


                        } else if (c<20&&c>0&&a>0&&a<400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.10<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<low<<endl;
                            cout<<"New Balance $    "<<a-(m+low+(c*0.10));


                        } else if (a<0){
                            cout<<"Urgent Message!\n";
                            cout<<"Your account is overdrawn";
                        } else if (c<0){
                            cout<<"Cannot accept a negative value for the number of checks\n";
                        } else if (c>=60&&a>=400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.04<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<n<<endl;
                            cout<<"New Balance $    "<<a-(m+(c*0.04));


                        } else if (c>=40&&c<=59&&a>=400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.06<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<n<<endl;
                            cout<<"New Balance $    "<<a-(m+(c*0.06));


                        }else if (c>=20&&c<=39&&a>=400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.08<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<n<<endl;
                            cout<<"New Balance $    "<<a-(m+(c*0.08));


                        } else if (c<20&&c>0&&a>=400) {
                            cout<<"Balance     $   "<<a<<endl;
                            cout<<"Check Fee   $     "<<c*0.10<<endl;
                            cout<<"Monthly Fee $    "<<m<<endl;
                            cout<<"Low Balance $    "<<n<<endl;
                            cout<<"New Balance $    "<<a-(m+(c*0.10));


                        }
            
            break;
                }
        case '7' :{
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
            
            break;
                }
        case '8' :{
                    char choice, choiceb;
                    cout<<"Rock Paper Scissors Game\n"<<"Input Player 1 and Player 2 Choices"<<endl;
                    cin>> choice>> choiceb;

                  
                    if  (choice == 'P' && choiceb == 'R') 
                    cout<<"Paper covers rock.";
                    else if (choice == 'R' && choiceb == 'P')
                    cout<<"Paper covers rock.";    
                    else if (choice == 'p' && choiceb == 'r')
                    cout<<"Paper covers rock.";
                    else if (choice == 'r' && choiceb == 'p')
                    cout<<"Paper covers rock.";


                    else if (choice == 'R' && choiceb == 'S')
                    cout<<"Rock breaks scissors.";
                    else if (choice == 'S' && choiceb == 'R')
                    cout<<"Rock breaks scissors.";
                    else if (choice == 'r' && choiceb == 's')
                    cout<<"Rock breaks scissors.";
                    else if (choice == 's' && choiceb == 'r')
                    cout<<"Rock breaks scissors.";


                    else if (choice == 'P' && choiceb == 'S')
                    cout<<"Scissors cuts paper."; 
                    else if (choice == 'S' && choiceb == 'P')
                    cout<<"Scissors cuts paper.";
                    else if (choice == 'p' && choiceb == 's')
                    cout<<"Scissors cuts paper.";
                    else if (choice == 's' && choiceb == 'p')
                    cout<<"Scissors cuts paper.";

                    else if (choice = choiceb)
                    cout<<"Nobody wins.";
                    else 
                    cout<<"Try again";
            
            break;
                }
        case '9' :{
            
            
            break;    
                }
        case '10' :{
            
            
            
            
            break;    
                }
        
           
         default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}