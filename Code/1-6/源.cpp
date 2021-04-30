#include<iostream>
int main() {
	std::cout << "Please enter two numbers:";
	std::cout << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	/*std::cout << "The sum of " << v1;
	<< " and " << v2;
	<< " is " << v1 + v2 << std::endl;
	return 0;*/
	std::cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << std::endl;
	return 0;
}