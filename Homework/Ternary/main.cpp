/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 14, 2016, 9:45 AM
 * Purpose: Terary
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants no in-constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {

    bool x;
    bool y;
    
    cout<< "X   Y   !X   !Y   X&&Y   X||Y   X^Y   X^Y^Y   X^Y^X   !(X&&Y)   !X||!Y   !(X||Y)   !X&&!Y" <<endl;
    x=1;
    y=1;
    if (x=true, y=true)
    cout<<(x?'T':'F')<<"   "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"    "<<(!y?'T':'F')<<"     "<<(x&&y?'T':'F')<<"     "<<(x||y?'T':'F')<<"      "<<(x^y?'T':'F')<<"      "<<(x^y^y?'T':'F')<<"        "<<(x^y^x?'T':'F')<<"       "<<(!(x&&y)?'T':'F')<<"         "<<(!x||!y?'T':'F')<<"        "<<(!(x||y)?'T':'F')<<"         "<<(!x&&!y?'T':'F')<<endl;
    
    x=1;
    y=0;
    if (x==true, y==false)
            cout<<(x?'T':'F')<<"   "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"    "<<(!y?'T':'F')<<"     "<<(x&&y?'T':'F')<<"     "<<(x||y?'T':'F')<<"      "<<(x^y?'T':'F')<<"      "<<(x^y^y?'T':'F')<<"        "<<(x^y^x?'T':'F')<<"       "<<(!(x&&y)?'T':'F')<<"         "<<(!x||!y?'T':'F')<<"        "<<(!(x||y)?'T':'F')<<"         "<<(!x&&!y?'T':'F')<<endl;
    
    x=0;
    y=1;
    if (x==false, y==true)
            cout<<(x?'T':'F')<<"   "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"    "<<(!y?'T':'F')<<"     "<<(x&&y?'T':'F')<<"     "<<(x||y?'T':'F')<<"      "<<(x^y?'T':'F')<<"      "<<(x^y^y?'T':'F')<<"        "<<(x^y^x?'T':'F')<<"       "<<(!(x&&y)?'T':'F')<<"         "<<(!x||!y?'T':'F')<<"        "<<(!(x||y)?'T':'F')<<"         "<<(!x&&!y?'T':'F')<<endl;
   
    x=0;
    y=0;
    if (x==false, y==false)
            cout<<(x?'T':'F')<<"   "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"    "<<(!y?'T':'F')<<"     "<<(x&&y?'T':'F')<<"     "<<(x||y?'T':'F')<<"      "<<(x^y?'T':'F')<<"      "<<(x^y^y?'T':'F')<<"        "<<(x^y^x?'T':'F')<<"       "<<(!(x&&y)?'T':'F')<<"         "<<(!x||!y?'T':'F')<<"        "<<(!(x||y)?'T':'F')<<"         "<<(!x&&!y?'T':'F')<<endl;
    return 0;
}

