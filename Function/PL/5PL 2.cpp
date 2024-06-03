#include <iostream>
using namespace std;

int min(int x1, int x2, int x3, int x4);

int main()
{
    int num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "The smallest of the four numbers is: " << min(num1, num2, num3, num4) << endl;
    return 0;
}

int min(int x1, int x2, int x3, int x4)
{
    int min = x1;
    if (x2 < min)
    {
        min = x2;
    }
    if (x3 < min)
    {
        min = x3;
    }
    if (x4 < min)
    {
        min = x4;
    }
    return min;
}
