#include<iostream>
#include<cstring>
using std::cout;
using std::endl;
int main() {
	const char ch1[] = "hello";
	const char ch2[] = "world";

	char ch3[100];
	strcpy_s(ch3, ch1);
	strcat_s(ch3, ch2);
	cout << ch3 << endl;
	return 0;
}