#include<iostream>
using namespace std;
void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

void Swap(double& left, double& right)
{
	double temp = left;
	left = right;
	right = temp;
}

void Swap(char& left, char& right)
{
	char temp = left;
	left = right;
	right = temp;
}
// ƒ£∞Ê¿‡–Õ
template<class T>
void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

int main()
{
	return 0;
}