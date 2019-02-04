/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Daniel Mondragon
 * Project 1 - C++EPORDY
 * Created on February 2, 2019, 11:31 PM
 */

#include <cstdlib> //Allows for rand to be used
#include <iostream>  //Allows for cin and cout
#include <cmath>
#include <string> //String Functions
#include <ctime>  //I used this for to make a virtual coin toss
#include <fstream>
#include <iomanip>



using namespace std;



int main(int argc, char** argv) {

    int qPoints=0;//Holds Player 1 points
    int pPoints=0;//Holds Player 2 points
    
    //This is start of the game and it explains the rules
    cout<<"Welcome to C++epordy!!!"<<endl<<endl;
    cout<<"This game is a take on the famous board game Jepordy."<<endl;
    cout<<"The rules are the same as Jepordy which are:"<<endl;
    cout<<"1.) Each player gets a chance to pick a category and a value."<<endl;
    cout<<"For example: If it's player 1's turn, they get to type the category's name first letter and press enter."<<endl;
    cout<<"Then they can type the value in one of those categories and press enter."<<endl;
    cout<<"2.) The higher the value is, the harder the question will be."<<endl;
    cout<<"3.) After a category is chosen, Each player has a chance to ANSWER the question!!!! "<<endl;
    cout<<"4.) Player 1 can press 'q' and Player 2 can press 'p' on the keyboard."<<endl;
    cout<<"5.) The Fastest player to press on their selected letter will get to answer the question and earn points."<<endl;
    cout<<"6.) However, get the wrong answer and you will lose points based on the value of the question."<<endl;
    cout<<"7.) You cannot go back to the same category and value after it has been chosen."<<endl;
    cout<<"8.) The player with the most points wins!"<<endl<<endl<<endl;
    
    cout<<"Input Player 1's name and press enter."<<endl;
    string q; //Holds player 1 name
    getline(cin,q);
    cout<<"Input Player's 2 name and press enter."<<endl;
    string p; // Holds player 2 name
    getline(cin,p);
    cout<<endl;
    
    cout<<"The first player to go up will be based on a coin toss done from the program."<<endl;
    cout<<"Player 1 is Heads and Player 2 is Tails."<<endl;
    cout<<"This coin toss will always be different for every new game."<<endl<<endl;
  
    srand(time(0)); //srand seed generator
    int coinToss=0;
    for (int x = 1;x<2;x++){
        coinToss = 1+(rand()%2);
    }
    if (coinToss == 1){
        cout<<"It's Heads!"<<endl;
        cout<<q<<" will go first!"<<endl<<endl;
    }
    else if (coinToss == 2){
        cout<<"It's Tails!"<<endl;
        cout<<p<<" will go first!"<<endl<<endl;
        //This is what menu game looks like below
    }
    int exit=1;
    do {
    cout<<"The game will end after 5 rounds."<<" Round "<<exit<<endl;
    cout<<"                        C++EPORDY                        "<<endl;
    cout<<"*********************************************************"<<endl;
    cout<<"|  Zodiac Signs  | Video Games | Star Wars | C++ Syntax |"<<endl;
    cout<<"|      100       |    100      |    100    |    100     |"<<endl;
    cout<<"|      200       |    200      |    200    |    200     |"<<endl;
    cout<<"|      300       |    300      |    300    |    300     |"<<endl;
    cout<<"|      400       |    400      |    400    |    400     |"<<endl;
    cout<<"*********************************************************"<<endl;
    cout<<"                        SCORE                            "<<endl;
    cout<<q<<" = "<<qPoints<<"   "<<p<<" = "<<pPoints<<endl;
    cout<<"Type the first letter in lowercase of the category you want to choose and press enter."<<endl;
   
   
            
    int choiceInt; //players choice of value
    string answer; //player's answers
    char fastFirst; // fastest player gets to answer question
    char choice; //which category to choose
    cin>>choice;
    switch(choice){
        case 'z':  //Zodiac Signs Category
            cout<<"Type the amount you would like to play for and press enter"<<endl;
            cin>>choiceInt;
            if(choiceInt==100){  //First Question
                cout<<"What is ruling planet of the astrological sign Taurus?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="venus"){
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else if (answer=="Venus") {
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        qPoints -= 100;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="venus"){
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else if (answer=="Venus") {
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        pPoints -= 100;
                    }
                }
                
            }
            if(choiceInt==200){  //Second Question
                cout<<"This Zodiac sign is represented by two fish."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="pisces"){
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else if (answer=="Pisces") {
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        qPoints -= 200;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="pisces"){
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else if (answer=="Pisces") {
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        pPoints -= 200;
                    }
                }
                
            }
            if(choiceInt==300){  //Third Question
                cout<<"This zodiac has the symbol of the Archer."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="Sagittarius"){
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else if (answer=="sagittarius") {
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        qPoints -= 300;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="Sagittarius"){
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else if (answer=="sagittarius") {
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        pPoints -= 300;
                    }
                }
                
            }
            if(choiceInt==400){  //Fourth Question
                cout<<"This is the name of a person born on the first or last day of a zodiac sign."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is the_______?"<<endl;
                    cin>>answer;
                    if (answer=="cusp"){
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else if (answer=="Cusp") {
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        qPoints -= 400;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is the_______?"<<endl;
                    cin>>answer;
                    if (answer=="cusp"){
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else if (answer=="Cusp") {
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        pPoints -= 400;
                    }
                }
                
            }
            break;
        case 'v':  //Video Games Category
            cout<<"Type the amount you would like to play for and press enter;"<<endl;
            cin>>choiceInt;
            if(choiceInt==100){  //First Question
                cout<<"What is the hero's name in the game Legend of Zelda?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){ //First players turn
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"Who is_______?"<<endl;
                    cin>>answer;
                    if (answer=="link"){
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else if (answer=="Link") {
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        qPoints -= 100;
                    }
                }
                if(fastFirst=='p'){   //Second Players turn
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"Who is_______?"<<endl;
                    cin>>answer;
                    if (answer=="link"){
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else if (answer=="Link") {
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        pPoints -= 100;
                    }
                }
            }
            if(choiceInt==200){  //Second Question
                cout<<"This cube shaped console came out in 2001 and was criticized for its toyish look."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){ //First players turn
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is the_______?"<<endl;
                    cin>>answer;
                    if (answer=="gamecube"){
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else if (answer=="GameCube") {
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        qPoints -= 200;
                    }
                }
                if(fastFirst=='p'){   //Second Players turn
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is the_______?"<<endl;
                    cin>>answer;
                    if (answer=="gamecube"){
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else if (answer=="GameCube") {
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        pPoints -= 200;
                    }
                }
            }
            if(choiceInt==300){  //Third Question
                cout<<"When was the first console released?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){ //First players turn
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"When was_______?"<<endl;
                    cin>>answer;
                    if (answer=="1972"){
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else if (answer=="1972") {
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        qPoints -= 300;
                    }
                }
                if(fastFirst=='p'){   //Second Players turn
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"When was_______?"<<endl;
                    cin>>answer;
                    if (answer=="1972"){
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else if (answer=="1972") {
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        pPoints -= 300;
                    }
                }
            }
            if(choiceInt==400){  //Fourth Question
                cout<<"Who is the main character of Metal Gear Solid?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){ //First players turn
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"Who is_______?"<<endl;
                    cin>>answer;
                    if (answer=="snake"){
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else if (answer=="Snake") {
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        qPoints -= 400;
                    }
                }
                if(fastFirst=='p'){   //Second Players turn
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"Who is_______?"<<endl;
                    cin>>answer;
                    if (answer=="snake"){
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else if (answer=="Snake") {
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        pPoints -= 400;
                    }
                }
            }
            break;
        case 's':   //Star Wars Category
            cout<<"Type the amount you would like to play for and press enter;"<<endl;
            cin>>choiceInt;
            if(choiceInt==100){  //First Question
                cout<<"Who is Luke's real father?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"Who is Darth_______?"<<endl;
                    cin>>answer;
                    if (answer=="Vader"){
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else if (answer=="vader") {
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        qPoints -= 100;
                    }
                }
                    if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"Who is Darth_______?"<<endl;
                    cin>>answer;
                    if (answer=="Vader"){
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else if (answer=="vader") {
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        pPoints -= 100;
                    }
                }
            }
               if(choiceInt==200){ //Second Question
                cout<<"Who played Yoda in The Empire Strikes Back?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"Who is Frank_______?"<<endl;
                    cin>>answer;
                    if (answer=="oz"){
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else if (answer=="Oz") {
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        qPoints -= 200;
                    }
                }
                    if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"Who is Frank_______?"<<endl;
                    cin>>answer;
                    if (answer=="Oz"){
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else if (answer=="oz") {
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        pPoints -= 200;
                    }
                }
            }
               if(choiceInt==300){ //Third Question
                cout<<"The Ewoks live on this forest moon."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="Endor"){
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else if (answer=="endor") {
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        qPoints -= 300;
                    }
                }
                    if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="endor"){
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else if (answer=="Endor") {
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        pPoints -= 300;
                    }
                }
            }
               if(choiceInt==400){ //Fourth Question
                cout<<"This moviemaker from Modesto, CA created the Star Wars Trilogy."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"Who is George_______?"<<endl;
                    cin>>answer;
                    if (answer=="Lucas"){
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else if (answer=="lucas") {
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        qPoints -= 400;
                    }
                }
                    if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"Who is George_______?"<<endl;
                    cin>>answer;
                    if (answer=="Lucas"){
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else if (answer=="lucas") {
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        pPoints -= 400;
                    }
                }
            }
            break;
        case 'c':  //C++ Syntax Category
            cout<<"Type the amount you would like to play for and press enter;"<<endl;
            cin>>choiceInt;
            if(choiceInt==100){  //First Question
                cout<<"What do you use to take an input from the user?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="cin"){
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else if (answer=="Cin") {
                        cout<<"Correct!"<<endl;
                        qPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        qPoints -= 100;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is_______?"<<endl;
                    cin>>answer;
                    if (answer=="cin"){
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else if (answer=="Cin") {
                        cout<<"Correct!"<<endl;
                        pPoints += 100;
                    }
                    else {
                        cout<<"Incorrect. You lose 100 points."<<endl;
                        pPoints -= 100;
                    }
                }
            }
                     if(choiceInt==200){  //Second Question
                cout<<"What are lines of code that begin with // called?"<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What are_______?"<<endl;
                    cin>>answer;
                    if (answer=="comments"){
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else if (answer=="Comments") {
                        cout<<"Correct!"<<endl;
                        qPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        qPoints -= 200;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What are_______?"<<endl;
                    cin>>answer;
                    if (answer=="Comments"){
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else if (answer=="comments") {
                        cout<<"Correct!"<<endl;
                        pPoints += 200;
                    }
                    else {
                        cout<<"Incorrect. You lose 200 points."<<endl;
                        pPoints -= 200;
                    }
                }
            }
                     if(choiceInt==300){  //Third Question
                cout<<"This datatype can store numbers that are up to about 7 digits long."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What is a_______?"<<endl;
                    cin>>answer;
                    if (answer=="Float"){
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else if (answer=="float") {
                        cout<<"Correct!"<<endl;
                        qPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        qPoints -= 300;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What is a_______?"<<endl;
                    cin>>answer;
                    if (answer=="Float"){
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else if (answer=="float") {
                        cout<<"Correct!"<<endl;
                        pPoints += 300;
                    }
                    else {
                        cout<<"Incorrect. You lose 300 points."<<endl;
                        pPoints -= 300;
                    }
                }
            }
                     if(choiceInt==400){  //Forth Question
                cout<<"Block coding for if statements executes all statements if the condition is true between these characters."<<endl;
                cout<<"First one to type their selected letter and presses enter gets to answer!"<<endl;
                cin>>fastFirst;
                if(fastFirst=='q'){
                    cout<<q<<" fill in the blank."<<endl;
                    cout<<"What are_______?"<<endl;
                    cin>>answer;
                    if (answer=="brackets"){
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else if (answer=="Brackets") {
                        cout<<"Correct!"<<endl;
                        qPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        qPoints -= 400;
                    }
                }
                if(fastFirst=='p'){
                    cout<<p<<" fill in the blank."<<endl;
                    cout<<"What are_______?"<<endl;
                    cin>>answer;
                    if (answer=="brackets"){
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else if (answer=="Brackets") {
                        cout<<"Correct!"<<endl;
                        pPoints += 400;
                    }
                    else {
                        cout<<"Incorrect. You lose 400 points."<<endl;
                        pPoints -= 400;
                    }
                }
            }
            break;
        default: ;
            
           
    }
    exit++;
    } 
    
    while (exit<6);{
        if(qPoints>pPoints){
            cout<<q<<" Wins!!!"<<endl;
            cout<<"Score = "<<qPoints;
        }
        else if (pPoints>qPoints){
            cout<<p<<" Wins!!!"<<endl;
            cout<<"Score = "<<pPoints;
        }
    }
    
    return 0;
}

