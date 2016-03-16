/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 9, 2016, 9:45 AM
 * Purpose: Salary
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
    if (hrsWrkd <= ovrTime)payChk=hrsWrkd*payRate;
    if (hrsWrkd > ovrTime)payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    if(hrsWrkd < 0 || hrsWrkd > 98)payChk = 0; 
  
    //output results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours worked @ $"<<payRate<<"/hr"<<endl;
    //Exit Stage Right!
    return 0;
}

