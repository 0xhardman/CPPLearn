#include<iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;
void print(int n) {
	cout << n << endl;
}
void print(int* arr,int size) {
	for (auto i = 0; i != size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
void print(int* begin, int* end) {
	for (; begin != end; ++begin)
		cout << *begin << " ";
	cout << endl;
}
void print(int(&arr)[2]) {
	for (auto i = 0; i != 2; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
int main() {
	int i = 0, j[2] = { 0,1 };
	print(i);
	print(j, 2);
	print(begin(j),end(j));
	print(j);
	return 0;
}