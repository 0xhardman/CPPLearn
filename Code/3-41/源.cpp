#include<iostream>
#include<vector>
using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;
int main() {
	int aNums[] = {1,2,3,4,5};
	vector<int> vNums(begin(aNums),end(aNums));
	for (auto num : vNums)
		cout << num << endl;
	return 0;
}