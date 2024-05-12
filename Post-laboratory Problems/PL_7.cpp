#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;
    double count = 0;
    double average;

    cout << "Enter a positive integer: ";
    cin >> number;

    for (;;)
    {
        double lastD = number % 10;
        sum += lastD;
        average = sum/(count+1);
        count++;
        number = number/10;
        if(number==0)
        {
            break;
        }
        
    }

    
    cout << "The sum of the digits is: " << sum << endl;
    cout << "The average of the digits is: " << average << endl;

    return 0;
}
