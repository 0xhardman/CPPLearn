#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int sum(int n) {//形参n，局部变量n
	static int sum = 0;//局部静态变量sum

	sum += n;
	return sum;
}
int main() {
	int n;
	while (cin >> n) {
		cout << sum(n) << endl;//实参n
	}
	return 0;
}