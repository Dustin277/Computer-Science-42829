/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 21, 2016, 9:45 AM
 * Purpose: Question 4
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants no in-constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    float rainone, raintwo, rainthr, average; 
    string monone, montwo, monthr;
    
    cout<<"State the name of the first month"<<endl;
    cin>>monone;
    cout<<"Average rain fall for the first month (in inches (hh.hh)) "<<endl;
    cin>>rainone;
    
    cout<<"State the name of the second month"<<endl;
    cin>>montwo;
    cout<<"Average rain fall for the second month (in inches (hh.hh)) "<<endl;
    cin>>raintwo;
    
    cout<<"State the name of the third month"<<endl;
    cin>>monthr;
    cout<<"State the average rain fall in the third month (in inches (hh.hh)) "<<endl;
    cin>>rainthr;
    
    //calculate the average rainfall 
    average = (rainone + raintwo + rainthr) / 3;
    
    cout<<"The average rainfall for "<<monone<<" "<<montwo<<" and "<<monthr<<" is "<<average<<" inchs"<<endl;
    return 0;
}

