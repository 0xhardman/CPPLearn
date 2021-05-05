#include<iostream>
#include<string>
#include<cctype>
#include<vector>
#include<cstddef>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
	constexpr size_t array_size = 10;
	int ia[array_size];
	for (size_t ix = 0; ix < array_size;ix++) {
		ia[ix] = ix;
	}
	for (size_t ix = 0; ix < array_size; ix++) {
		cout << ia[ix] << " ";
	}
	cout << endl;
	return 0;
}