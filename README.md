# 《C++ Primer（第五版）》练习记录
- [第1章 开始](#第1章-开始)
	- [**练习 1.1**](#练习-11)
	- [**练习 1.2**](#练习-12)
	- [**练习 1.3**](#练习-13)
	- [**练习 1.4**](#练习-14)
	- [**练习 1.5**](#练习-15)
	- [**练习 1.6**](#练习-16)
	- [**练习 1.7**](#练习-17)
	- [**练习 1.8**](#练习-18)
	- [**练习 1.9**](#练习-19)
	- [**练习 1.10**](#练习-110)
	- [**练习 1.11**](#练习-111)
	- [**练习 1.12**](#练习-112)
	- [**练习 1.13**](#练习-113)
	- [**练习 1.14**](#练习-114)
	- [**练习 1.15**](#练习-115)
	- [**练习 1.16**](#练习-116)
	- [**练习 1.17**](#练习-117)
	- [**练习 1.18**](#练习-118)
	- [**练习 1.19**](#练习-119)
	- [**练习 1.20**](#练习-120)
	- [**练习 1.21**](#练习-121)
	- [**练习 1.22**](#练习-122)
	- [**练习 1.23**](#练习-123)
	- [**练习 1.24**](#练习-124)
	- [**练习 1.25**](#练习-125)
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
### **练习 1.7**
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
### **练习 1.9**
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
### **练习 1.10**
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
### **练习 1.12**
>下面的 for 循环完成了什么功能?sum的终值是多少?
>```c++
>int sum = 0;
>for (int i = -100;i <= 100;++i)
>	sum ＋= i;

完成了-100-100的累加，结果为0。
***
### **练习 1.13**
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
Result:
![1 15](img/1-13.png)
### **练习 1.14**
>对比 for 循环和 while 循环，两种形式的优缺点各是什么?


for相比while可以更规范的实现迭代器的初始化和迭代，更适用于“检测变量，递增变量”的模式。  
while相比for使用起来也更轻便，而且可以设置多种迭代变化，更加灵活。

***
### **练习 1.15**
>编写程序，包含第 14 页"再探编译"中讨论的常见错误。熟悉编译器生成的错误信息。
```c++
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
```
Result:
![1 15](img/1-15.png)
***
### **练习 1.16**
>编写程序，从cin读取一组数，输出其和。

Code:
```c++
#include<iostream>
int main() {
	int v=0, sum=0;
	while (std::cin >> v)
		sum += v;
	std::cout << "sun is " << sum << std::endl;
	return 0;
}
```
Result:
![](img/1-16.png)
***
### **练习 1.17**
>如果输入的所有值都是相等的，本节的程序会输出什么?如果没有重复值，输出又会是怎样的?

当输入的所有值相等时输出的是，其中n是输入的值，m为输入的个数、
```
n occurs m times
```
当输入都不重复时，其中n为每一个输入的值
```
n occurs 1 times
```
***
### **练习 1.18**
>编译并运行本节的程序，给它输入全都相等的值。再次运行程序，输入没有重复的值。

Code：
```c++
#include<iostream>
int main() {
	int currVal = 0, val= 0;
	if (std::cin >> currVal) {
		int cnt = 1;
		while (std::cin >> val) {
			if (val == currVal) {
				cnt++;
			}
			else {
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}
```
Result:  
![1 18 1](img/1-18-1.png)
![1 18 2](img/1-18-2.png)
***
### **练习 1.19**
>修改你为1.4.1 节练习1.10（第 11 页）所编写的程序（打印一个范围内的数），使其能处理用户输入的第一个数比第二个数小的情况。

(感觉题目错了，第一应该是1.11,第二应该是第一个比第二个大的情况)  
Code:
```c++
#include<iostream>
int main() {
	int l = 0, r = 0;
	std::cout << "Enter two numbers,I will return the numbers between them." << std::endl;
	std::cin >> l >> r;
	if (l > r) {
		int t = l;
		l = r;
		r = t;
	}
	while (l <= r) {
		std::cout << l++ << " ";
	}
	std::cout << std::endl;
	return 0;
}
```

Result:  
![1 19](img/1-19.png)
***
### **练习 1.20**
>在网站 http∶//www.informit.com/title/0321714113 上，第1章的代码目录中包含了头文件 Sales item.h。将它拷贝到你自己的工作目录中。用它编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。

Code:
```c++
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item;
	int i=1;
	while (std::cin >> item) {
		std::cout << "第" << i++ << "条记录是" << item << std::endl;
	}
	return 0;
}
```
Result:
![1 20](img/1-20.png)

***
### **练习 1.21**
>编写程序，读取两个 工SBN 相同的 Sales item 对象，输出它们的和。

Code:
```c++
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1,item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()) {
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else {
		std::cerr << "Data must be the same ISNB" << std::endl;
		return -1;
	}
}
```

Result:
![1 21](img/1-21.png)
***
### **练习 1.22**
>编写程序，读取多个具有相同ISBN 的销售记录，输出所有记录的和。

Code:
```c++
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total,item;
	if (std::cin >> total) {
		while (std::cin >> item) {
			if (total.isbn() == item.isbn()) {
				total += item;
			}
			else {
				std::cout << "sum is " << total << std::endl;
				total = item;
			}
		}
		std::cout << "sum is " << total << std::endl;
		return 0;
	}
	else {
		std::cerr << "数据不足量" << std::endl;
		return -1;
	}
}
```
Result:
![](img/1-22.png)
*小问题：现在这样的输入输出略丑，能不能实现在输入完成后再输出？*
***
### **练习 1.23**
>编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。

Code:
```c++
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item total, item;
	int cnt = 1;
	if (std::cin >> total) {
		while (std::cin >> item) {
			
			if (total.isbn() == item.isbn()) {
				cnt++;
			}
			else {
				std::cout << "ISBN为" <<total.isbn()<<"的记录有"<< cnt <<"条"<< std::endl;
				total = item;
				cnt = 1;
			}
		}
		std::cout << "ISBN为" << total.isbn() << "的记录有" << cnt << "条" << std::endl;
		return 0;
	}
	else {
		std::cerr << "数据不足量" << std::endl;
		return -1;
	}
}
```

Result:
![](img/1-23.png)
***
### **练习 1.24**
>输入表示多个 ISBN 的多条销售记录来测试上一个程序，每个ISBN 的记录应该聚在一起。

没怎么看出来和上题有什么区别，可能是想让我们练练文件重定向？
要是不用vs的话可以直接 
```bash
[编译出来的exe程序名] <in.txt >out.txt
```
vs话得打开 项目-属性-配置属性-调试-命令参数 中输入<in.txt >out.txt，再在in.txt中输入数据，即可，如图：
![](img/1-24-1.png)

Result:
![](img/1-24-2.png)
***
### **练习 1.25**
>借助网站上的 Sales item.h头文件，编译并运行本节给出的书店程序。
目测和我写的1.22差不多，不赘述了。

***
## 第2章 变量和基本类型