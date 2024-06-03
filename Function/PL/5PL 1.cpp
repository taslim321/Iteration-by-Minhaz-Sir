#include <iostream>
using namespace std;

float average(float x1, float x2, float x3, float x4);

int main()
{
    float num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    cout << "The average of the four numbers is: " << average(num1, num2, num3, num4) << endl;
    return 0;
}

float average(float x1, float x2, float x3, float x4)
{
    return (x1 + x2 + x3 + x4) / 4;
}

