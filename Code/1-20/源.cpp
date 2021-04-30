#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item;
	int i=1;
	while (std::cin >> item) {
		std::cout << "第" << i++ << "条记录是" << item << std::endl;
	}
	return 0;
}