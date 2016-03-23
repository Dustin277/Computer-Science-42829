/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 21, 2016, 9:45 AM
 * Purpose: Average rainfall page 172
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
    float weight, total;
    
    //ask how much weight the pallet is 
    cout<<"How much does the pallet weigh with the widgets stacked on it? (display as hh.hh)"<<endl;
    cin>>weight;
    
    //Calculate the amount of widgets with each weighing 9.2lbs
    total = weight/ 9.2;
    
    //display how many widgets were stacked on top
    cout<<"There are approximately "<<total<<" Widgets stacked on top of this pallet"<<endl;

    return 0;
}


