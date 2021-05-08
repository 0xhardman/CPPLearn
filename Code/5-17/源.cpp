#include<vector>
#include<iostream>
using std::vector;
using std::cout;
using std::endl;
int main() {
	vector<int> v1 = { 0,1,1,2 }, v2 = {0,1,1,2,3,5,8};
	for (auto p1 = v1.begin(), p2 = v2.begin(); p1 != v1.end()&&p2 != v2.end(); ++p1, ++p2) {
		if (*p1 == *p2)
			continue;
		else {
			cout << "false" << endl;
			return 0;
		}
	}
	cout << "true" << endl;
	return 0;

}