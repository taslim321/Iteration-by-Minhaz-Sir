#include <iostream>
#include <cmath>
using namespace std;

double power(double x, int p);
double factorial(int n);
double seriesSum(double x,int p);
void series(double x,int p);


int main()
{
    double x;
    int p;

    cout << "Enter a value for x: ";
    cin >> x;
    cout<<"Enter Position :";
    cin>>p;

    double result = seriesSum(x,p);

    cout << "The result of the series sum is: " << result << endl;

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

double factorial(int n)
{
    double result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

double seriesSum(double x, int p)
{
    double sum = 1;
    series(x, p);
    for (int i = 1; i <= p; i++)
    {
        sum += power(x, i) / factorial(i);
    }

    return sum;
}


void series(double x,int p)
{
    cout<<"1+";
    for (int i = 1; i <= p; i++)
    {
        cout<<x<<"^"<<i <<"/"<<i<<"!"<<"+ ";
    }
}

