#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::endl;
int main() {
	vector<string> scores = { "F","D","C", "B", "A", "A++" };
	int grade;
	string letterGrade;
	while (cin >> grade) {
		letterGrade = grade < 60 ? scores[0] : scores[grade / 10 - 5];
		letterGrade += grade % 10 > 7 ? '+' : (grade % 10 < 3 ? '-' : '\000');
		letterGrade = grade == 100 ? "A++" : letterGrade;
		cout << letterGrade << endl;
	}
	return 0;
}