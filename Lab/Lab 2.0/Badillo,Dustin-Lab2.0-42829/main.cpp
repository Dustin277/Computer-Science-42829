/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 23, 2016, 9:45 AM
 * Purpose: Lab 2.0 Ternary Operators
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
    cout<<"Type 1 to solve Independent If"<<endl;
    cout<<"Type 2 to solve Ternary"<<endl;
    cout<<"Type 3 to solve dependent if"<<endl;
    cout<<"Type 4 to solve case/switch"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
            case '1':{//Independent If
               float score;
        cout<<"What is your test score? (out of 100) "<<endl;
        cin>>score;
    
     //map the input and the output
        if (score < 60)
        cout<<"F"<<endl;
        if ((score >= 60 ) && (score < 70))
        cout<<"D"<<endl;
        if ((score >= 70 ) && (score < 80))
        cout<<"C"<<endl;
        if ((score >= 80 ) && (score < 90))
        cout<<"B"<<endl;
        if ((score >= 90 ) && (score < 100))
        cout<<"A"<<endl;
                break;
            }
            case '2':{//Ternary
                    float score;
        cout<<"What is your test score? (out of 100) "<<endl;
        cin>>score;
        //map the input and the output
        cout<<((score < 60)? "F":
           (score < 70)? "D":
           (score < 80)? "C":
           (score < 90)? "B": "A")<<endl;
                break;
            }
            case '3':{//dependent if
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
                break;
            }
            case '4':{
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
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}
