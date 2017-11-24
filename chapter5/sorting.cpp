#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[11];
    for(int i=1;i<=10;i++)
    cin >> a[i];

    for(int j=1; j<10; j++)
    {
        for(int k=1; k<=10-j; k++)
        {
            int t=0;
            if(a[k]>a[k+1])
            {t=a[k]; a[k]=a[k+1]; a[k+1]=t;}
        }
    }

    for(int m=1; m<=10; m++)
    cout << a[m] << " ";
    cout << endl;
    return 0;
}
