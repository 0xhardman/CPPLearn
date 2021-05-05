#include<iostream>
#include<vector>
using std::vector;
int main() {
	vector<int> v = { 1,2,3,4 };
	int arr[4];
	for (auto i = 0; i < v.size();i++)
		arr[i] = v[i];	
	for (auto num : arr)
		std::cout << num << std::endl;
	return 0;
}