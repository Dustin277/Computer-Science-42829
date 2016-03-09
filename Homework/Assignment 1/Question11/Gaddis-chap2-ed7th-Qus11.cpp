/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: RazerKrait
 *
 * Created on March 3, 2016, 1:17 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float galtank = 20, mpgtown =  21.5, mpghigh = 26.8, disttwn, disthgh; //Car tank total gallons, MPG driving town, MPG driving highway, Distance in Town, Distance on highway
    
    //Calculate the distance if driving in the town
    disttwn = galtank * mpgtown;
    
    //Calculate the distance if driving on highway
    disthgh = galtank * mpghigh;
    
    //Display Distance of tank of a tank of gas in town
    cout<<"Distance a person can drive on a tank of gas when in town "<<disttwn<<" Miles"<<endl;
    cout<<"Distance a person can drive on a tank of gas when on highway "<<disthgh<<" Miles"<<endl;
    return 0;
}

