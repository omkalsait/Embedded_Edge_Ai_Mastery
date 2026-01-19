#include <iostream>

using namespace std;

enum class Color{RED, GREEN, BLUE};

void FillColor(Color c){

	if(c == Color::RED){
		cout<< "Print Red " <<endl;

	}
	else if(c == Color::GREEN){
		cout<< "Print Green " <<endl;
	}
	else if(c == Color::BLUE){
		cout<< "Print Blue " <<endl;
	}
}

int main(){
	Color c{Color::RED};
	FillColor(c);
	FillColor(Color::GREEN);
	FillColor(static_cast<Color>(2));
	return(0);
}
