#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
int main() {
	vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
	for (auto &num : nums) {
		num % 2 ? num *= 2 : num=num;
	}
	for (auto num : nums) {
		cout << num << endl;
	}
}