#include<iostream>
#include <vector>
using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;
int main() {

	//检查数组是否相同
	cout << "compare in array" << endl;
	//初始化
	int a1[3] = { 1,2,3 };
	int a2[3] = { 1,2,3 };
	//检查
	auto size1 = end(a1) - begin(a1);
	auto size2 = end(a2) - begin(a2);
	if (size1 == size2) {
		for (auto p1 = a1, p2 = a2; p1 < end(a1) && p2 < end(a2); p1++, p2++) {
			if (*p1 == *p2) {
				if (p1 == end(a1) - 1)
					cout << "They are same!" << endl;
				continue;
			}
			else {
				cout << "They are different!" << endl;
				break;
			}
		}	
	}
	else {
		cout << "They are different!" << endl;
	}

	//检查vector是否相同
	//初始化
	cout << "compare in vector" << endl;
	vector<int> v1 = { 1,2,3 };
	vector<int > v2 = { 1,2,4 };

	if (v1 == v2)
		cout << "They are same!" << endl;
	else
		cout << "They are differrent!" << endl;

	return 0;
}