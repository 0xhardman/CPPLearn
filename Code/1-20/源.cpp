#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item;
	int i=1;
	while (std::cin >> item) {
		std::cout << "��" << i++ << "����¼��" << item << std::endl;
	}
	return 0;
}