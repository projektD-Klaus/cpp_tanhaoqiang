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
