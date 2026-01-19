
#include <iostream>
#include "integer.hpp"

using namespace std;

int main(){
	cout<< "Hello World!" << endl;
	int *ptr1 = new int(20);
	// shallow copy;
	int *ptr2 = ptr1;
	cout<<"ptr2 = "<<*ptr2 <<endl;
	*ptr1 = 30;

	cout<<"ptr2 = " <<*ptr2 <<endl;

	cout<<"ptr1 add = " <<ptr1 <<" and ptr2 add = " <<ptr2 <<endl;	

	// deep copy 
	
	int *ptr3 = new int(*ptr1);
	cout<<"ptr3 = " <<*ptr3 <<endl;
	*ptr1 = 40;	
	cout<<"ptr3 = " <<*ptr3 <<endl;
	cout<<"ptr1 add = " <<ptr1 <<" and ptr3 add = " <<ptr3 <<endl;	

	Integer i;
	Integer i2;
	Integer i3(5);
	Integer i4(i3);
	Integer i5{i4};
	cout << "i : " << i.GetValue() << "i2 : " << i2.GetValue() << "i3 : " << i3.GetValue() << "i4 : " << i4.GetValue()
	       	<< " i5 : " << i5.GetValue();


	return(0);
	}

