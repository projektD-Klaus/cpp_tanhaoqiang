#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    int compare(int a[], int n);
    int a[10] = {3, 5, 5, 33, 77, 4, 3, 8, 98, 3}; //11 element a[0] not used

    void xuanzefa(int a[], int n);

    xuanzefa(a, 10);




    return 0;
}

void xuanzefa(int a[], int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
    {   if(a[i] > a[j])
        {temp=a[i]; a[i]=a[j];a[j]=temp;}

    }

    for(int i=0; i<n; i++)
    cout << a[i] << "   ";
    cout << endl;
}
// 要特别说明的是： 数组名代表数组首元素的
// 地址，并不代表数组中的全部元素。因此用数组名
// 作函数实参时,不是把实参数组的值传递给形参，
// 而只是将实参数组首元素的地址传递给形参。
// 形参可以是数组名，也可以是指针变量，它们用来
// 接收实参传来的地址。如果形参是数组名，它代表
// 的是形参数组首元素的地址。在调用函数时，将实
// 参数组首元素的地址传递给形参数组名。这样，实
// 参数组和形参数组就共占同一段内存单元。
