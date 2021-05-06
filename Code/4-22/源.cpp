#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main() {
	vector<int> grades = { 59,65,70,75,80,85,90,95,100 };
	for (auto grade : grades) {
		cout << ((grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade>60)?"low pass":"fail")<<" ";
	}
	cout << endl;

	for (auto grade : grades) {
		string final;
		if (grade > 90)
			final = "high pass";
		else if (grade > 75)
			final = "pass";
		else if (grade > 60)
			final = "low pass";
		else
			final = "fail";

		cout << final << " ";
	}
	cout << endl;

}