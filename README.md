# ��C++ Primer������棩����ϰ��¼
- [��1�� ��ʼ](#��1��-��ʼ)
	- [**��ϰ 1.1**](#��ϰ-11)
	- [**��ϰ 1.2**](#��ϰ-12)
	- [**��ϰ 1.3**](#��ϰ-13)
	- [**��ϰ 1.4**](#��ϰ-14)
	- [**��ϰ 1.5**](#��ϰ-15)
	- [**��ϰ 1.6**](#��ϰ-16)
	- [**��ϰ 1.7**](#��ϰ-17)
	- [**��ϰ 1.8**](#��ϰ-18)
	- [**��ϰ 1.9**](#��ϰ-19)
	- [**��ϰ 1.10**](#��ϰ-110)
	- [**��ϰ 1.11**](#��ϰ-111)
	- [**��ϰ 1.12**](#��ϰ-112)
	- [**��ϰ 1.13**](#��ϰ-113)
	- [**��ϰ 1.14**](#��ϰ-114)
	- [**��ϰ 1.15**](#��ϰ-115)
	- [**��ϰ 1.16**](#��ϰ-116)
	- [**��ϰ 1.17**](#��ϰ-117)
	- [**��ϰ 1.18**](#��ϰ-118)
	- [**��ϰ 1.19**](#��ϰ-119)
	- [**��ϰ 1.20**](#��ϰ-120)
	- [**��ϰ 1.21**](#��ϰ-121)
	- [**��ϰ 1.22**](#��ϰ-122)
	- [**��ϰ 1.23**](#��ϰ-123)
	- [**��ϰ 1.24**](#��ϰ-124)
	- [**��ϰ 1.25**](#��ϰ-125)
- [��2�� �����ͻ�������](#��2��-�����ͻ�������)

## ��1�� ��ʼ
### **��ϰ 1.1**
>������ʹ�õı��������ĵ���ȷ������ʹ�õ��ļ�����Լ�������벢���е� 2ҳ��main ����

û���ҵ�ֱ���롰�ļ�����Լ������ص��ĵ������ҵ��˹���VS��**�������**��**��Ŀ**����������һ����������п����ж����Ŀ���ڴ˾ͼ�¼��VS��C++��΢����ĵ��ɡ�

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
### **��ϰ 1.2**
>��д������������-1������ֵ-1 ͨ���������������ı�ʶ�����±��벢������ĳ��򣬹۲����ϵͳ��δ��� main ���صĴ����ʶ��  

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
�Ա�1-1������-1��Ϊ�˳����롣
***
### **��ϰ 1.3**
>��д�����ڱ�׼����ϴ�ӡHello��World��

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

### **��ϰ 1.4**
>���ǵĳ���ʹ�üӷ������+������������ӡ���д����ʹ�ó˷������\*������ӡ�������Ļ���  
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
### **��ϰ 1.5**
>���ǽ����������������һ���ܳ�������С���д���򣬽�ÿ���������Ĵ�ӡ��������һ������������С�

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
### **��ϰ 1.6**
>�����������Ƭ���Ƿ�Ϸ���
>```c++
>std: :cout << "The sum of " << v1;
>		<< " and " << v2;
>		<<" is "<< v1 + v2 << std::endl;
>```��������ǺϷ��ģ������ʲô? ������򲻺Ϸ���ԭ�����?Ӧ���������?
���Ϸ�������д�����������з��ֻᱬ�첢ͨ�����˱��룺  
![1 6 1](img/1-6-1.png)  
���Ϊ��  
![1 6 2](img/1-6-2.png)  
ԭ�����ڣ�<<������㷨������������󣬼�<<��һ����Ԫ�����������д�������㣬�����﷨����Ӧ�������һ�еķֺ�ɾȥ����  
```c++
std::cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << std::endl;
```
***
### **��ϰ 1.7**
>����һ����������ȷ��Ƕ��ע�͵ĳ��򣬹۲���������صĴ�����Ϣ��  
Code:
```c++
int main() {
	/*/*Ƕ��ע�Ͳ���*/*/
	return 0;
}
```
Result:
![1 7](img/1-7.png)  
�Ὣ��һ��/\*�͵�һ��\*/ʶ��Ϊһ�飬ʣ�µ�һ��*/��Ϊ�﷨����
***
### **��ϰ 1.8**
>ָ��������Щ�������ǺϷ��ģ�����еĻ�����
>```c++
>std::Cout <<"/*"; 
>std::cout <<"*/";
>std::cout <</*"*/" */;
>std::cout <</*"*/" / * "/*"*/;
>```
>Ԥ�������Щ�������ʲô���Ľ����ʵ�ʱ�����Щ�������֤��Ĵ𰸣���дһ��С����ÿ�ν�����һ�������Ϊ�����壩������ÿ���������  

Ԥ���һ������"/\*"���ڶ������"\*/",�����䱨����Ϊһ��ע�ͷ��ŵİ����»�ʧȥһ��"�����ţ����´��󣬵����������"/*"��  
Result:
![1 8 1](img/1-8-1.jpg)  
![1 8 2](img/1-8-2.png)
![1 8 3](img/1-8-3.png)
![1 8 4](img/1-8-4.png)  
��������Ԥ�ڣ��޸ģ������ڵ����ַֺ�ǰ��һ�����ż��ɣ����Ϊ\*/
```c++
	std::cout <</*"*/"*/";
```
***
### **��ϰ 1.9**
>��д����ʹ��whileѭ���� 50 ��100 ��������ӡ�

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
### **��ϰ 1.10**
>����++���������������ֵ���� 1 ֮�⣬����һ���ݼ������������ʵ�ֽ�ֵ���� 1����д����ʹ�õݼ��������ѭ���а��ݼ�˳���ӡ�� 10 �� 0 ֮���������

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
### **��ϰ 1.11**
>��д������ʾ�û�����������������ӡ��������������ָ���ķ�Χ�ڵ�����������

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
### **��ϰ 1.12**
>����� for ѭ�������ʲô����?sum����ֵ�Ƕ���?
>```c++
>int sum = 0;
>for (int i = -100;i <= 100;++i)
>	sum ��= i;

�����-100-100���ۼӣ����Ϊ0��
***
### **��ϰ 1.13**
>ʹ�� forѭ������1.4.1 ���е�������ϰ���� 11 ҳ����

Code:
```c++
#include<iostream>
int main() {
	int i=0, l=0, r=0, sum=0;
	std::cout << "forʵ��1.9" << std::endl;
	for (i = 50; i <= 100; i++) {
		sum += i;
	}
	std::cout <<"50-100����֮��Ϊ"<< sum << std::endl<<"forʵ��1.10"<<std::endl;
	for (i = 10; i >= 0; i--) {
		std::cout << i << " ";
	}
	std::cout << std::endl << "forʵ��1.11"<<std::endl << "��������������,�˴���������߼����������" << std::endl;
	std::cin >> l >> r;
	for (; l <= r; l++) {
		std::cout << l << " ";
	}
	return 0;
}
```
Result:
![1 15](img/1-13.png)
### **��ϰ 1.14**
>�Ա� for ѭ���� while ѭ����������ʽ����ȱ�����ʲô?


for���while���Ը��淶��ʵ�ֵ������ĳ�ʼ���͵������������ڡ���������������������ģʽ��  
while���forʹ������Ҳ����㣬���ҿ������ö��ֵ����仯��������

***
### **��ϰ 1.15**
>��д���򣬰����� 14 ҳ"��̽����"�����۵ĳ���������Ϥ���������ɵĴ�����Ϣ��
```c++
#include<iostream>
//�﷨����ʾ��
//��ȷʾ��
//int main() {
//����ʾ����main�Ĳ����б�©����
int main��{
	//��ȷʾ��
	//std::cout << "Read each file." << std::endl;
	//����ʾ����endl��ʹ����ð�Ŷ��Ƿֺ�
	std::cout<<"Read each file."<<std::endl:
	//��ȷʾ��
	//std::cout << "Update master" << std::endl;
	//����ʾ��
	std::cout << Update master << std::end1;
	//��ȷʾ��
	//std::cout << "Write new master" << std::endl;
	//����ʾ����©���˵ڶ�����������
	std::cout << "Write new master." std::endl;
	
	//���ʹ���ʾ��
	int a = 10;
	//�����ַ�������int
	a = "hello";

	//��������
	int v1 = 0, v2 = 0;
	std::cin >> v >> v2;
	cout << v1 + v2 << std::endl;
	//��ȷʾ��
	//return 0;
	//����ʾ��
	return 0
}
```
Result:
![1 15](img/1-15.png)
***
### **��ϰ 1.16**
>��д���򣬴�cin��ȡһ�����������͡�

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
### **��ϰ 1.17**
>������������ֵ������ȵģ����ڵĳ�������ʲô?���û���ظ�ֵ������ֻ���������?

�����������ֵ���ʱ������ǣ�����n�������ֵ��mΪ����ĸ�����
```
n occurs m times
```
�����붼���ظ�ʱ������nΪÿһ�������ֵ
```
n occurs 1 times
```
***
### **��ϰ 1.18**
>���벢���б��ڵĳ��򣬸�������ȫ����ȵ�ֵ���ٴ����г�������û���ظ���ֵ��

Code��
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
### **��ϰ 1.19**
>�޸���Ϊ1.4.1 ����ϰ1.10���� 11 ҳ������д�ĳ��򣨴�ӡһ����Χ�ڵ�������ʹ���ܴ����û�����ĵ�һ�����ȵڶ�����С�������

(�о���Ŀ���ˣ���һӦ����1.11,�ڶ�Ӧ���ǵ�һ���ȵڶ���������)  
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
### **��ϰ 1.20**
>����վ http��//www.informit.com/title/0321714113 �ϣ���1�µĴ���Ŀ¼�а�����ͷ�ļ� Sales item.h���������������Լ��Ĺ���Ŀ¼�С�������дһ�����򣬶�ȡһ���鼮���ۼ�¼����ÿ����¼��ӡ����׼����ϡ�

Code:
```c++
#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item item;
	int i=1;
	while (std::cin >> item) {
		std::cout << "��" << i++ << "����¼��" << item << std::endl;
	}
	return 0;
}
```
Result:
![1 20](img/1-20.png)

***
### **��ϰ 1.21**
>��д���򣬶�ȡ���� ��SBN ��ͬ�� Sales item ����������ǵĺ͡�

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
### **��ϰ 1.22**
>��д���򣬶�ȡ���������ͬISBN �����ۼ�¼��������м�¼�ĺ͡�

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
		std::cerr << "���ݲ�����" << std::endl;
		return -1;
	}
}
```
Result:
![](img/1-22.png)
*С���⣺������������������Գ��ܲ���ʵ����������ɺ��������*
***
### **��ϰ 1.23**
>��д���򣬶�ȡ�������ۼ�¼����ͳ��ÿ��ISBN��ÿ���飩�м������ۼ�¼��

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
				std::cout << "ISBNΪ" <<total.isbn()<<"�ļ�¼��"<< cnt <<"��"<< std::endl;
				total = item;
				cnt = 1;
			}
		}
		std::cout << "ISBNΪ" << total.isbn() << "�ļ�¼��" << cnt << "��" << std::endl;
		return 0;
	}
	else {
		std::cerr << "���ݲ�����" << std::endl;
		return -1;
	}
}
```

Result:
![](img/1-23.png)
***
### **��ϰ 1.24**
>�����ʾ��� ISBN �Ķ������ۼ�¼��������һ������ÿ��ISBN �ļ�¼Ӧ�þ���һ��

û��ô��������������ʲô���𣬿������������������ļ��ض���
Ҫ�ǲ���vs�Ļ�����ֱ�� 
```bash
[���������exe������] <in.txt >out.txt
```
vs���ô� ��Ŀ-����-��������-����-������� ������<in.txt >out.txt������in.txt���������ݣ����ɣ���ͼ��
![](img/1-24-1.png)

Result:
![](img/1-24-2.png)
***
### **��ϰ 1.25**
>������վ�ϵ� Sales item.hͷ�ļ������벢���б��ڸ�����������
Ŀ�����д��1.22��࣬��׸���ˡ�

***
## ��2�� �����ͻ�������