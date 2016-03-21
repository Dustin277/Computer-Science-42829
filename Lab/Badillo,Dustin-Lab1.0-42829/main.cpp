/* 
 * File:   main.cpp
 * Author: Dustin Badillo
 * Created on March 21, 2016, 9:45 AM
 * Purpose: LAB 1 Lottery
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<<"Type 1 to solve the Lottery Lab"<<endl;
    cout<<"Type 2 to solve the Truth Question"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    
    char choice;
    cin>>choice;
    
    switch(choice){
        case '1':{
    float win, finsum, taxpen, marrpen, sumpen;
    
    cout<<"How much did you win in the lottery? "<<endl;
    cin>>win;
    
    //lump sum penalty 62%
    sumpen = win * .38;
    
    //tax penalty 52%
    taxpen = sumpen * .48;
    
    //Marriage equity 50%
    marrpen = taxpen * .50;
    
    //Final winnings
    cout<<"Your final total winnings is $"<<marrpen<<endl;
    break;
    }
    
        case '2':{
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
    break;
        }
        default:{
            cout<<"Exit?"<<endl;
        }
    };
    return 0;
}

