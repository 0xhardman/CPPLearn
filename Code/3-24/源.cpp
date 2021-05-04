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
	vector<int> nums{1,2,8,4,5}, res1, res2;
	for (auto num = nums.begin(); num != nums.end() - 1; num++) {
		res1.push_back(*num + *(num+1));
	}
	cout << "相邻数的和" << endl;
	for (auto num = res1.cbegin(); num != res1.cend(); num++) {
		cout << *num << " ";
	}
	cout << endl;
	cout << "首尾数的和" << endl;
	for (auto numL = nums.begin(),numR=nums.end()-1; numL<=numR ; numL++,numR--) {
		res2.push_back(*numR + *numL);
	}
	for (auto num = res2.cbegin(); num != res2.cend(); num++) {
		cout << *num << " ";
	}
	cout << endl;
	return 0;
}