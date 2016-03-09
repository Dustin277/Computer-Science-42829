/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 9, 2016, 9:45 AM
 * Purpose: Babylonian Square Root Approximation
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants no in-constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables no doubles
    float n, r, guess;
            
    //Initialize variables

    //Input values
    cout<<"what number would you like the find the square root of?"<<endl;
    cin>>n;
    
    //First Approximation 
    guess= n / 2;
    r = n/guess;
    guess = (guess + r) / 2;
    //Output the results
    cout<<"1st Approximation = Square root of( "<<n<<") = r("
        <<r<<") , guess ("<<guess<<")"<<endl;
    
    //2nd Approximation
    r = n/guess;
    guess = (guess + r) / 2;
    //Output the results
    cout<<"2nd Approximation = Square root of( "<<n<<") = r("
        <<r<<") , guess ("<<guess<<")"<<endl;
    
    //3rd approximation
    r = n/guess;
    guess = (guess + r) / 2;
    //Output the results
    cout<<"3rd Approximation = Square root of( "<<n<<") = r("
        <<r<<") , guess ("<<guess<<")"<<endl;
    
    //4th approximation
    r = n/guess;
    guess = (guess + r) / 2;
    //Output the results
    cout<<"4th Approximation = Square root of( "<<n<<") = r("
        <<r<<") , guess ("<<guess<<")"<<endl;
    
    //5th approximation
    r = n/guess;
    guess = (guess + r) / 2;
    //Output the results
    cout<<"5th Approximation = Square root of( "<<n<<") = r("
        <<r<<") , guess ("<<guess<<")"<<endl;
    
    //6th approximation
    r = n/guess;
    guess = (guess + r) / 2;
    //Output the results
    cout<<"6th Approximation = Square root of( "<<n<<") = r("
        <<r<<") , guess ("<<guess<<")"<<endl;
    
            //Exit Stage Right!
    return 0;
}

