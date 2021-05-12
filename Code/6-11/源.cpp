#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void reset(int& n) {
	n = 0;
}
int main() {
	int a = 1;
	cout << a << endl;
	reset(a);
	cout << a << endl;
}