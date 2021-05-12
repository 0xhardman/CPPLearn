#include<iostream>
#include<initializer_list>
using std::cout;
using std::endl;
using std::initializer_list;
int sum(initializer_list<int> lst) {
	int sum = 0;
	for (auto n : lst) 
		sum += n;
	return sum;
}
int main() {
	cout << sum({1,23,4,5}) << endl;
	return 0;
}