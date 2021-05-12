#include<iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;
bool is_contain_upper(const string &s) {
	for (auto ch : s) {
		if (isupper(ch))
			return true;
	}
	return false;
}
void string_to_lower(string &s) {
	for (auto &ch : s) {
		if (isupper(ch)){
			ch = tolower(ch);
		}
	}
}
int main() {
	string s = "AbcdEFG";
	cout << is_contain_upper(s) << endl;
	string_to_lower(s);
	cout << s << endl;
	cout << is_contain_upper(s) << endl;
}