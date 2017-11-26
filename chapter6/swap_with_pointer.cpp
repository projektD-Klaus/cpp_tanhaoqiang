#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    void swap(int *p1, int *p2);
    int a, b, *ptr1, *ptr2;
    ptr1=&a;
    ptr2=&b;
    cin >> a >> b;
    if(a<b)
    swap(ptr1,ptr2);
    cout << *ptr1 << " " << *ptr2 << endl;
    cout << sizeof(ptr1) << endl;  //8Byte
    cout << sizeof(a) << endl;


    return 0;
}

void swap(int *p1, int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
