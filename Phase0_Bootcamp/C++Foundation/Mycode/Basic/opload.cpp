#include <iostream>
#include "integer.hpp"

using namespace std;

int main(){

	Integer i3(3);
	Integer i1(1);
	Integer i2(2);
	Integer i;
	i = i1 + i2; 
	cout<<i3.GetValue() <<" "<< i3.GetValue() <<endl;
	return(0);
}


