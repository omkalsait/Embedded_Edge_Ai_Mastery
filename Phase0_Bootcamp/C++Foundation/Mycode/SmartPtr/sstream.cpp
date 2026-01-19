#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){

	int a{1},b{2};
	int sum{a+b};
	
	cout << "Sum of a : " <<a <<" + b : " << b <<" = Sum : " << sum<<endl;
	
	stringstream ss;
	 
	ss << "Sum of a : " <<a <<" + b : " << b <<" = Sum : " << sum<<endl;

	cout<<ss.str();
	
	ss.str("12-34-a45-=67");
	cout<<ss.str();
	while(ss>>a){
		cout<<a <<endl;
	}
	cout<<"done"<<endl;

	
	return(0);
}
