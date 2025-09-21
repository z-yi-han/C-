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
#include <iostream>
using namespace std;

void Func(int a = 0)
{
	cout << a << endl;
}

// 全缺省
void Func1(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}

// 半缺省
void Func2(int a, int b = 10, int c = 20)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}

int main()
{
	Func(); // 没有传参时，使用参数的默认值
	Func(10); // 传参时，使用指定的实参

	Func1();
	Func1(1);
	Func1(1, 2);
	Func1(1, 2, 3);

	//Func2();
	Func2(100);
	Func2(100, 200);
	Func2(100, 200, 300);

	return 0;
}


 