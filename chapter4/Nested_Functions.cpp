/*C++不允许对函数作嵌套定义，也就是说在一个函
数中不能完整地包含另一个函数。在一个程序中每
一个函数的定义都是互相平行和独立的。
虽然C++不能嵌套定义函数，但可以嵌套调用函
数，也就是说，在调用一个函数的过程中，又调用
另一个函数*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(double); //函数声明
double xpoint(double, double); //函数声明
double root(double, double); //函数声明
int main( )
{ double x1,x2,f1,f2,x;
do
{cout<<"input x1,x2： ";
cin>>x1>>x2;
f1=f(x1);
f2=f(x2);
} while(f1*f2>=0);
x=root(x1,x2);
cout<<setiosflags(ios::fixed)<<setprecision(7);
//指定输出7位小数
cout<<"A root of equation is "<<x<<endl;
return 0;
}
double f(double x) //定义f函数，以实现f(x)
{double y;
y=x*x*x-5*x*x+16*x-80;
return y;
}
double xpoint(double x1, double x2) //定义xpoint函数，求出弦与ｘ轴交点
{double y;
y=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1)); //在xpoint函数中调用f函数
return y;
}
double root(double x1, double x2) //定义root函数，求近似根
{double x,y,y1;
y1=f(x1);
do
{x=xpoint(x1,x2); //在root函数中调用xpoint函数
y=f(x); //在root函数中调用f函数
if (y*y1>0)
{y1=y;
x1=x;
}
else
x2=x;
}while(fabs(y)>=0.00001);
return x;
}
