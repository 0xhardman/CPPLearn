#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string str;
	cin >> str;
	for (char& ch : str) {
		ch = 'x';
	}
	cout << str << endl;
	return 0;
}