#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        if (row % 2 == 0)
        {
            cout << "1";
            for (int zero = 1; zero <= row - 2; zero++)
            {
                cout << "0";
            }
            cout << "1" << endl;
        }
        else
        {
            for (int ones = 1; ones <= row; ones++)
            {
                cout << "1";
            }
            cout << endl;
        }
    }
    return 0;
}