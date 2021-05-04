#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int i = 0, l = 0, r = 0, sum = 0;
	cout << "for实现1.9" << endl;
	for (i = 50; i <= 100; i++) {
		sum += i;
	}
	cout << "50-100整数之和为" << sum << endl << "for实现1.10" << endl;
	for (i = 10; i >= 0; i--) {
		cout << i << " ";
	}
	cout << endl << "for实现1.11" << endl << "请输入两个整数,此处将输出二者间的所有整数" << endl;
	cin >> l >> r;
	for (; l <= r; l++) {
		cout << l << " ";
	}
	return 0;
}