#include<iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;
using Row=int[4];
using Col = int;
int main() {
	int ia[3][4] = {
		{0,1,2,3} ,
		{4,5,6,7} ,
		{8,9,10,11}
	};
	//方法一，范围for
	for (Row &row : ia)
		for (Col col : row)
			cout << col << " ";
	cout << endl;

	//方法二，普通for，下标
	for (size_t i = 0; i < end(ia) - begin(ia); i++)
		for (size_t j = 0; j < end(ia[i]) - begin(ia[i]); j++)
			cout << ia[i][j] << " ";
	cout << endl;

	//方法三，普通for，指针
	for (Row *p1 = begin(ia); p1 != end(ia); p1++)
		for (Col* p2 = begin(*p1); p2 != end(*p1); p2++)
			cout << *p2 << " ";
	cout << endl;
	return 0;
}