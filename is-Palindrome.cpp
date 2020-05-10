#include <iostream>
using namespace std;

int isPalindrome(int a[], int n)
{
    int left = 0;
    int right = n - 1;
    bool flag = false;
    while (left <= right)
    {
        if (a[left] != a[right])
        {
            flag = true;
            cout << "false";
            break;
        }
        else
        {
            left++;
            right--;
        }
    }
    if (flag == false)
    {
        cout << "true";
    }

    return 0;
}
int main()
{
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    isPalindrome(a, n);

    return 0;
}