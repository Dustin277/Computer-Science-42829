/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 3, 2016, 9:02 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float ocanfiv, ocansev, ocanten; // Calculating the ocean rising after 5, 7, and 10 years
    
    //How much higher the level of the ocean is after 5 years
    ocanfiv = 5 * 1.5;
    
    //How much higher the level of the ocean is after 7 years
    ocansev = 7 * 1.5;
    
    //How much higher the level of the ocean is after 10 years
    ocanten = 10 *1.5;
    
    //Display how much higher the ocean will be after 5, 7, 10
    cout<<"The ocean will be "<<ocanfiv<<" millimeters higher after 5 years"<<endl;
    
    cout<<"The ocean will be "<<ocansev<<" millimeters higher after 7 years"<<endl;
    
    cout<<"The ocean will be "<<ocanten<<" millimeters higher after 10 years"<<endl;
            
    return 0;
}

