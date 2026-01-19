#include <iostream>
#include "integer.hpp"

using namespace std;

Integer add_Integer(const Integer & , const Integer &);

class Number {
	Integer ival;
	public:
	Number(int i):ival{i}{};
	Number() = default;
	//Number& operator=(const Number &i) = default;

};

int main(){
	//Integer a(1) , b(2);
	//a.SetValue(add_Integer(a, b).GetValue()); 
	
	Number num;
	Number num1{10};
	Number num2{num1};
	//num = num2;	
	return(0);
}

Integer add_Integer(const Integer &a,const Integer &b){
	Integer temp;
	temp.SetValue(a.GetValue()+b.GetValue());
	return(temp);
}
