#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
    int a [3] [4];
    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    cin >> a[i][j];
    int max = a[0][0];
    int row, colum;

    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    {
        if(max<a[i][j])
        {max = a[i][j];
        row = i;
        colum = j;}
    }
    cout << "max element is "<< max << " at("<< row << ", " << colum << ")" << endl;
    return 0;
}
