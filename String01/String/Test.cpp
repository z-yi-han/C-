#include<iostream>
#include<string>
using namespace std;
//class string
//{
//public:
//	operator[](size_t i)
//	{
//      assert(i<_size);
//		return _str[i];
//	}
//private:
//	char* _str;
//	size_t _size;
//	size_t capacity;
//};
int main()
{
	string s1;
	string s2("111111");
	string s3(s2);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	/*cin >> s1;
	cout << s1<<endl;*/
	string s4(s2, 6, 1);
	cout << s4 << endl;
	string s5(s2, 6, 1);
	cout << s5 << endl;
	string s6(s2, 6);
	cout << s6 << endl;
	string s7("hello world",7);
	cout << s7 << endl;
	s7[1] = 'x';
	cout << s7 << endl;
	return 0;
}
