#include<iostream>
using namespace std;

int main()
{
    float f,h,l,s;
    cout << "Celcius\t\Fahrenheit\n";
    cin >> f;
    h=f;
    l=f,s=f;
    for(int i=2; i<=10; i++)
    {
        cin >> f;
        s =s+f;
        if(f<l)
        {
            l=f;
        }

        if(f>h)
        {
            h=f;
        }

    }

    cout << "The highest T: "<< h << endl;
    cout << "The lowest T: "<< l << endl;
    cout << "The average T: "<< s/10 << endl;
    return 0;
}
