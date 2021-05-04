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
	int tmp;
	while (cin >> tmp) {
		nums.push_back(tmp);
	}
	cout << tmp;
	return 0;
}