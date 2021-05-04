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
	auto b = nums.cbegin(),e=nums.cend();
	while (b != e) {
		cout << *b << endl;
		b++;
	}
	return 0;
}