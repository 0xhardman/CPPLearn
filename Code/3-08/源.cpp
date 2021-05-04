#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string str;
	cin >> str;
	decltype(str.size()) i = 0;
	while (i != str.size()) {
		str[i] = 'x';
		i++;
	}
	cout << str << endl;
	for (i = 0; i != str.size();i++) {
		str[i] = 'y';
	}
	cout << str << endl;
	return 0;
}