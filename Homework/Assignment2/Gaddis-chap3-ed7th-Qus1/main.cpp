/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 16, 2016, 9:45 AM
 * Purpose: Question 1, Assignment 2, Gaddis Chap 2 7th ed   pg 171
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants no in-constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float totmils,     //total number of miles it can go in one tank
            gallons,   //total number of the cars gallons
            mpg;       //output the cars total milage
    
    cout<<"How many total miles can your car go in one tank? "<<endl;
    cin>>totmils;
    
    cout<<"What is the total gallon capacity of your cars tank?"<<endl;
    cin>>gallons;
    
    //calculate miles per gallon
    mpg = totmils / gallons;
    
    //display total milage
    cout<<"Your cars total milage is "<<mpg<<" mpg"<<endl;
            
    return 0;
}

