#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total, item;
	int cnt = 1;
	if (std::cin >> total) {
		while (std::cin >> item) {
			
			if (total.isbn() == item.isbn()) {
				cnt++;
			}
			else {
				std::cout << "ISBN为" <<total.isbn()<<"的记录有"<< cnt <<"条"<< std::endl;
				total = item;
				cnt = 1;
			}
		}
		std::cout << "ISBN为" << total.isbn() << "的记录有" << cnt << "条" << std::endl;
		return 0;
	}
	else {
		std::cerr << "数据不足量" << std::endl;
		return -1;
	}
}