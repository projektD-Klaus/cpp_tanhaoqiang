/*　所谓函数模板，实际上是建立一个通用函数，其函数类型和形参类型不具体指定，用一个虚拟的类型来代表．
这个通用的函数就称为函数模板．凡是函数体相同的函数都可以用这个模板来代替，不必定义多个函数，只需在模板中定义一次即可．
*/

#include <iostream>
using namespace std;

template<typename T>
T max(T a, T b, T c)
{
    if(b>a) a = b;
    if(c>a) a = c;
    return a;
}
int main(int argc, char const *argv[]) {
    int a = 1, b = 2, c = 3;
    double d = 4.0, e = 5.0, f = 6.0;
    float g = 7.0, h = 8.0, i = 9.0;


    cout << "int_max: " << max(a,b,c) << endl;
    cout << "double_max: " << max(d,e,f) << endl;
    cout << "float_max: " << max(g,h,i) << endl;

    return 0;
}
