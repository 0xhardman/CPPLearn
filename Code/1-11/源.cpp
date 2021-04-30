#include<iostream>
int main() {
	int l = 0,r=0;
	std::cout << "Enter two numbers,I will return the numbers between them."<<std::endl;
	std::cin >> l >> r;
	while (l <= r) {
		std::cout << l++ << " ";
	}
	std::cout << std::endl;
	return 0;
}