/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 16, 2016, 9:45 AM
 * Purpose: dependent ifs
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
float payRate, hrsWrkd, payChk;
float ovrTime=40; //where overtime begins
    //Initialize variables

    //Input values

    cout<<"input Pay Rate ($'s/hr) and Hours Worked both dd.dd format "<<endl;
    cin>>payRate>>hrsWrkd;
            
    //Map the inputs to the outputs
    if (hrsWrkd <= 0){
        payChk=0;
    }else if(hrsWrkd <=40){
        payChk=hrsWrkd*payRate;
    }else if (hrsWrkd <= 98){
        payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    }else{
        payChk = 0; 
    }
  
    //output results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours worked @ $"<<payRate<<"/hr"<<endl;
    //Exit Stage Right!
    return 0;
}

