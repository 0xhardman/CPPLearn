#include<iostream>
#include<vector>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::endl;
int main() {
	string text;
	int cnt[5] = {0};
	cin >> text;
	for (auto ch : text) {
		if (ch == 'a' || ch == 'A')
			cnt[0]++;
		else if (ch == 'e' || ch == 'E')
			cnt[1]++;
		else if (ch == 'i' || ch == 'I')
			cnt[2]++;
		else if (ch == 'o' || ch == 'O')
			cnt[3]++;
		else if (ch == 'u' || ch == 'U')
			cnt[4]++;
	}

	cout << "a/A: " << cnt[0] << endl;
	cout << "e/E: " << cnt[1] << endl;
	cout << "i/I: " << cnt[2] << endl;
	cout << "o/O: " << cnt[3] << endl;
	cout << "u/U: " << cnt[4] << endl;

	return 0;
}