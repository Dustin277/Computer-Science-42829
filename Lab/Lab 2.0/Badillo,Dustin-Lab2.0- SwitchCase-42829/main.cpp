/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 23, 2016, 9:45 AM
 * Purpose: Lab 2.0 Switch/ Case
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    int score;
    
    cout<<"What is your test score? (out of 100) "<<endl;
    cin>>score;
    score = score/10;
    
    //map the input and the output
    switch (score) {
    case 10:
    case 9: {
            cout<<"A"<<endl;
            break;
    }
    case 8: {
            cout<<"B"<<endl;
             break;
    }
    case 7: {
            cout<<"C"<<endl;
             break;
    }
    case 6: {
            cout<<"D"<<endl;
             break;
    }
        default: cout<<"F";
    }
                   
    return 0;
}
