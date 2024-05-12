#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, sign = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i += 2)
    {
        sum += sign * i * i;
        sign = -sign;
    }

    cout << "Sum = " << sum ;

    return 0;
}
