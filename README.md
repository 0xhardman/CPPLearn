# 《C++ Primer（第五版）》练习记录
- [第1章 开始](#第1章-开始)
	- [**练习 1.1**](#练习-11)
	- [**练习 1.2**](#练习-12)
	- [**练习 1.3**](#练习-13)
	- [**练习 1.4**](#练习-14)
	- [**练习 1.5**](#练习-15)
	- [**练习 1.6**](#练习-16)
	- [**练习1.7**](#练习17)
	- [**练习 1.8**](#练习-18)
	- [**练习1.9**](#练习19)
	- [**练习1.10**](#练习110)
	- [**练习 1.11**](#练习-111)
	- [**练习1.12**](#练习112)
	- [**练习1.13**](#练习113)
	- [**练习1.14**](#练习114)
- [第2章 变量和基本类型](#第2章-变量和基本类型)

## 第1章 开始
### **练习 1.1**
>查阅你使用的编译器的文档，确定它所使用的文件命名约定。编译并运行第 2页的main 程序。

没有找到直接与“文件命名约定”相关的文档，但找到了关于VS中**解决方案**是**项目**的容器，即一个解决方案中可以有多个项目，在此就记录下VS和C++在微软的文档吧。

[Document of Visual Studio IDE 2019](https://docs.microsoft.com/zh-cn/visualstudio/get-started/visual-studio-ide?view=vs-2019)  
[Document of C++](https://docs.microsoft.com/zh-cn/cpp/cpp/?view=msvc-160)  

Code:
> CPPLearn\Code\1-1  
```java
int main() {
	return 0;
}
```
Result:
![1 1](img/1-1.png)
***
### **练习 1.2**
>改写程序，让它返回-1。返回值-1 通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理 main 返回的错误标识。  

Code:
> CPPLearn\Code\1-2  
```java
int main() {
	return -1;
}
```  
Result:  
![1 2 1](img/1-2-1.png)
![1 2 2](img/1-2-2.png)  
对比1-1，会以-1作为退出代码。
***
### **练习 1.3**
>编写程序，在标准输出上打印Hello，World。

Code:
> CPPLearn\Code\1-3
```C++
#include<iostream>
int main() {
	std::cout << "Hellow,World!" << std::endl;
	return 0;
}
```
Result:
![1 3](img/1-3.png)
***

### **练习 1.4**
>我们的程序使用加法运算符+来将两个数相加。编写程序使用乘法运算符\*，来打印两个数的积。  
Code:
>CPPLearn\code\1-4
```c++
#include<iostream>
int main() {
	std::cout << "Please enter two numbers:" << std::endl;
	int v1=0, v2=0;
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	return 0;
}
```
Result:
![1 4](img/1-4.png)
***
### **练习 1.5**
>我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。

Code:
> CPPLearn\code\1-5
```c++
#include<iostream>
int main() {
	std::cout << "Please enter two numbers:";
	std::cout << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The product of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl;
	return 0;
}
```
Result:
![1 5](img/1-5.png)
***
### **练习 1.6**
>解释下面程序片段是否合法。
>```c++
>std: :cout << "The sum of " << v1;
>		<< " and " << v2;
>		<<" is "<< v1 + v2 << std::endl;
>```如果程序是合法的，它输出什么? 如果程序不合法，原因何在?应该如何修正?
不合法，可以写入程序编译其中发现会爆红并通过不了编译：  
![1 6 1](img/1-6-1.png)  
输出为：  
![1 6 2](img/1-6-2.png)  
原因在于，<<输出运算法需接受两个对象，即<<是一个二元运算符，这种写法不满足，属于语法错误。应将除最后一行的分号删去，即  
```c++
std::cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << std::endl;
```
***
### **练习1.7**
>编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。  
Code:
```c++
int main() {
	/*/*嵌套注释测试*/*/
	return 0;
}
```
Result:
![1 7](img/1-7.png)  
会将第一个/\*和第一个\*/识别为一组，剩下的一个*/视为语法错误。
***
### **练习 1.8**
>指出下列哪些输出语句是合法的（如果有的话）∶
>```c++
>std::Cout <<"/*"; 
>std::cout <<"*/";
>std::cout <</*"*/" */;
>std::cout <</*"*/" / * "/*"*/;
>```
>预测编译这些语句会产生什么样的结果，实际编译这些语句来验证你的答案（编写一个小程序，每次将上述一条语句作为其主体），改正每个编译错误。  

预测第一句会输出"/\*"，第二句输出"\*/",第三句报错，因为一对注释符号的包裹下回失去一个"（引号）导致错误，第三个会输出"/*"。  
Result:
![1 8 1](img/1-8-1.jpg)  
![1 8 2](img/1-8-2.png)
![1 8 3](img/1-8-3.png)
![1 8 4](img/1-8-4.png)  
基本符合预期，修改：可以在第三局分号前加一个引号即可，输出为\*/
```c++
	std::cout <</*"*/"*/";
```
***
### **练习1.9**
>编写程序，使用while循环将 50 到100 的整数相加。

Code:
```c++
#include<iostream>
int main() {
	int i = 50,sum=0;
	while (i <= 100) {
		sum += i;
		i++;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	return 0;
}
```  
Result:
![1 9](img/1-9.png)
***
### **练习1.10**
>除了++运算符将运算对象的值增加 1 之外，还有一个递减运算符（—）实现将值减少 1。编写程序，使用递减运算符在循环中按递减顺序打印出 10 到 0 之间的整数。

Code:
```c++
#include<iostream>
int main() {
	int i =10;
	while (i >= 0) {
		std::cout << i-- <<" " ;
	}
	std::cout<<std::endl;
	return 0;
}
```
Result:  
![1 10](img/1-10.png)
***
### **练习 1.11**
>编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

Code:
```c++
#include<iostream>
int main() {
	int l = 0,r=0;
	std::cout << "Enter two numbers,I will return the numbers between them."<<std::endl;
	std::cin >> l >> r;
	while (l <= r) {
		std::cout << l++ << " ";
	}
	std::cout << std::endl;
	return 0;
}
```
![1 11](img/1-11.png)
***
### **练习1.12**
>下面的 for 循环完成了什么功能?sum的终值是多少?
>```c++
>int sum = 0;
>for (int i = -100;i <= 100;++i)
>	sum ＋= i;

完成了-100-100的累加，结果为0。
***
### **练习1.13**
>使用 for循环重做1.4.1 节中的所有练习（第 11 页）。

Code:
```c++
#include<iostream>
int main() {
	int i=0, l=0, r=0, sum=0;
	std::cout << "for实现1.9" << std::endl;
	for (i = 50; i <= 100; i++) {
		sum += i;
	}
	std::cout <<"50-100整数之和为"<< sum << std::endl<<"for实现1.10"<<std::endl;
	for (i = 10; i >= 0; i--) {
		std::cout << i << " ";
	}
	std::cout << std::endl << "for实现1.11"<<std::endl << "请输入两个整数,此处将输出二者间的所有整数" << std::endl;
	std::cin >> l >> r;
	for (; l <= r; l++) {
		std::cout << l << " ";
	}
	return 0;
}
```
### **练习1.14**
>对比 for 循环和 while 循环，两种形式的优缺点各是什么?


for相比while可以更规范的实现迭代器的初始化和迭代，更适用于“检测变量，递增变量”的模式。  
while相比for使用起来也更轻便，而且可以设置多种迭代变化，更加灵活。

***
## 第2章 变量和基本类型