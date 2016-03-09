/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on February 29, 2016, 7:25 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float payAmount = 1700, payPeriods = 26, annualPay;
    
    annualPay = payAmount * payPeriods;
    
    cout<<"Annual Pay $"<<annualPay<<endl;

    return 0;
}

