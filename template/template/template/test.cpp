#include<iostream>
using namespace std;
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}

// 模版类型
//template<class T>
//void Swap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//
//template<typename T1, typename T2>
//void func(const T1& x, const T2& y)
//{
//
//}

//int main()
//{
//	int i = 1, j = 2;
//	double m = 1.1, n = 2.2;
//	Swap(i, j);
//	Swap(m, n);
//	//Swap(i, n);
//
//	swap(i, j);
//	swap(m, n);
//
//	func(i, m);
//	func(i, j);
//
//	return 0;
//}

// 用函数模版生成对应的函数 -> 模版的实例化
//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//template<class T1, class T2>
//T1 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//
//template<class T>
//T* func1(int n)
//{
//	return new T[n];
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
//	Add(a1, a2);
//	Add(d1, d2);
//	// 推导实例化
//	cout << Add(a1, (int)d1) << endl;
//	cout << Add((double)a1, d1) << endl;
//
//	// 显示实例化
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
// 
//	cout << Add(a1, d1) << endl;
//
//	double* p1 = func1<double>(10);
//
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//int Add(const int& x, const int& y)
//{
//	return (x + y) * 10;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	cout << Add(a1, a2) << endl;
//	return 0;
//} 

//类模板
template<typename T>
class Stack
{
public:
	Stack(int n = 4)
		:_array(new T[n])
		,_size(0)
		,_capacity(n)
	{}

	~Stack()
	{
		delete[] _array;
		_array = nullptr;
		_size = _capacity = 0;
	}

	void Push(const T& x);

private:
	T* _array;
	size_t _capacity;
	size_t _size;
};

template<class T>
void Stack<T>::Push(const T& x)
{
	if (_size == _capacity)
	{
		T* tmp = new T[_capacity * 2];
		memcpy(tmp, _array, sizeof(T) * _size);
		delete[] _array;

		_array = tmp;
		_capacity *= 2;
	}

	_array[_size++] = x;
}


int main()
{
	// 类模板都是显示实例化
	Stack<int> st1; // int
	st1.Push(1);
	st1.Push(2);
	st1.Push(3);

	Stack<double> st2; // double
	st2.Push(1.1);
	st2.Push(1.1);
	st2.Push(1.1);

	Stack<double>* pst = new Stack<double>;
	//...
	delete pst;

	return 0;
}
