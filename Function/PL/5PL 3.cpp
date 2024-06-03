#include <iostream>
#include <cmath>
using namespace std;

int is_square (int n);

int main()
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (is_square(num))
    {
        cout << num << " is a square number." << endl;
    }
    else
    {
        cout << num << " is not a square number." << endl;
    }

    return 0;
}

int is_square (int n)
{
    int root = sqrt(n);
    return n == root * root;
}
