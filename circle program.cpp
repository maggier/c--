//Maggie
//Sept 5 2013
//Circle program
;
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int area, circumference, r;
    const int pi = 3.14;
    
    cout<< "Area or circumference";
    cin>> area, circumference;
    int If (area); {
        cout<< "Radius?";
        cin>> r;
        area = r * r * pi;
    }
    int Else (circumference); {
        cout<< "Radius?";
        cin>> r;
        circumference = pi * r * 2;
    }
    
    return 0;
