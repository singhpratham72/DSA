#include <iostream>
using namespace std;

int main()
{
    int rows = 5, columns = 5;
    // cin >> rows >> columns;
    int p = 0;
    for (int i = 0; i < rows; i++)
    {
        p = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++)
        {
            cout << p << " ";
            p = (p == 1) ? 0 : 1;
        }
        cout << endl;
    }
    return 0;
}