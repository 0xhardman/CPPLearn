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
	//i->const int *,j->const int *,n->const int *
	return 0;
}