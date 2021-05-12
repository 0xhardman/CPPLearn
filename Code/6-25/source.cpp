#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
int main(int argc,char** argv) {
	string res;
	for (auto i = 1; i != argc; ++i) {
		res += string(argv[i]) +" ";
	}
	cout << res << endl;
	return 0;
}