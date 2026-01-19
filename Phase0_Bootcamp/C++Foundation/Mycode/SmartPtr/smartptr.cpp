#include "integer.hpp"
#include <iostream>
#include <memory>


using namespace std;

void Display(Integer *p){
	if(!p){
		return ;
	}
	cout<< p->GetValue() << endl;
}

Integer * GetPointer(int value){
	Integer * p = new Integer(value);
	return(p);
}

void Store(unique_ptr<Integer> p){
	cout<<p->GetValue()<<endl;
}


void Operate(int value){
	unique_ptr<Integer> p{GetPointer(value)};
	if(p == nullptr){
		cout<<"Got Null Ptr" <<endl;
		p.reset(new Integer{value});
	}

	p->SetValue(100);
	Display(p.get());
	//p = nullptr;
	p.reset(new Integer);
	*p = __LINE__;
	Display(p.get());
	//delete p;
	Store(move(p));
}

int main(){
	Operate(21);
	return(0);
}



	
	



