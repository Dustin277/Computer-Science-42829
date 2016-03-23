/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 23, 2016, 9:45 AM
 * Purpose: Lab 2.0 Dependent ifs
 */

//System Libraries
#include <iostream>

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
    else if (score < 70 )
        cout<<"D"<<endl;
    else if (score < 80 )
        cout<<"C"<<endl;
    else if (score < 90 )
        cout<<"B"<<endl;
    else if (score >= 90 )
        cout<<"A"<<endl;
    
    return 0;
}
