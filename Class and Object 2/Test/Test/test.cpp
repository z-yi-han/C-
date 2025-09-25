//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	////1.无参构造函数
//	//Date()
//	//{
//	//	_year = 1;
//	//    _month = 1;
//	//    _day = 1;
//	//}
//
//	// 2.带参构造函数
//	/*Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	 /*3.全缺省构造函数*/
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//			{
//				cout << _year << "/" << _month << "/" << _day << endl;
//			}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	d1.Print();
//	Date d2(2024, 7, 10);
//	d2.Print();
//
//	Date d3(2024);
//	d3.Print();
//
//	/*Date func();
//	func.Print();*/
//	return 0;
//}
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (_a == nullptr)
//		{
//			perror("mallloc失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//private:
//	STDataType* _a;
//	int _capacity;
//	int _top;
//};
//class MyQuene{
//public:
//	//编译器默认生成MyQuene的构造函数调用了Stack的构造，完成两个成员初始化
//private:
//	Stack pushst;
//	Stack popst;
//};
//int main()
//{
//	MyQuene mq;
//	return 0;
//}
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//typedef int STDataType;
//class Stack {
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//
//	~Stack()//析构函数
//	{
//		cout << "Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
////两个Stack实现队列
//class MyQuene {
//public:
//	//编译器默认⽣成MyQueue的析构函数调⽤了Stack的析构，释放的Stack内部的资源
//	// 显⽰写析构，也会⾃动调⽤Stack的析构
//	//~MyQueue()
//private:
//	 Stack pushst;
//	 Stack popst;
//};
//int main()
//{
//	Stack st;
//	MyQuene mq;
//}
//#include<iostream>
//using namespace std;
// 用最新加了构造和析构的C++版本Stack实现
//#include<iostream>
//using namespace std;
//bool isValid(const char* s) {
//	Stack st;
//	while (*s)
//	{
//		if (*s == '[' || *s == '(' || *s == '{')
//		{
//			st.Push(*s);
//		}
//		else
//		{
//			// 右括号比左括号多，数量匹配问题
//			if (st.Empty())
//			{
//				return false;
//			}
//			// 栈里面取左括号
//			char top = st.Top();
//			st.Pop();
//
//			// 顺序不匹配
//			if ((*s == ']' && top != '[')
//				|| (*s == '}' && top != '{')
//				|| (*s == ')' && top != '('))
//			{
//				return false;
//			}
//		}
//		++s;
//	}
//	// 栈为空，返回真，说明数量都匹配 左括号多，右括号少匹配问题
//	return st.Empty();
//}
//
//// 用之前C版本Stack实现
//bool isValid(const char* s) {
//	ST st;
//	STInit(&st);
//	while (*s)
//	{
//		// 左括号入栈
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			STPush(&st, *s);
//		}
//		else // 右括号取栈顶左括号尝试匹配
//		{
//			if (STEmpty(&st))
//			{
//				STDestroy(&st);
//				return false;
//			}
//			char top = STTop(&st);
//			// 不匹配
//			if ((top == '(' && *s != ')')
//				|| (top == '{' && *s != '}')
//				|| (top == '[' && *s != ']'))
//			{
//				STDestroy(&st);
//				return false;
//			}
//		}
//		++s;
//	}
//
//	// [[[[]]
//	// 栈不为空，说明左括号比右括号多，数量不匹配
//	bool ret = STEmpty(&st);
//	STDestroy(&st);
//
//	return ret;
//}
//
//int main()
//{
//	cout << isValid("[()][]") << endl;
//	cout << isValid("[(])[]") << endl;
//	return 0;
//}
