#include<iostream>
using namespace std;

int f(int n);
int main()
{   int n;
    cin >> n;
    cout << f(n) << endl;
}

// int f(int n)
// {
//     int res = 0;
//     if (n==1) res = 1;
//     else if ( n == 2) res = 2;
//     else res = f(n-1)*n;
//
//     return res;
// }
int f(int n)
{
    int res = 0;
    if(n<0)
    {cout << "error" <<endl;
    res = -1;}
    else if (n==0||n==1) res = 1;
    else res = f(n-1)*n;

    return res;
}
