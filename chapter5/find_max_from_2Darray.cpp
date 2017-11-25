#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a [3] [4] = {{3, 5, 7,22}, {44, 8, 9, 32}, {4, 67, 45, 3}};
    int find_max(int a [] [4]);


    cout << "max: " << find_max(a) << endl;

    return 0;
}

int find_max(int a [] [4])
{
    int max = a[0][0];
    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    {
        if(max < a[i][j])
        max = a[i][j];

    }
    return max;
}
