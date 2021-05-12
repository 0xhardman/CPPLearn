#include<iostream>
#include<vector>
using std::cout;
using std::endl;
using std::vector;
void print(vector<int>::iterator begin, vector<int>::iterator end) {
	if (begin == end)
		cout << endl;
	else {
		cout << *begin << " ";
		print(begin + 1, end);
	}
}
int main() {
	vector<int> v{1, 23, 45, 6, 7, 89, 0};
	print(v.begin(),v.end());
}