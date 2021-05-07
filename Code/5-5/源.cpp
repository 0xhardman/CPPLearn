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
		if (grade < 60) {
			letterGrade = scores[0];
		}
		else {
			letterGrade = scores[grade / 10-5];
			if (grade != 100) {
				if (grade % 10 < 3) {
					letterGrade += '-';
				}
				else if (grade % 10 > 7) {
					letterGrade += '+';
				}
				else
					;
			}
		}
		cout << letterGrade << endl;

	}
	return 0;
}