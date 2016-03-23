/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 21, 2016, 9:45 AM
 * Purpose: How many calories page 172
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

    float cookies, cal;
    
    //Ask how many cookies they ate
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookies;
    
    //calculate how many calories consumed
    cal = cookies * 75;
    
    //Display the amount of calories
    cout<<"You consumed "<<cal<<" calories from "<<cookies<<" cookies"<<endl;
    
    return 0;
}

