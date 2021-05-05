#include<iostream>
using std::cout;
using std::endl;
int main() {
	int nums[10] = {0,1,2,3,4,5,6,7,8,9};
	for (auto p = nums; p < nums + 10; p++) {
		*p = 0;
	}
	for (auto n : nums) {
		cout << n << " ";
	}
	cout << endl;
}