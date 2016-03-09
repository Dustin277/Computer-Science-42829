/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 7, 2016, 9:39 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float loanamt = 10000, intrate = .01, numbpay, top, bottom, monthly, check; //loan amount = 10000, Interest rate = 12%, Number of payments
    
    
    //calculate monthly payments
    
    top = intrate * (pow (1+intrate, 36)); //top of the equation for monthly interest
    
    bottom = (pow (1+intrate, 36)) - 1;    //bottom of the equation for monthly interest
    
    monthly = (top / bottom) * 10000;      //top and bottom part of the equation put together and multiplied by the total loan
    
    cout<<"Your monthly payment $"<<monthly<<endl;
    
    //Loan Check
    check = (((pow (1+intrate, 36)) - 1) * monthly) / ((pow (1+intrate, 36)) * intrate); //the previous equation inverted to see if the answer is correct
    
    cout<<"Total initial price without interest $"<<check<<endl;
    return 0;
}

