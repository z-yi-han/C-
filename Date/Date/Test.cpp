#include <iostream>
#include "Date.h"
using namespace std;

//-----------------------------------
// 测试函数区
//-----------------------------------

// 测试比较运算符
void TestCompare()
{
    cout << "===== TestCompare =====" << endl;
    Date d1(2024, 5, 20);
    Date d2(2024, 6, 1);

    cout << (d1 < d2) << "  // <" << endl;
    cout << (d1 <= d2) << " // <=" << endl;
    cout << (d1 > d2) << "  // >" << endl;
    cout << (d1 >= d2) << " // >=" << endl;
    cout << (d1 == d2) << " // ==" << endl;
    cout << (d1 != d2) << " // !=" << endl;
    cout << endl;
}

// 测试 += 和 + 运算符
void TestPlus()
{
    cout << "===== TestPlus =====" << endl;
    Date d1(2024, 12, 25);
    Date d2 = d1 + 10; // 调用 operator+
    cout << "原日期: " << d1;
    cout << "+10天后: " << d2;

    d1 += 40; // 调用 operator+=
    cout << "再 +40天: " << d1;
    cout << endl;
}

// 测试 -= 和 -（天数）
void TestMinus()
{
    cout << "===== TestMinus =====" << endl;
    Date d1(2024, 3, 10);
    Date d2 = d1 - 15; // 调用 operator-
    cout << "原日期: " << d1;
    cout << "-15天后: " << d2;

    d1 -= 40;
    cout << "再 -40天: " << d1;
    cout << endl;
}

// 测试 日期 - 日期（相差天数）
void TestSubDate()
{
    cout << "===== TestSubDate =====" << endl;
    Date d1(2024, 1, 1);
    Date d2(2024, 1, 15);
    cout << d2 - d1 << " 天" << endl;
    cout << d1 - d2 << " 天" << endl;
    cout << endl;
}

// 测试 ++ 和 --
void TestIncDec()
{
    cout << "===== TestIncDec =====" << endl;
    Date d1(2024, 2, 27);
    cout << "初始: " << d1;

    cout << "后置++: " << d1++;
    cout << "执行后: " << d1;

    cout << "前置++: " << ++d1;
    cout << "执行后: " << d1;

    cout << "后置--: " << d1--;
    cout << "执行后: " << d1;

    cout << "前置--: " << --d1;
    cout << "执行后: " << d1;
    cout << endl;
}

// 测试输入输出运算符
void TestIO()
{
    cout << "===== TestIO =====" << endl;
    Date d;
    cin >> d;   // 触发 operator>>
    cout << "你输入的日期是: " << d; // 触发 operator<<
    cout << endl;
}

//-----------------------------------
// 主函数
//-----------------------------------
int main()
{
    TestCompare();
    TestPlus();
    TestMinus();
    TestSubDate();
    TestIncDec();
    // TestIO(); // 最后手动测试输入输出时再打开

    cout << "所有测试完毕！" << endl;
    return 0;
}
