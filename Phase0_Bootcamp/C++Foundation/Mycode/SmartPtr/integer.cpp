#include <iostream>
#include "integer.hpp"

using namespace std;


Integer::Integer(): ptr{new int(0)}{
	cout<< "Integer()" <<endl;
}

Integer::Integer(int value): ptr{new int(value)} {
	cout<< "Integer(int) " <<endl;
}

Integer::Integer(Integer &i) = default;

Integer::Integer(Integer &&i) = default;

Integer & Integer::operator=(Integer &i) = default;

Integer & Integer::operator=(Integer &&i) = default;

void Integer::SetValue(int value){
	if(ptr == nullptr){
		ptr = new int(value);
	}
	else{
		*ptr = value;
	}
}

int Integer::GetValue(void){
	return(*ptr);
}

Integer::~Integer(){
	cout<<"~Integer()" <<endl;
}

	
