#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int sum(int n) {//�β�n���ֲ�����n
	static int sum = 0;//�ֲ���̬����sum

	sum += n;
	return sum;
}
int main() {
	int n;
	while (cin >> n) {
		cout << sum(n) << endl;//ʵ��n
	}
	return 0;
}