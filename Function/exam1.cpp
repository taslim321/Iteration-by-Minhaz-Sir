#include<iostream>
using namespace std;

int main()
{
    float f;
    cout << "Celcius\t\Fahrenheit\n";
    for(int i=0;i<=20;i++)
    {
        f= 9*i/5.0 +32;
        cout << i<<"\t"<<f << "\n";
    }
    return 0;
}
