#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
int func(int, int);
vector<int (*)(int, int)> v;
//vector<decltype(func)*> v;
//
int main() {
	auto i = 0;
	auto *p = &i;
	return 0;
}