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
				std::cout << "ISBNΪ" <<total.isbn()<<"�ļ�¼��"<< cnt <<"��"<< std::endl;
				total = item;
				cnt = 1;
			}
		}
		std::cout << "ISBNΪ" << total.isbn() << "�ļ�¼��" << cnt << "��" << std::endl;
		return 0;
	}
	else {
		std::cerr << "���ݲ�����" << std::endl;
		return -1;
	}
}