/* 例4.8：　求2个或3个　正整数　中的最大数，用带有默认参数的函数实现 */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int max(int a, int b, int c=0);
    int a, b, c;
    cin>>a>>b>>c;
    cout <<"max(a,b,c)= " << max(a,b,c) << endl;
    cout << "max(a,b)= " << max(a,b) << endl;
    return 0;
}

int max(int a, int b, int c)
{
    if(b>a) a=b;
    if(c>a) a=c;
    return a;
}
/* 被坑了，求正整数的．．．　输入负数就跪了啊*/
