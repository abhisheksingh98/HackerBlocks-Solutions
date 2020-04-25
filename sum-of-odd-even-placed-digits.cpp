#include <iostream>
using namespace std;
int main()
{
    int oddsum = 0, evensum = 0;
    int num, digit, count = 1;

    cin >> num;
    while (num > 0)
    {
        digit = num % 10;
        if (count % 2 == 0)
        {
            evensum = evensum + digit;
        }
        else
            oddsum = oddsum + digit;
        num = num / 10;
        count++;
    }

    cout << oddsum << endl
         << evensum;
    return 0;
}