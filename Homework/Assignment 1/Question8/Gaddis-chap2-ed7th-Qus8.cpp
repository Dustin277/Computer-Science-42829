/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 3, 2016, 12:31 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float subtot, saletax, total, //subtotal, sales tax, Total
            item1 = 12.95,        //Cost of item 1
            item2 = 24.95,        //Cost of item 2
            item3 = 6.95,         //Cost of item 3
            item4 = 14.95,        //Cost of item 4
            item5 = 3.95;         //Cost of item 5
    
    //Calculate the subtotal of the sale
    subtot = item1 + item2+ item3 + item4 + item5;
    
    //Calculate the total Sales Tax at 6%
    saletax = subtot * .06;
    
    //Calculate the Total
    total = subtot + saletax;
    
    //Display each items cost
    cout<<"The price for each item is:"<<endl;
    cout<<"          $"<<item1<<endl;
    cout<<"          $"<<item2<<endl;    
    cout<<"          $"<<item3<<endl;
    cout<<"          $"<<item4<<endl;
    cout<<"          $"<<item5<<endl;
    
    //Display Sub Total
    cout<<"Sub Total $"<<subtot<<endl;
    
    //Display Sales Tax
    cout<<"Sales Tax $"<<saletax<<endl;
    
    //Display the final total
    cout<<"Total     $"<<total<<endl;
    
    
    return 0;
}

