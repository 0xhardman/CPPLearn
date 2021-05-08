#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
int main() {
	vector<string> word;
	vector<int> cnt;
	string pre,curr;
	int count;
	if (cin >> pre) {
		count = 1;
		while (cin >> curr) {
			if (curr == pre)
				count++;
			else {
				word.push_back(pre);
				cnt.push_back(count);
				pre = curr;
				count = 1;
			}
		}
		word.push_back(pre);
		cnt.push_back(count);
		count = 1;
	}
	else {
		cout << "error" << endl;
	}
	
	int max=1;
	for (auto num : cnt) {
		if (num > max)
			max = num;
	}
	if (max == 1)
		cout << "不存在任何单词重复" << endl;
	else {
		int index = 0;
		for (; index < cnt.size(); ++index) {
			if (max == cnt[index]) {
				cout << word[index] << " repeated " << cnt[index] << " times!" << endl;
				break;
			}
		}
	}
	return 0;
}