#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main() {
	vector<string> text = {"Hellow world! I'm C++!","","Hava a nice day!"};

	for (auto it = text.begin(); it != text.end() && !it->empty(); it++) 
		for (auto ch = (*it).begin(); ch != it->end(); ch++) 
			*ch = toupper(*ch);
	
	for (auto it = text.cbegin(); it != text.cend(); it++)
		cout << *it << endl;
	
	return 0;
}