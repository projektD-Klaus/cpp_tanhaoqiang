#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2];

    for(int i=0; i<3; i++)
    for(int j=0; j<2; j++)
    b[i][j] = a[j][i];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        cout << b[i][j] << " ";
    cout << endl;    
    }


    return 0;
}
