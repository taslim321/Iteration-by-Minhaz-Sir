#include <iostream>
using namespace std ;

float min(float a[], int n)
{
    if (n <= 0)
    {
        cout << "Invalid array size." << endl;
        return 0.0 ;
    }

    float minValue = a[0];

    for (int i = 1; i < n; ++i)
    {
        if (a[i] < minValue)
        {
            minValue = a[i];
        }
    }

    return minValue;
}

int main()
{
    const int size = 5;
    float values[size] = {3.5, 1.2, 5.8, 2.1, 4.3};


    float result = min(values, size);


    cout << "The minimum value among the first " << size << " elements is: " << result << endl;

    return 0;
}
