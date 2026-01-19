#include "integer.hpp"

#include <iostream>

using namespace std;

Integer::Integer(){
	cout<< "Integer()" << endl;
	ptr = new int(0);
}

Integer::Integer(int i){
	cout<< "Integer(int)" <<endl;
	ptr = new int(i);
}

Integer::Integer(const Integer &i){
	cout<< "Integer(const Integer &) " <<endl;
	ptr = new int(i.GetValue());
}

/*Integer::Integer( Integer &i){
	cout<< "Integer( Integer &) " <<endl;
	ptr = new int(i.GetValue());
}*/
Integer::Integer( Integer &&i ){
	cout<< "Integer( Integer &&) " <<endl;
	ptr = i.ptr;
	i.ptr = nullptr;
}
/*Integer& operator=(const Integer &i){
	cout<< "=Integer(const Integer &) " <<endl;
	ptr = new int(i.GetValue());
	return(this);
}*/

int Integer::GetValue(void) const{
	return(*ptr);
	}

void Integer::SetValue(int value){
	*ptr = value;
	}

Integer Integer::operator+(const Integer &i){
	cout<< "this = " <<*(this->ptr) <<endl;
	cout<< "i = " <<i.GetValue() <<endl;
	Integer temp(*ptr + i.GetValue());
	return(temp);
}

Integer& Integer::operator=(const Integer &i){
	cout<< "copy this = " <<*(this->ptr) <<endl;
	cout<< "copy i = " <<i.GetValue() <<endl;
	*(this->ptr) = i.GetValue();
	return(*this);
}	
Integer& Integer::operator=(Integer &&i){
	cout<< "move this = " <<*(this->ptr) <<endl;
	cout<< "move i = " <<i.GetValue() <<endl;
	this->ptr = i.ptr;
	i.ptr = nullptr;
	return(*this);
}	

Integer::~Integer(){
	cout<< "~Integer()" << endl;
	delete ptr;
	ptr = nullptr;
}

