/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 16, 2016, 9:45 AM
 * Purpose: Question 1, Assignment 2, Gaddis Chap 2 7th ed   pg 171
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants no in-constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    float classA, classB, classC, totcost;
    
    cout<<"How many class A seats did you buy?"<<endl;
    cin>>classA;
    
    cout<<"How many class B seats did you buy?"<<endl;
    cin>>classB;
    
    cout<<"How many class C seats did you buy?"<<endl;
    cin>>classC;
    
    totcost = (classA * 15) + (classB * 12) + (classC * 9);
    
    cout<<"The total cost for all your tickets is $"<<setprecision (4)<<totcost<<endl;
    cout<<"The number of class A tickets sold were "<<classA<<endl;
    cout<<"The number of class B tickets sold were "<<classB<<endl;
    cout<<"The number of class C tickets sold were "<<classC<<endl;
            
            
    return 0;
}

