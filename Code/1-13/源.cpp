#include<iostream>
int main() {
	int i=0, l=0, r=0, sum=0;
	std::cout << "for实现1.9" << std::endl;
	for (i = 50; i <= 100; i++) {
		sum += i;
	}
	std::cout <<"50-100整数之和为"<< sum << std::endl<<"for实现1.10"<<std::endl;
	for (i = 10; i >= 0; i--) {
		std::cout << i << " ";
	}
	std::cout << std::endl << "for实现1.11"<<std::endl << "请输入两个整数,此处将输出二者间的所有整数" << std::endl;
	std::cin >> l >> r;
	for (; l <= r; l++) {
		std::cout << l << " ";
	}
	return 0;
}