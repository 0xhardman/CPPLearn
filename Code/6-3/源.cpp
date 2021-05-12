#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int fact(int n) {
	int res=1;
	for (int i = 1; i <= n;++i) {
		res *= i;
	}
	return res;
}
int main() {
	int n;
	cin >> n;
	cout << n<<"!="<<fact(n) << endl;
	return 0;
}