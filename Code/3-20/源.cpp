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
	vector<int> nums,res1,res2;
	int num;
	while (cin >> num) {
		nums.push_back(num);
	}
	for (decltype(nums.size()) i=0; i != nums.size()-1;i++) {
		res1.push_back(nums[i] + nums[i + 1]);
	}
	cout << "�������ĺ�"<<endl;
	for (auto num : res1) {
		cout << num << " ";
	}
	cout << endl;
	cout << "��β���ĺ�" << endl;
	for (decltype(nums.size()) i = 0; i <= (nums.size() +1)/2; i++) {
		res2.push_back(nums[i] + nums[nums.size()-1-i]);
	}
	for (auto num : res2) {
		cout << num << " ";
	}
	cout << endl;
	return 0;
}