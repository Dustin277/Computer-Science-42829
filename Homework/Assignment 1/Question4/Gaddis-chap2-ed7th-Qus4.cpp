/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on February 29, 2016, 10:00 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float mealcst = 44.50, tax, tipchrg,fincost;
    
    //Calculate the amount of tax for 6.75%
    tax = mealcst * .0675;
    
    //Calculate Tip Charge for a 15% tip
    tipchrg = mealcst * .15;
    
    //Calculate final total bill
    fincost = mealcst + tax + tipchrg;
    
    cout<<"Meal Cost $"<<mealcst<<endl;
    cout<<"tax amount $"<<tax<<endl;
    cout<<"Tip Amount $"<<tipchrg<<endl;
    cout<<"Toal Bill $"<<fincost<<endl;
    return 0;
}

