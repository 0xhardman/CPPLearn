#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
	string str1, str2;
	cout << "Please enter the first string"<<endl;
	getline(cin, str1);
	cout << "Please enter the second string"<<endl;
	getline(cin, str2);
	//比较相等
	cout << "compare content" << endl;
	if (str1 == str2) {
		cout << "They are same as each other"<<endl;
	}
	else {
		cout << "The bigger one is ";
		if (str1 > str2)
			cout << str1 << endl;
		else
			cout << str2 << endl;
	}
	//比较长短
	cout << "compare length" << endl;
	if (str1.size() == str2.size()) {
		cout << "They have same length" << endl;
	}
	else {
		cout << "The bigger one is ";
		if(str1.size()>str1.size())
			cout << str1 << endl;
		else
			cout << str2 << endl;
	}

	return 0;
}