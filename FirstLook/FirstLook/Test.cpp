#define _CRT_SECURE_NO_WARNINGS 1

// test.cpp
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	printf("hello world\n");
//	return 0;
//}
//1.正常的命名空间定义
//#include<stdio.h>
//#include<stdlib.h>
//namespace zyh
//{
//	int rand = 10;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//int main()
//{
//	printf("%p\n", rand);
//	printf("%d\n", zyh::rand);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>

// 域
//namespace zyh
//{
//	namespace a
//	{
//		int rand = 1;
//		int Add(int left, int right)
//		{
//		return left + right;
//		}
//	}
//
//	namespace b
//	{
//		int rand = 2;
//		int Add(int left, int right)
//		{
//			return (left + right) * 10;
//		}
//	}
//}
//
//int main()
//{
//	printf("%d\n", zyh::a::rand);
//	printf("%d\n", zyh::b::rand);
//	return 0;
//}
//#include<stdio.h>
//#include"Stack.h"
//
//// 全局定义了一份单独的Stack
//typedef struct Stack
//{
//	int a[10];
//	int top;
//}ST;
//void STInit(ST* ps) {}
//void STPush(ST* ps, int x) {}
//
//int main()
//{
//	// 调用全局的
//	ST st1;
//	STInit(&st1);
//	STPush(&st1, 1);
//	STPush(&st1, 2);
//	printf("%d\n", sizeof(st1));
//
//	// 调用zyh namespace的
//	zyh::ST st2;
//	printf("%d\n", sizeof(st2));
//	zyh::STInit(&st2, 4);
//	zyh::STPush(&st2, 1);
//	zyh::STPush(&st2, 2);
//
//	return 0;
//}
// 展开头文件
//#include <stdio.h>
//namespace zyh
//{
//	int a = 0;
//	int b = 1;
//}
//
////using namespace bit;
//using zyh::a;
//
//int main()
//{
//	int a = 1;
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", a);
//	printf("%d\n", zyh::a);
//	printf("%d\n", zyh::b);
//
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 1234;
//	int j = -1234;
//	std::cout << i << endl;
//	cout << i << endl;
//
//	int a = 0;
//	double b = 0.1;
//	char c = 'x';
//
//	cout << a << "             " << b << " " << c << "\n" << '\n' << endl;
//	std::cout << a << " " << b << " " << c << std::endl;
//
//	scanf_s("%d%lf", &a, &b);
//	printf("%d %lf\n", a, b);
//
//	// 可以自动识别变量的类型
//	//cin >> a;
//	//cin >> b >> c;
//	cin >>a>> b >> c;
//	cout << a << endl;
//	cout << b << " " << c << endl;
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//// 全缺省
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//// 半缺省
//void Func2(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	Func(); // 没有传参时，使用参数的默认值
//	Func(10); // 传参时，使用指定的实参
//
//	Func1();
//	Func1(1);
//	Func1(1, 2);
//	Func1(1, 2, 3);
//
//	//Func2();
//	Func2(100);
//	Func2(100, 200);
//	Func2(100, 200, 300);
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int Add(int a,int b)
//{
//	return a + b;
//}
//double Add(double a, double b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << Add(1, 2) << endl;
//	cout << Add(2.22, 1.11) << endl;
//}
//#include<iostream>
//using namespace std;
//// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//void Swap(int* px, int* py)
//{}
//
//void Swap(double* px, double* py)
//{}
//
//// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//// 3、参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//int main()
//{
//	Add(1, 2);
//	Add(1.1, 2.2);
//
//	f();
//	f(1);
//
//	f(1, 'x');
//	f('x', 1);
//
//	return 0;
//}
//#include<iostream>
//#include<assert.h>
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	// 引用：b和c是a的别名
//	int& b = a;
//	int& c = a;
//
//	// 也可以给别名b取别名，d相当于还是a的别名
//	int& d = b;
//	++d;
//
//	// 这里取地址我们看到是一样的
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	cout << &d << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	// 编译报错：“ra”: 必须初始化引⽤
	//int& ra;
	int& b = a;
	int c = 20;
	// 这⾥并⾮让b引⽤c，因为C++引⽤不能改变指向，
	// 这⾥是⼀个赋值
	b = c;
	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;
	return 0;
}