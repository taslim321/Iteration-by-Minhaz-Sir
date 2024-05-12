
#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    do
    {
        nextTerm = t1 + t2;
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
    }
    while (nextTerm <= n);

    return 0;
}
