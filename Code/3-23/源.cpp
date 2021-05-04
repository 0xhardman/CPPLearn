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
	vector<int> nums{ 1,2,3,4,5,6,7,8,9,10 };
	for(auto b=nums.begin();b<nums.end();b++)
		(*b) *= 2;

	auto b = nums.cbegin(), e = nums.cend();
	while (b != e) {
		cout << *b << endl;
		b++;
	}
	return 0;
}