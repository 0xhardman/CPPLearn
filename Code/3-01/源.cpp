#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int i = 0, l = 0, r = 0, sum = 0;
	cout << "forʵ��1.9" << endl;
	for (i = 50; i <= 100; i++) {
		sum += i;
	}
	cout << "50-100����֮��Ϊ" << sum << endl << "forʵ��1.10" << endl;
	for (i = 10; i >= 0; i--) {
		cout << i << " ";
	}
	cout << endl << "forʵ��1.11" << endl << "��������������,�˴���������߼����������" << endl;
	cin >> l >> r;
	for (; l <= r; l++) {
		cout << l << " ";
	}
	return 0;
}