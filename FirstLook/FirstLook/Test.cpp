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
#include <stdio.h>
#include <stdlib.h>

// 域
namespace zyh
{
	namespace a
	{
		int rand = 1;
		int Add(int left, int right)
		{
		return left + right;
		}
	}

	// 杭哥
	namespace b
	{
		int rand = 2;
		int Add(int left, int right)
		{
			return (left + right) * 10;
		}
	}
}

int main()
{
	printf("%d\n", zyh::a::rand);
	printf("%d\n", zyh::b::rand);
	return 0;
}

 