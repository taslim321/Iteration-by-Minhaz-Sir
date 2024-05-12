#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    int n,j;
    int sum = 1 ;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 2; i <= n; i+=2)
    {
        j = pow ( i ,i )  ;
        sum += j ;

    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
