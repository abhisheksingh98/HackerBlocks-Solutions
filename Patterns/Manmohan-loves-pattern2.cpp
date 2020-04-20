#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "1" << endl;
    for (int row = 2; row <= n; row++)
    {

        cout << row - 1;

        for (int midzero = 1; midzero <= row - 2; midzero++)
        {
            cout << "0";
        }
        cout << row - 1 << endl;
    }
    return 0;
}