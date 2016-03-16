/* 
 * Author: Dustin Badillo
 * Created on March 9, 2016, 9:45 AM
 * Purpose: Fahrenheit to Celsius
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
    float ceqone, ceqtwo, f, cone = 0, ctwo = 100, fone = 32,ftwo = 212;
    float m=5.0f/9; //static cast 
            
    
    //Constant degrees Fahrenheit for both equations
    cout<<"How many degrees Fahrenheit do you want to convert? "<<endl;
    cin>>f;
    
    //first equation
    ceqone = m * (f - 32);
    
    //second equation
    ceqtwo = (cone + (ctwo - cone)) * ((f - fone) / (ftwo - fone));
            
    cout<<"Answer for equation one "<<ceqone<<endl;
    cout<<"Answer for equation two "<<ceqtwo<<endl;
    
    //Exit Stage Right!
    return 0;
}

