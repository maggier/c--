//Roy Howie
//if else statements

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	const int pi = 3.14159;
	int radius, answer;
	string reply;

	cout<<"Enter a radius: "<<endl;
	cin>>radius;

	cout<<"Circumference or area?"<<endl;
	cin>>reply;

	if (reply == "area"){
		answer = (radius^2)*pi;
		cout<<"The area is "<<answer<<" square units."<<endl;
	}
	else{
		answer = 2 * pi * radius;
		cout<<"The circumference is "<<answer<<" units."<<endl;
	}

	return 0;

}