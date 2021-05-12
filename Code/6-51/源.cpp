#include<iostream>
using std::cout;
using std::endl;
void f(){
	cout << "nothing" << endl;
}

void f(int a) {
	cout << a << endl;
}

void f(int a, int b) {
	cout << a + b << endl;
}

void f(double a, double b) {
	cout << a + b << endl;
}
int main() {
	f();
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56,3.14);
	return 0;

}