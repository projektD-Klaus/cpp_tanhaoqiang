#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[11] = {0, 3, 5, 5, 33, 77, 4, 3, 8, 98, 3}; //11 element a[0] not used

    void sorting(int a[], int n);
    sorting(a, 10); //这里只能写ａ，　不能写a[]，因为用数组作为实参，传的是地址

    return 0;
}

void sorting(int a[], int n)
{
    for(int j=1; j<n; j++)
    {
        for(int k=1; k<=n-j; k++)
        {
            int t=0;
            if(a[k]>a[k+1])
            {t=a[k]; a[k]=a[k+1]; a[k+1]=t;}
        }
    }
for(int i=1; i<=n; i++)
cout << a[i] << "   ";
cout << endl;
}
