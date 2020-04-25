#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        for (int k = ((2 * n - 1) - 2 * i); k > 0; k--)
        {
            cout << " "
                 << "\t";
        }

        for (int l = i; l >= 1; l--)
        {
            if (l != n)
                cout << l << "\t";
        }
        cout << endl;
    }
    return 0;
}