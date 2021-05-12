#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void swap(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main() {
	int a=0, b=1;
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;
	return 0;
}