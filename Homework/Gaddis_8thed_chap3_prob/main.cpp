/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 7, 2016, 10:44 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */

 const float PI = atan(1.0)*4;
 
int main(int argc, char** argv) {

    float dipizza=12, slices, echslic = 14.125, totarea;
    
    //Area
    totarea = (PI * (dipizza * dipizza)) / 4;
    
    //number of slices
    slices = (totarea / echslic) + 1;
    
    cout<<slices<<endl;
            
    
    
    
   
    return 0;
}

