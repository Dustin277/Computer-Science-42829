/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 3, 2016, 1:04 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float mpg, gallons = 12, miles = 350;
    
    //Calculate the Miles per Gallon of the car
    mpg = miles / gallons;
    
    //Display the miles per gallon
    cout<<"This cars MPG is "<<mpg<<endl;
    return 0;
}


