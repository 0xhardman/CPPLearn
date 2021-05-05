#include<iostream>
#include <vector>
using std::vector;
using std::begin;
using std::end;
using std::cout;
using std::endl;
int main() {

	//��������Ƿ���ͬ
	cout << "compare in array" << endl;
	//��ʼ��
	int a1[3] = { 1,2,3 };
	int a2[3] = { 1,2,3 };
	//���
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

	//���vector�Ƿ���ͬ
	//��ʼ��
	cout << "compare in vector" << endl;
	vector<int> v1 = { 1,2,3 };
	vector<int > v2 = { 1,2,4 };

	if (v1 == v2)
		cout << "They are same!" << endl;
	else
		cout << "They are differrent!" << endl;

	return 0;
}