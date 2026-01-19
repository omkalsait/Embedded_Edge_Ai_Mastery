#include <iostream>

int main()
{
	int age = 25;
	double battery_voltage = 3.7;


	std::cout<< "Age: " << age << std::endl;
	std::cout<< "Battery: " << battery_voltage << "V" << std::endl;

	std::cout << "--- Memory Stats ---" << std::endl;
	std::cout << "size of int: " << sizeof(age) << " bytes" << std::endl;

	return(0);
}
