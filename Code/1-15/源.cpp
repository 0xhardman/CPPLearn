#include<iostream>
//语法错误示范
//正确示范
//int main() {
//错误示范：main的参数列表漏掉了
int main（{
	//正确示范
	//std::cout << "Read each file." << std::endl;
	//错误示范：endl后使用了冒号而非分号
	std::cout<<"Read each file."<<std::endl:
	//正确示范
	//std::cout << "Update master" << std::endl;
	//错误示范
	std::cout << Update master << std::end1;
	//正确示范
	//std::cout << "Write new master" << std::endl;
	//错误示范：漏掉了第二个输出运算符
	std::cout << "Write new master." std::endl;
	
	//类型错误示范
	int a = 10;
	//错误将字符串传给int
	a = "hello";

	//声明错误
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2;
	cout << v1 + v2 << std::endl;
	//正确示范
	//return 0;
	//错误示范
	return 0
}