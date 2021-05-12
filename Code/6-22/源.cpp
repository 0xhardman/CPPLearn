#include<iostream>
using std::cout;
using std::endl;
void swap(int** a, int** b) {
	int* t;
	t = *a;
	*a = *b;
	*b = t;
}
int main() {
	int a = 1, b = 2;
	int* p1 = &a, *p2 = &b;
	cout << *p1 << " " << *p2 << endl;
	swap(&p1,&p2);
	cout << *p1 << " " << *p2 << endl;
}