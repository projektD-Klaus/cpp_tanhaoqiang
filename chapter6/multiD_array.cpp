#include <iostream>
using namespace std;
int main( )
{ int a[3][4]={{1,3,5,7},{9,11,13,15},{17,19,21,23}};
int*p; //p是基类型为整型的指针变量
for(p=a[1];p<a[1]+8;p++)
cout<<*p<<" ";
cout<<endl;

return 0;
}
// #include <iostream>
// using namespace std;
// int main( )
// { int a[3]={1,3,5};
// int*p; //p是基类型为整型的指针变量
// for(p=a;p<a+3;p++)
// cout<<*p<<" ";
// cout<<endl;
//
// return 0;
// }

//对于一维数组a[10]比如， a代表第一个元素的地址，是个指针。a[0]是元素
// 对于二维数组a[3][4]， a[0]代表第一个元素的地址，是指针。a[0][0]则是元素
