#include<iostream>
#include<string>
#include<cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string str="hellow!beautiful*World!",res;
	cout << str << endl;
	for (auto ch : str) 
		if (!ispunct(ch))
			res += ch;
	cout << res << endl;
	return 0;
}