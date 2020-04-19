#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "1" << endl;
    for (int row = 2; row <= n; row++)
    {
        cout << row << "\t";
        for (int zeros = 1; zeros <= row - 2; zeros++)
        {
            cout << "0"
                 << "\t";
        }
        cout << row << endl;
    }
    return 0;
}