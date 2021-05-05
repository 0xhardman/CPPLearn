#include<iostream>
#include<cstring>
using std::cout;
using std::endl;
using std::string;
int main() {
	cout << "compare by string" << endl;
	string str1 = "Hello world!",str2="Hello world!";
	if (str1 == str2)
		cout << "They are same" << endl;
	else
		cout << "They are differrent" << endl;

	cout << "compare by char array" << endl;
	char ch1[] = "Hello world", ch2[] = "Hellow world";
	if(strcmp(ch1,ch2)==0)
		cout << "They are same" << endl;
	else
		cout << "They are different" << endl;

	return 0;

}