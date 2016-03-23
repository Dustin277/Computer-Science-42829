/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 23, 2016, 9:45 AM
 * Purpose: Lab 2.0 Ternary Operators
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
    cout<<((score < 60)? "F":
           (score < 70)? "D":
           (score < 80)? "C":
           (score < 90)? "B": "A")<<endl;
    return 0;
}

