#include<iostream>
using std::cout;
using std::endl;
int put_out_bigger(int a, const int* p) {
	p = &a;
	return a > *p ? a : *p;
}
int main() {
	int i = 9;
	cout << put_out_bigger(10, &i) << endl;
	return 0;
}
