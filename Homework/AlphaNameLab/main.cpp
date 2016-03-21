/*
 /* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 16, 2016, 9:45 AM
 * Purpose: Lab alphabetizing names
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

//User Libraries

//Global Constants no in-constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    const int SIZE = 10;
    char firstName [SIZE], secondName [SIZE];
    
    //Three Names
    cout<<"Enter the first name "<<endl;
    cin.getline(firstName, SIZE);
    cout<<"Enter the second name"<<endl;
    cin.getline(secondName, SIZE);
    
    //compare them with strcmp
    if (strcmp (firstName, secondName) <= 0)
        cout<firstName<<endl;
         
 

    return 0;
}

