// RNG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	
	srand(static_cast<unsigned int>(time(0)));   //allows for random number generation

	int randomNumber = rand();
	int die = (randomNumber % 6) + 1;

	cout<<"You rolled a "<<die<<"."<<endl;

	
	return 0;
}

