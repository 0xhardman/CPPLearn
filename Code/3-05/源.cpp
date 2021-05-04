#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string curr,res1,res2;
	while (cin >> curr) {
		res1 += curr;
		res2 += curr + ' ';
	}
	cout << "连接起来为" << res1 << endl;
	cout << "空格连接起来" << res2 << endl;
}