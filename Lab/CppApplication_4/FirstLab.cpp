/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 2, 2016, 9:59 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float googrev = 66e9f, usatax = .60, iretax = 87.5, googusa, googire, monysve;
    
    //Calculating Google's total revenue after USA Tax
    googusa = googrev * usatax;
    
    //Calculating Google's total revenue after Ireland's Tax
    googire = googrev * iretax;
    
    //Calculating money saved if Google moved to Ireland
    monysve = googire - googusa;
    
    //Display output
    
    cout<< "Google's total revenue after taxes in US                          $"<<googusa<<endl;
    cout<< "Google's total revenue after taxes in Ireland                     $"<<googire<<endl;
    cout<< "This is how much money Google would save if they moved to Ireland $"<<monysve<<endl;
    return 0;
}

