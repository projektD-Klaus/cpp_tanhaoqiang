#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int age(int x);
    cout << age(5) << endl;
    return 0;
}

int age(int x)
{
    int y;
    if(x == 1)
    y = 10;
    else
    y = age(x-1)+2;

    return y;
}
