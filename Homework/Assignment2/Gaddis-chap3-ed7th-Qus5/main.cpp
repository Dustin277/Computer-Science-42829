/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 21, 2016, 9:45 AM
 * Purpose: Box office
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
    float adult, child, intprof, boxprof, amtpaid;
    char movie[20];
    
    cout<<"What is the name of the movie?"<<endl;
    cin.getline (movie,20);
    
    cout<<"How many Adult tickets were sold? "<<endl;
    cin>>adult;
    
    cout<<"How many Children tickets were sold? "<<endl;
    cin>>child;
    
    intprof = (adult * 6) + (child * 3);
    
    boxprof = intprof * .20;
    
    amtpaid = intprof * .80;
    
    cout<<"Movie Name: "<<movie<<endl;
    
    cout<<"Adult Tickets Sold: "<<adult<<endl;
    
    cout<<"Child Tickets Sold: "<<child<<endl;
    
    cout<<"Gross Box office profit: "<<intprof<<endl;
    
    cout<<"Net Box Office Profit: "<<boxprof<<endl;
    
    cout<<"Amount Paid to Distributor "<<amtpaid<<endl;
            
    
    return 0;
}

