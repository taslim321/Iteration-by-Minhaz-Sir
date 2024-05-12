
#include <iostream>
using namespace std;

int main()
{
    int n, i=1;
    long long sum=1 ;

    cout << "Enter a positive integer: ";
    cin >> n;

    do
    {
        sum *= i;
        ++i ;
    }
    while (i <= n);
    cout << "the factorial of " << n << " is: " << sum ;

    return 0;
}
