#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
int main() {
	string str1, str2;
	do {
		cout << (str1.size() > str2.size() ? str2 : str1)<<endl ;
		cout << "����������string����" << endl;
	} while (cin >> str1 >> str2);
	return 0;
}
