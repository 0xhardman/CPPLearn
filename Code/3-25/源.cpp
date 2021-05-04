#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
//42 65 95 100 39 67 95 76 88 76 83 92 76 93
int main() {
	vector<unsigned> scores(11,0);
	unsigned grade;
	auto b = scores.begin();
	while (cin >> grade) {
		if (grade <= 100) {
			//++scores[grade / 10];
			//很奇怪的是不能写
			//* (b + grade / 10) ++;
			*(b + grade / 10)+=1;
		}
			
	}
	for (auto b = scores.cbegin(); b != scores.cend(); b++) {
		cout << *b << " ";
	}
	cout << endl;
	return 0;
}