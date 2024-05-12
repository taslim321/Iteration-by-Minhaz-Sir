

#include <iostream>
using namespace std;

int main()
{
    int n, i=0;
    long long sum=0 ;

    cout << "Enter a positive integer: ";
    cin >> n;

    do
    {
        sum += i;
        i += 2;
    }
    while (i <= n);
    cout << "the sum of even number is: " << sum ;

    return 0;
}
