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
	cout << "��������Ϊ" << res1 << endl;
	cout << "�ո���������" << res2 << endl;
}