#include<iostream>
int main() {
	const int a = 1;
	auto b = a;
	decltype(a) c=a;
	const auto d = a;
	//����a->const int,b->int,c->const int,d->const int
	const int& r = a;
	auto p = r;//ʵ���ϴ˴���r����a������p��������int
	decltype(r) k = a;//��Ϊdecltype�Ƚ����⣬���ǰ�r������r
	//����r->cosnt int &,p->int,k->const int &
	const int* j = &a;
	auto i = j;
	decltype(j) n = 0;
	//i->const int *,j->const int *,n->const int *
	return 0;
}