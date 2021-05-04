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
	vector<string> text;
	string word;
	while (cin >> word) {
		text.push_back(word);
	}

	for (auto& word : text) {
		for (auto& ch : word) {
			ch = toupper(ch);
		}
	}

	for (auto word : text) {
		cout << word << endl;
	}
	return 0;
}