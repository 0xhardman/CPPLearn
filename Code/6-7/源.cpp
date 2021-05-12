#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int cnt() {
	static int cnt = 0;
	return cnt++;
}
int main() {
	for (int i = 1; i <= 10; i++) {
		cout << cnt() << endl;
	}
	return 0;
}