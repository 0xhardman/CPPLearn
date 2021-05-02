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
	- [**练习 2.1**](#练习-21)
	- [**练习 2.2**](#练习-22)
	- [**练习 2.3**](#练习-23)
	- [**练习 2.4**](#练习-24)
	- [**练习 2.5**](#练习-25)
	- [**练习 2.6**](#练习-26)
	- [**练习 2.7**](#练习-27)
	- [**练习 2.8**](#练习-28)
	- [**练习 2.10**](#练习-210)
	- [**练习 2.11**](#练习-211)
	- [**练习 2.12**](#练习-212)
	- [**练习 2.13**](#练习-213)
	- [**练习 2.14**](#练习-214)
	- [**练习2.15**](#练习215)
	- [**练习2.16**](#练习216)
	- [**练习2.18**](#练习218)
	- [**练习2.19**](#练习219)
	- [**练习2.20**](#练习220)
	- [**练习 2.21**](#练习-221)
	- [**练习 2.22**](#练习-222)
	- [**练习 2.23**](#练习-223)
	- [**练习 2.24**](#练习-224)
	- [**练习 2.25**](#练习-225)
	- [**练习 2.26**](#练习-226)
	- [**练习 2.27**](#练习-227)
	- [**练习 2.28**](#练习-228)
	- [**练习 2.29**](#练习-229)
	- [**练习 2.30**](#练习-230)
	- [**练习 2.31**](#练习-231)
	- [**练习 2.32**](#练习-232)
	- [**练习 2.33**](#练习-233)
	- [**练习 2.34**](#练习-234)
	- [**练习 2.35**](#练习-235)
	- [**练习 2.36**](#练习-236)
	- [**练习 2.37**](#练习-237)
	- [**练习 2.38**](#练习-238)
	- [**练习 2.39**](#练习-239)
	- [**练习 2.40**](#练习-240)
	- [**练习 2.41**](#练习-241)
- [**练习 2.42**](#练习-242)

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
### **练习 2.1**
>类型int、long、long long和 short 的区别是什么?无符号类型和带符号类型的区别是什么? float 和 double 的区别是什么?

1. 最小尺寸不同，int short16字节，long32字节，long long64字节。
2. 区别在于：
   1. 写法上：带符号类型通常没有前缀，无符号的须要在带符号类型名前加上unsigned即可，字符型的带符号与无符号比较特殊有char，signchar，unsigned char三种类型，但字符表现类型却只有两种。
   2. 数值上：带符号可以表示正数、负数、0，无符号只能表示大于等于零的值。
3. 也是最小尺寸的区别，double要更长，但实际上double更受到欢迎。
### **练习 2.2**
>计算按揭贷款时，对于利率、本金和付款分别应选择何种数据类型?说明你的理由。

分别用unsigned float，unsigned int，unsigned double来存，利率精度要求不高，也就小数后两三位且为正数，unsigned float足矣，本金一般为整数且数额较大为正数且不超过int的范围，所以用unsigned int,付款的金额也较大，也有一定的精度要求所以选用unsigned fouble。
***
### **练习 2.3**
读程序写结果。
```c++
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
```
预期32,4294967264,32,-32,0,0
***
### **练习 2.4**
>编写程序检查你的估计是否正确，如果不正确，请仔细研读本节直到弄明白问题所在。

Code:
```c++
#include<iostream>
int main() {
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;
}
```
Result:  
![](img/2-03.png)  
没错符合预期。
***
### **练习 2.5**
>指出下述字面值的数据类型并说明每一组内几种字面值的区别∶  
>(a) 'a',L'a',"a",L"a"  
>(b) 10,10u,10L,10uL,012,0xC  
>(c)3.14,3.14f,3.14L  
>(d) 10,10u,10.,10e-2  
***
1. 字符字面值a，wchar_t型字符字面值a，字符串字面值a，wchar_t型字符串字面值a
2. int型整型字面值10，unsigned int型整型字面值10，long型整型字面值10，unsigned long型整型字面值10，八进制表示的整型字面值10，十六进制表示的整型字面值12
3. double型浮点型字面值，float型浮点型字面值，long double型浮点型字面值
4. int型整型字面值10，unsigned int型整型字面值10，小数点表示的double型浮点型字面值10，科学计数法表示的double字面值0.1
### **练习 2.6**
>下面两组定义是否有区别，如果有，请叙述之∶  
>int month = 9,day = 7;   
>int month = 09,day = 07;

有区别，上面一行是通过十进制表示的字面量，下面是八进制，且在字段month上是无效的9已经大于8  
![](img/2-06.png)
### **练习 2.7**
>下述字面值表示何种含义?它们各自的数据类型是什么?  
>(a) "Who goes with F\145rgus?\012"  
>(d) 3.14e1L  
>(b) 1024f  
>(c) 3.14L

1. Who goes with Fergus? 字符串字面值
2. 31.4 long double型浮点型字面值
3. 1024.0 float型浮点型字面值
4. 3.14 long double型浮点型字面值
***
### **练习 2.8**
请利用转义序列编写一段程序，要求先输出 2M，然后转到新一行。修改程序使其先输出 2，然后输出制表符，再输出 M，最后转到新一行。

Code:
```c++
#include<iostream>
int main() {
	std::cout << 2 << "\115\12";
	std::cout << 2 << "\t\115\12";
	return 0;
}
```
Result:  
![](img/2-08.png)
***
###**练习 2.9**
>解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正。  
(a) std::cin >> int input_value;
(b) int i= {} 3.14 };  
(c)double salary = wage = 9999.99;  
(d)int i = 3.14;

1. 非法这题能体现出赋值和初始化的区别，>>输入运算符的工作是将输入流istream中的数据赋值给>>右边的变量，而对变量赋值并不是初始化工作。也就是说该变量未经初始化，因而报错。应改为
```c++
int input_value;
std::cin >> input_value;
```
2. 非法，因为列表初始化存在丢失信息的风险。应该为：
```c++
int i=(3.14);
```
3. 非法，error: ‘wage’ was not declared in this scope，这条表达式的意思是将9999.99赋值给wage这个变量，然后用wage这个变量来初始化这个salary变量。由于在赋值操作时，编译器未找到wage这个变量，那么就会报错。应改为：
```c++
double wage;
double salary = wage = 9999.99;
```
4. 没毛病
### **练习 2.10**
>下列变量的初值分别是什么?
>```c++
>std: :string global_str; 
>int global_int; 
>int main ()
>{
>	int local_int;
>	std::string local_str;
>}
>
>```

猜测是 空串，0，undefined，undefined，实验可得，有一些偏差，global_str和local_str都为空串（因为类本身就这么定义），int为内置类型，在函数外会被初始化为0，在函数内未被初始化为undefined。
***
### **练习 2.11**
>指出下面的语句是声明还是定义∶  
(a)extern int ix = 1024;  
(b) int iy;  
(c) extern int iz;

定义（虽然有extern但进行了初始化）、定义、声明
***
### **练习 2.12**
>请指出下面的名字中哪些是非法的?  
(a) int double = 3.14;  
(b) int _;  
(c) int catch-22;  
(d) int 1_or_2 = 1;  
(e) double Double = 3.14;

acd是非法的，a关键字冲突，c使用了减号而非下划线，d数字开头不合法。
***
### **练习 2.13**
>下面程序中j的值是多少?
>```c++
>int i = 42;
>int main()
>{
>    int i = 100;
>    int j = i;
>}
>```

100

***
### **练习 2.14**
>下面的程序合法吗?如果合法，它将输出什么?
>```c++
>int i = 100, sum = 0;
>for (int i = 0; i != 10; ++i)
>    sum += i;
>std::cout << i << " " << sum << std::endl;
>```

100 45
***
### **练习2.15**
>下面的哪个定义是不合法的？为什么？
>- (a) int ival = 1.01;
>- (b) int &rval1 = 1.01;
>- (c) int &rval2 = ival;
>- (d) int &rval3;
***
1. 合法
2. 不合法，引用只能绑定在对象上
3. 合法
4. 不合法，引用必须被初始化

###  **练习2.16**
>考察下面的所有赋值然后回答：哪些赋值是不合法的？为什么？哪些赋值是合法的？它们执行了哪些操作？
>
>```cpp
>int i = 0, &r1 = i; 
>double d = 0, &r2 = d;
>```
>- (a) r2 = 3.14159;
>- (b) r2 = r1;
>- (c) i = r2;
>- (d) r1 = d;
- (a) 合法，给d赋值3.14159
- (b) 合法，给d赋值0，且发生强制类型转化（int->double）
- (c) 合法，给i赋值0，且发生强制转化（double->int，截去小数位）
- (d) 合法，给i赋值0，且发生强制转化（double->int，截去小数位）
***
>### **练习2.17**
>执行下面的代码段将输出什么结果？
>```cpp
>int i, &ri = i;
>i = 5; ri = 10;
>std::cout << i << " " << ri << std::endl;
>```
10 10
***
### **练习2.18**
>编写代码分别改变指针的值以及指针所指对象的值。
```cpp
int val1=1,val2=2;
int *p1=0,*p2=0;

//改变指针的值
p1=&val1;
p2=&val2;
//改变指针所指对象的值
*p2=*p1;
```
***
### **练习2.19**
>说明指针和引用的主要区别  

引用其实就是别名，指针是一种用来存储对象位置的对象，  
引用必须被初始化，且完成就不可修改。指针则无需如此。
***
### **练习2.20**
>请叙述下面这段代码的作用。
>
>```cpp
>int i = 42;
>int *p1 = &i; 
>*p1 = *p1 * *p1;
>```

求42*42的结果

***
### **练习 2.21**
>请解释下述定义。在这些定义中有非法的吗？如果有，为什么？
>`int i = 0;`
>- (a) double* dp = &i;
>- (b) int *ip = i;
>- (c) int *p = &i;

- a 非法，指针类型不同
- b 非法，不能将int变量赋值给指针
- c 合法，
***
### **练习 2.22**
>假设 p 是一个 int 型指针，请说明下述代码的含义。
>
>```cpp
>if (p) // 如果p非空指针则...
>if (*p) // 如果p所指对象非0则...
>```
***
### **练习 2.23**
>给定指针 p，你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路；如果不能，也请说明原因。

不能，得首先确实p的合法性，才能确认其所指对象的合法性
***
### **练习 2.24**
在下面这段代码中为什么 p 合法而 lp 非法？
>```cpp
>int i = 42;
>void *p = &i;
>long *lp = &i;
>```

指针和被指向的对象类型必须匹配所以lp非法，而void比较特殊，可以指向任何类型的对象所以p合法
***
### **练习 2.25**
> 说明下列变量的类型和值。
> ```cpp
> (a) int* ip, i, &r = i;
> (b) int i, *ip = 0;
> (c) int* ip, ip2;
>```

- a ip是指向int型对象的指针，i是int型对象，r是i的引用
- b i是int型对象，ip是空指针
- c ip是指向int的指针，ip2是int
***
### **练习 2.26**
>下面哪些语句是合法的？如果不合法，请说明为什么？
>
>```cpp
>const int buf;      // 不合法, const 对象必须初始化
>int cnt = 0;        // 合法
>const int sz = cnt; // 合法
>++cnt; ++sz;        // 不合法, const 对象不能被改变
>```
***
### **练习 2.27**
>下面的哪些初始化是合法的？请说明原因。
>```cpp
>int i = -1, &r = 0;         // 不合法, r 必须引用一个对象
>int *const p2 = &i2;        // 合法，常量指针
>const int i = -1, &r = 0;   // 合法
>const int *const p3 = &i2;  // 合法
>const int *p1 = &i2;        // 合法
>const int &const r2;        // 不合法, r2 是引用，引用没有顶层 const，即有对常量的应用，而没有引用的常量
>const int i2 = i, &r = i;   // 合法
>```
***

### **练习 2.28**
>说明下面的这些定义是什么意思，挑出其中不合法的。
>```cpp
>int i, *const cp;       // 不合法, const 指针必须初始化
>int *p1, *const p2;     // 不合法, const 指针必须初始化
>const int ic, &r = ic;  // 不合法, const int 必须初始化
>const int *const p3;    // 不合法, const 指针必须初始化
>const int *p;           // 合法. 一个指针，指向 const int
>```
***
### **练习 2.29**
>假设已有上一个练习中定义的那些变量，则下面的哪些语句是合法的？请说明原因。
>```cpp
>i = ic;     // 合法, 常量赋值给普通变量
>p1 = p3;    // 不合法, p3 是const指针不能赋值给普通指针
>p1 = &ic;   // 不合法, 普通指针不能指向常量
>p3 = &ic;   // 不合法, p3 是常量指针，已被初始化不可再赋值
>p2 = p1;    // 不合法, p2 是常量指针，已被初始化不可再赋值
>ic = *p3;   // 合法, 对 p3 取值后是一个const int 然后赋值给 ic
>```
***
 

### **练习 2.30**
>对于下面的这些语句，请说明对象被声明成了顶层const还是底层const？
>
>```cpp
>const int v2 = 0; int v1 = v2;
>int *p1 = &v1, &r1 = v1;
>const int *p2 = &v2, *const p3 = &i, &r2 = v2;
>```
v1都不是 v2顶层const，p1，r1啥都不是，p2底层const，p3既是顶层const又是底层const，r2底层const
***

### **练习 2.31**
>假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现。
>```cpp
>r1 = v2; // 合法, 顶层const在拷贝时不受影响
>p1 = p2; // 不合法, p2 是底层const，如果要拷贝必须要求 p1 也是底层const
>p2 = p1; // 合法, int* 可以转换成const int*
>p1 = p3; // 不合法, p3 是一个底层const，p1 不是
>p2 = p3; // 合法, p2 和 p3 都是底层const，拷贝时忽略掉顶层const
>```
***

### **练习 2.32**
>下面的代码是否合法？如果非法，请设法将其修改正确。
>```cpp
>int null = 0, *p = null;
>```

不合法
```cpp
int null = 0，*p = &null;
```
***

### **练习 2.33**
利用本节定义的变量，判断下列语句的运行结果。
>```cpp
>a=42; // a 是 int,a=42
>b=42; // b 是一个 int,(ci的顶层const在拷贝时被忽略掉了) b=42
>c=42; // c 也是一个int c=42
>d=42; // d 是一个 int *,所以语句非法
>e=42; // e 是一个 const int *, 所以语句非法
>g=42; // g 是一个 const int &，引用都是底层const，所以不能被赋值
>```
***

### **练习 2.34**
>基于上一个练习中的变量和语句编写一段程序，输出赋值前后变量的内容，你刚才的推断正确吗？如果不对，请反复研读本节的示例直到你明白错在何处为止。

Code:
```cpp
#include <iostream>
int main()
{
    int i = 0, & r = i;
    auto a = r;   

    const int ci = i, & cr = ci;
    auto b = ci; 
    auto c = cr; 
    auto d = &i; 
    auto e = &ci; 

    const auto f = ci; 
    auto& g = ci; 

    a = 42; b = 42; c = 42;

    return 0;
}
```
Result:  
![](img/2-34.png)  
基本符合预期
***
### **练习 2.35**
>判断下列定义推断出的类型是什么，然后编写程序进行验证。
>
>```cpp
>const int i = 42;
>auto j = i; const auto &k = i; auto *p = &i; 
>const auto j2 = i, &k2 = i;
>```

预测：  
	i->const int;  
	j->int;  
	k->const int &;  
	p->int *;  
	j2->const int;  
	k2->const int &;  
Code:  
```cpp
#include <iostream>
int main()
{
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i;
    const auto j2 = i, & k2 = i;
    return 0;
}
```
Result:  
![](img/2-35.png)  
!!!目测除了p应该都是对的。
总结：  
const或auto 会对每个逗号签的声明符进行修饰，
\* \& 只从属某一个声明符
auto会忽略顶层contst，而在auto *p=\&i;中const int *的const是底层const（p所指的对象是一个常量）
***

### **练习 2.36**
>关于下面的代码，请指出每一个变量的类型以及程序结束时它们各自的值。
>
>```cpp
>int a = 3, b = 4;
>decltype(a) c = a;
>decltype((b)) d = a;
>++c;
>++d;
>```

|     |       |     |
| --- | ----- | --- |
| a   | int   | 4   |
| b   | int   | 4   |
| c   | int   | 4   |
| d   | int & | 4   |

***

### **练习 2.37**
>赋值是会产生引用的一类典型表达式，引用的类型就是左值的类型。也就是说，如果 i 是 int，则表达式 i=x 的类型是 int&。根据这一特>点，请指出下面的代码中每一个变量的类型和值。
>
>```cpp
>int a = 3, b = 4;
>decltype(a) c = a;
>decltype(a = b) d = a;
>```

|     |       |     |
| --- | ----- | --- |
| a   | int   | 3   |
| b   | int   | 4   |
| c   | int   | 3   |
| d   | int & | 3   |
***

### **练习 2.38**
>说明由decltype 指定类型和由auto指定类型有何区别。请举一个例子，decltype指定的类型与auto指定的类型一样；再举一个例子，decltype指定的类型与auto指定的类型不一样。

区别：
1. 若decltype使用的表达式是一个变量则decltype返回该变量的类型（包括顶层const和引用在内），而auto则会忽略顶层const，如果设置一个类型为auto的引用时，初始值中的顶层常量属性任然保留。
2. 如果表达式的内容是解引用操作，则decltype将会得到引用类型。decltype的结果类型与表达式形式密切相关。

举例：
```cpp
#include<iostream>
int main() {
	const int a = 1;
	auto b = a;
	decltype(a) c=a;
	const auto d = a;
	//其中a->const int,b->int,c->const int,d->const int
	const int& r = a;
	auto p = r;//实际上此处的r就是a，所以p的类型是int
	decltype(r) k = a;//因为decltype比较特殊，还是把r看做是r
	//其中r->cosnt int &,p->int,k->const int &
	const int* j = &a;
	auto i = j;
	decltype(j) n = 0;
	//相同的举例i->const int *,j->const int *,n->const int *
	return 0;
}
```
Result:  
![](img/2-38.png)
***

### **练习 2.39**
>编译下面的程序观察其运行结果，注意，如果忘记写类定义体后面的分号会发生什么情况？记录下相关的信息，以后可能会有用。
>```cpp
>struct Foo { /* 此处为空  */ } // 注意：没有分号
>int main()
>{
>    return 0;
>}
>```

Result:  
![](img/2-39.png)
***

### **练习 2.40**
>根据自己的理解写出 Sales_data 类，最好与书中的例子有所区别。

```cpp
struct Sale_data
{
    std::string isbn;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};
```
***

### **练习 2.41**
>使用你自己的Sale_data类重写1.5.1节（第20页）、1.5.2节（第21页）和1.6节（第22页）的练习。眼下先把Sales_data类的定义和main函数放在一个文件里。
```c++
#include<iostream>
struct Sale_data
{
    std::string isbn;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};
//1.5.1
//int main() {
//    Sale_data data;
//    while (std::cin >> data.isbn >> data.units_sold >> data.price) {
//        data.revenue = data.units_sold * data.price;
//        std::cout << data.isbn 
//            << " "<< data.units_sold 
//            << " " << data.revenue 
//            << " " << data.price
//            << std::endl;
//    }
//	return 0;
//}
//1.5.2
//int main() {
//    Sale_data data1, data2;
//    std::cin >> data1.isbn >> data1.units_sold >> data1.price;
//    std::cin >> data2.isbn >> data2.units_sold >> data2.price;
//    data1.revenue = data1.price * data1.units_sold;
//    data2.revenue = data2.price * data2.units_sold;
//    Sale_data sum;
//    if (data1.isbn == data2.isbn) {
//        sum.isbn = data1.isbn;
//        sum.units_sold = data1.units_sold + data2.units_sold;
//        sum.revenue = data1.revenue + data2.revenue;
//        sum.price = sum.revenue / sum.units_sold;
//    }
    //std::cout << sum.isbn << " "
    //    << sum.units_sold << " "
    //    << sum.revenue << " "
    //    << sum.price << std::endl;
//    
//    return 0;
//}

//1.6
int main() {
    Sale_data total, curr;
    if (std::cin >> total.isbn >> total.units_sold >> total.price) {
        total.revenue = total.units_sold * total.price;
        while (std::cin >> curr.isbn >> curr.units_sold >> curr.price) {
            if (total.isbn == curr.isbn) {
                curr.revenue = curr.units_sold * curr.price;
                total.revenue += curr.revenue;
                total.units_sold += curr.units_sold;
                total.price = total.revenue / total.units_sold;
            }
            else {
                std::cout << total.isbn << " "
                    << total.units_sold << " "
                    << total.revenue << " "
                    << total.price << std::endl;
                total.isbn = curr.isbn;
                total.units_sold = curr.units_sold;
                total.price = curr.price;
                total.revenue=curr.price*curr.units_sold;
            }
            
        }
        std::cout << total.isbn << " "
            << total.units_sold << " "
            << total.revenue << " "
            << total.price << std::endl;
    }
    else {
        std::cout << "数据量不足" << std::endl;
    }
}
```

测试过了，没啥问题。
***
## **练习 2.42**
>根据你自己的理解重写一个Sales_data.h头文件，并以此为基础重做2.6.2节（第67页）的练习。

感觉和上题差不多啊，吧struct的东西丢同名.h文件里然后include下就ok吧。不写了
***