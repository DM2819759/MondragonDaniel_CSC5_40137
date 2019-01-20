/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mondr
 *
 * Created on January 15, 2019, 9:45 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char choice, choiceb ;
    
    cout<<"Rock Paper Scissors Game\n"<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>> choice>>choiceb;
    
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
    
    
    
    return 0;
}

