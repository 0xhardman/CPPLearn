#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, j;
    cin >> i >> j;
    if (j == 0)
        throw("除数不能为0");
    cout << i / j << endl;

    return 0;
}