// static
// 有时希望函数中的局部变量的值在函数调用结束后
// 不消失而保留原值，即其占用的存储单元不释放，
// 在下一次该函数调用时，该变量保留上一次函数调
// 用结束时的值。这时就应该指定该局部变量为静态
// 局部变量(static local variable)
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int func(int x);

    for (int i = 0; i < 10; i++) {
        cout << func(0) << endl;
    }

    return 0;
}

int func(int x)
{
    // 静态局部变量赋初值是在编译时进行值的，
    // 即只赋初值一次，在程序运行时它已有初值。以后
    // 每次调用函数时不再重新赋初值而只是保留上次函
    // 数调用结束时的值。而为自动变量赋初值，不是在
    // 编译时进行的，而是在函数调用时进行，每调用一
    // 次函数重新给一次初值，相当于执行一次赋值语句
    static int b = 0; //编译时候执行了　以后调用就不走这条语句　　qtcreator debug时候验证了
    b++;
    return b+x;
}
