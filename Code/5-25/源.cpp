#include <iostream>
#include<stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;
int main()
{
    int i, j;
    while (cin >> i >> j) {
        try{
            if (j == 0)
                throw runtime_error("divided by zero!");
            cout << i / j << endl;
        }
        catch (runtime_error err) {
            cout << err.what() << endl;
            cout << "输入错误，是否重新输入？请输入y/n" << endl;
            char ch;
            cin >> ch;
            if (!cin  && ch == 'n')
                break;
        }
    }
    

    return 0;
}