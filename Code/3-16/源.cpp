#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
	vector<int> nums;
	int num;
	while (cin >> num) {
		nums.push_back(num);
	}
	for (auto num : nums) {
		cout << num << endl;
	}
	return 0;
}