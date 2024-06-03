#include <iostream>
using namespace std;

float compute_polynomial(float x, float c5, float c4, float c3, float c2, float c1, float c0);

int main()
{
    float x, c5, c4, c3, c2, c1, c0;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the coefficients of the polynomial (c5, c4, c3, c2, c1, c0): ";
    cin >> c5 >> c4 >> c3 >> c2 >> c1 >> c0;

    float result = compute_polynomial(x, c5, c4, c3, c2, c1, c0);

    cout << "The result of the polynomial is: " << result << endl;
    return 0;
}


float compute_polynomial(float x, float c5, float c4, float c3, float c2, float c1, float c0)
{
    return ((((c5 * x + c4) * x + c3) * x + c2) * x + c1) * x + c0;
}
