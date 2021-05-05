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
	int ia[array_size] = {0,1,2,3,4,5,6,7,8,9};
	int ia_c[array_size];
	for (size_t ix = 0; ix < array_size; ix++) {
		ia_c[ix] = ia[ix];
	}
	vector<int> v1{ 1,2,3,4,5,6,7,8,9 };
	vector<int> v2 = v1;
	return 0;
}