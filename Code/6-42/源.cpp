#include <cstddef>
using std::size_t;

#include <string>
using std::string;

#include <iostream>
using std::cout; using std::endl;

inline
string make_plural(size_t ctr, const string& word,const string& ending = "s")
{
	return (ctr > 1) ? word + ending : word;
}
int main() {
	cout << make_plural(1, "success","es") << endl;
	cout << make_plural(2, "success", "es") << endl;
	cout << make_plural(1, "failure", "s") << endl;
	cout << make_plural(2, "failure", "s") << endl;
}