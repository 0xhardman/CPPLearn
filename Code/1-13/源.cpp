#include<iostream>
int main() {
	int i=0, l=0, r=0, sum=0;
	std::cout << "forʵ��1.9" << std::endl;
	for (i = 50; i <= 100; i++) {
		sum += i;
	}
	std::cout <<"50-100����֮��Ϊ"<< sum << std::endl<<"forʵ��1.10"<<std::endl;
	for (i = 10; i >= 0; i--) {
		std::cout << i << " ";
	}
	std::cout << std::endl << "forʵ��1.11"<<std::endl << "��������������,�˴���������߼����������" << std::endl;
	std::cin >> l >> r;
	for (; l <= r; l++) {
		std::cout << l << " ";
	}
	return 0;
}