#include<iostream>
#include<string>
#include<list>
#include<map>
using namespace std;
void test_string()
{
	string s1;
	string s2("hello world");
	cout << s1 << s2 << endl;
	s2[0] = 'x';
	cout << s1<<s2 << endl;
	//下标+【】
	for (size_t i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << " ";
	}
	cout << endl;
	//迭代器
	string:: iterator it = s2.begin();
	while (it != s2.end())
	{
		*it += 2;
		cout << *it << " ";
		++it;
	}
	cout << endl;
	//范围for,自动赋值，自动迭代，自动判断结束,底层是迭代器
	//for (auto ch : s2)//ch是拷贝，相当于局部变量
	for (auto& ch : s2)//这样才能修改s2
	{
		ch -= 2;
		cout << ch << " ";
	}
	cout << endl;
	cout << s2 << endl;
}
void test_list()
{
	list<int> lt = { 1,2,3,4,5,6,7 };
	list<int>::iterator lit = lt.begin();
	while (lit != lt.end())
	{
		cout << *lit << " ";
		++lit;
	}
	cout << endl;
}
//void test_map()
//{
//	map<string, string> dict;
//	map<string, string>::iterator mit = dict.begin();
//	auto mit = dict.begin();
//}

void test_string2()
{
	string s1;
	string s2("hello world");
	string::iterator it = s2.begin();
	while (it != s2.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	//反向迭代器,一定不是原生指针
	string::reverse_iterator rit = s2.rbegin();
	while (rit != s2.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
	//const迭代器
	const string s3{ "hello world" };
	//string::iterator it = s3.begin();报错
	string::const_iterator cit = s3.begin();
	while (it != s2.end())
	{
		//*cit += 2;报错
		cout << *it << " ";
		++it;
	}
	cout << endl;
	//const反向迭代器
	const string s3("hello world");
	//string::const_reverse_iterator rcit = s3.rbegin();
	auto rcit = s3.rbegin();//auto简便
	while (rcit != s3.rend())
	{
		// *rcit += 2;
		cout << *rcit << " ";
		++rcit;
	}
	cout << endl;
}

int main()
{
	//test_string();
	//test_list();
	test_string2();
	return 0;
}