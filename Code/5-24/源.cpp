#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i, j;
    cin >> i >> j;
    if (j == 0)
        throw("��������Ϊ0");
    cout << i / j << endl;

    return 0;
}