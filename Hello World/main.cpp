/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 16, 2016, 9:45 AM
 * Purpose: 
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
    float omsalary,
            nsalary,
            nmsalary,
            backpay,
            bkpymon,
            osalary,
            percinc = 0.076;
    //Initialize variables

    //Input values
    cout<< "What is your old yearly salary? "<<endl; 
    cin>>osalary;
    
    //calculate monthly salary
    omsalary = osalary / 12;
    
    //New salary
    nsalary = osalary * ( 1 + percinc);
    
    //New monthly salary
    nmsalary = nsalary / 12;
    
    //Months of back pay
    cout<<"how many months of back pay are you owed? "<<endl;
    cin>>bkpymon;
    
    
    //Amount of back pay
    backpay = (nsalary - osalary) / bkpymon;
    
    cout<<"Your old Annual salary was  $"<<osalary<<endl;
    cout<<"Your old Monthly salary was $"<<omsalary<<endl;
    cout<<"Your new Annal salary is    $"<<nsalary<<endl;
    cout<<"Your new Monthly salary is  $"<<nmsalary<<endl;
    cout<<"The amount owed in back pay $"<<backpay<<endl;

    //Exit Stage Right!
    return 0;
}

