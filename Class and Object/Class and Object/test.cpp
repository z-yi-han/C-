#include<iostream>
#include<assert.h>
//using namespace std;
//class Stack
//{
//public:
//	//成员函数
//	void Init(int n = 4)
//	{
//		a = (int*)malloc(sizeof(int) * n);
//		capacity = 0;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		a[top++] = x;
//	}
//	int Top()
//	{
//		assert(top > 0);
//		return a[top - 1];
//	}
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity = 0;
//	}
//private:
//	int* a;
//	int capacity;
//	int top;
//};
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	cout << st.Top() << endl;
//	st.Destroy();
//	return 0;
//}
//struct Date
//{
//public:
//	void Init(int year, int month, int day);
//
//	//private:
//		// 为了区分成员变量，一般习惯上成员变量
//		// 会加一个特殊标识，如_ 或者 m开头
//		// 声明
//	int _year; // year_ m_year
//	int _month;
//	int _day;
//};
//
//void Date::Init(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}
//
//// 兼容C的struct用法
//typedef struct ListNodeC
//{
//	int val;
//	struct ListNodeC* next;
//}LTNodeC;
//
//// CPP
//struct ListNodeCPP
//{
//	int val;
//	ListNodeCPP* next;
//};
//
//int main()
//{
//	Date d2;
//	Date d3;
//
//	d2.Init(2024, 7, 9);
//
//	struct Date d1;
//
//	ListNodeCPP node;
//
//	//Date::_year = 2024;
//
//	return 0;
//}
#include<iostream>
using namespace std;
class Date
{
public:
	// void Init(Date* const this, int year, int month, int day)
	void Init(int year, int month, int day)
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}

	// void Print(Date* const this)
	void Print()
	{
		cout << this->_year << "/" << this->_month << "/" << _day << endl;
	}

private:
	// 这里只是声明，没有开空间
	int _year;
	int _month;
	int _day;
};

class B
{
public:
	void Print()
	{
		//...
	}
};
class C
{};

int main()
{
	// Date类实例化出对象d1和d2
	Date d1;
	Date d2;

	// d1.Init(&d1, 2024, 3, 31);
	d1.Init(2024, 3, 31);
	// d1.Print(&d1);
	d1.Print();

	// d2.Init(&d2, 2024, 7, 5);
	d2.Init(2024, 7, 5);
	// d2.Print(&d2);
	d2.Print();
	return 0;
}