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
			cout << now << "重复出现了" << endl;
			return 0;
		}
		else {
			pre = now;
		}
	}
	cout << "没有重复的" << endl;
	return 0;
}
