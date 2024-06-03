#include <iostream>
using namespace std;


double power(double x, int p);

int main()
{
    double x;
    int p;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of p: ";
    cin >> p;
    cout << x << " raised to the power of " << p << " is: " << power(x, p) << endl;
    return 0;
}


double power(double x, int p)
{
    double result = 1;
    for (int i = 0; i < p; i++)
    {
        result *= x;
    }
    return result;
}







