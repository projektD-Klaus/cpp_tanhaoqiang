#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int max_value(int x, int max);
    int i, j, row=0, colum=0, max;
    int a [3] [4] = {{5,12,23,56},{19,23, 45,4},{5,32,4,3}};

    max = a [0] [0];
    for(i=0;i<3;i++)
    for(j=0;j<4;j++)
    {
        max = max_value(a [i] [j], max);
        if(max==a [i] [j])
        {   row = i;
            colum = j;
        }
    }
    cout<<"max="<< max <<",row="<<row<<",colum="<<colum<<endl;
    return 0;
}

int max_value(int x, int max)
{
    if(x>max) return x;
    else return max;
}
