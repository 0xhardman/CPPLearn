#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total,item;
	if (std::cin >> total) {
		while (std::cin >> item) {
			if (total.isbn() == item.isbn()) {
				total += item;
			}
			else {
				std::cout << "sum is " << total << std::endl;
				total = item;
			}
		}
		std::cout << "sum is " << total << std::endl;
		return 0;
	}
	else {
		std::cerr << "数据不足量" << std::endl;
		return -1;
	}
}