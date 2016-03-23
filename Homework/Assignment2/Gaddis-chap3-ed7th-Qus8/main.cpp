/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 21, 2016, 9:45 AM
 * Purpose: How much insurance page 172
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
    
    float insur, cost;
    
    //Ask the replacement cost
    cout<<"How much would the replacement cost be?"<<endl;
    cin>>cost;
    
    //calculate the minimum amount that should be insured
    insur = cost * .80;
    
    //display the amount of insurance you need covered
    cout<<"You need a minimum of $"<<insur<<" of insurance"<<endl;
            

    return 0;
}

