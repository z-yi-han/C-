#include<iostream>
#include<string>
#include<map>
#include<list>
using namespace std;

//class string
//{
//private:
//	char _buff[16];
//	char*  _str;
//
//	size_t _size;
//	size_t _capacity;
//};

void test_string1()
{
	string s1;
	string s2("hello world");

	cout << s1 << s2 << endl;

	s2[0] = 'x';
	cout << s1 << s2 << endl;

	// 1、下标 + []
	for (size_t i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << " ";
	}
	cout << endl;

	// 2、迭代器
	//string::iterator it = s2.begin();
	auto it = s2.begin();
	while (it != s2.end())
	{
		*it += 2;

		cout << *it << " ";
		++it;
	}
	cout << endl;

	cout << s2 << endl;

	map<string, string> dict;
	//map<string, string>::iterator mit = dict.begin();
	auto mit = dict.begin();

	/*list<int> lt = { 1,2,3,4,5,6,7 };
	list<int>::iterator lit = lt.begin();
	while (lit != lt.end())
	{
		cout << *lit << " ";
		++lit;
	}
	cout << endl;*/

	// 3、字符赋值，自动迭代，自动判断结束
	// 底层就是迭代器
	//for (auto ch : s2)
	for (auto& ch : s2)
	{
		ch -= 2;
		cout << ch << " ";
	}
	cout << endl;

	cout << s2 << endl;
}

void test_string2()
{
	string s2("hello world");
	string::iterator it = s2.begin();
	while (it != s2.end())
	{
		*it += 2;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	string::reverse_iterator rit = s2.rbegin();
	while (rit != s2.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;

	const string s3("hello world");
	//string::const_iterator cit = s3.begin();
	auto cit = s3.begin();
	while (cit != s3.end())
	{
		//*cit += 2;
		cout << *cit << " ";
		++cit;
	}
	cout << endl;

	//string::const_reverse_iterator rcit = s3.rbegin();
	auto rcit = s3.rbegin();
	while (rcit != s3.rend())
	{
		// *rcit += 2;
		cout << *rcit << " ";
		++rcit;
	}
	cout << endl;
}

void TestPushBack()
{
	// reverse 反转  逆置
	// reserve 保留、预留
	string s;
	// 提前开空间，避免扩容，提高效率
	s.reserve(100);
	size_t sz = s.capacity();
	cout << "capacity changed: " << sz << '\n';

	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}

void test_string3()
{
	string s2("hello world");
	cout << s2.length() << endl;
	cout << s2.size() << endl;

	cout << s2.max_size() << endl;

	cout << s2.capacity() << endl;
	TestPushBack();

	string s3("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	//cout << sizeof(s2) << endl;
	//cout << sizeof(s3) << endl;
}

void test_string4()
{
	string s2("hello worldxxxxxxxxxxxxx");
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(20);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(28);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.reserve(40);
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	s2.clear();
	cout << s2.size() << endl;
	cout << s2.capacity() << endl << endl;

	cout << typeid(string::iterator).name() << endl;
	cout << typeid(string::reverse_iterator).name() << endl;

}

int main()
{
	test_string4();

	return 0;
}

//int func1()
//{
//	return 10;
//}
//
//// 不能做参数
////void func0(auto a = 0)
////{}
//
//auto func2()
//{
//	//...
//	return func1();
//}
//
//auto func3()
//{
//	//...
//	return func2();
//}

//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = func1();
//	// 编译报错:rror C3531: “e”: 类型包含“auto”的符号必须具有初始值设定项
//	//auto e;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	//auto array[] = { 4, 5, 6 };
//
//	auto ret = func3();
//
//	int array[] = { 1, 2, 3, 4, 5 };
//	// C++98的遍历
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		array[i] *= 2;
//	}
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//	{
//		cout << array[i] << endl;
//	}
//	
//	// yyds
//	// 范围for适用于容器 和 数组
//	// C++11的遍历
//	for (auto& e : array)
//		e *= 2;
//
//	for (auto e : array)
//		cout << e << " " << endl;
//
//	return 0;
//}