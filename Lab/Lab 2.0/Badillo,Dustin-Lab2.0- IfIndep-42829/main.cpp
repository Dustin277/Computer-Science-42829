/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 23, 2016, 9:45 AM
 * Purpose: Lab 2.0 Independent if
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    float score;
    
    cout<<"What is your test score? (out of 100) "<<endl;
    cin>>score;
    
    //map the input and the output
    if (score < 60)
        cout<<"F"<<endl;
    if ((score >= 60 ) && (score < 70))
        cout<<"D"<<endl;
    if ((score >= 70 ) && (score < 80))
        cout<<"C"<<endl;
    if ((score >= 80 ) && (score < 90))
        cout<<"B"<<endl;
    if ((score >= 90 ) && (score < 100))
        cout<<"A"<<endl;
    
    return 0;
}

