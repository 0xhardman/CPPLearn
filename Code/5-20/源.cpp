#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string pre, now;
	while (cin >> now) {
		if (now == pre) {
			cout << now << "�ظ�������" << endl;
			return 0;
		}
		else {
			pre = now;
		}
	}
	cout << "û���ظ���" << endl;
	return 0;
}
