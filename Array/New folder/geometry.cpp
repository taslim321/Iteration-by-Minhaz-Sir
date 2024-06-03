#include<iostream>
using namespace std;
const float PI= 3.1416;

void geometry(float& r, float& a, float& p)
{
    cout<< "Enter the value of radius:";
    cin >> r;
    a= PI*r*r;
    p = 4*PI*r;
}
void result(float r, float a, float p)
{
    cout << "The radius of the circle:" << r << endl;
    cout << "The area of the circle:" << a << endl;
    cout << "The perimeter of the circle:" << p << endl;
}

int main()
{
    float r,a,p;
    geometry(r,a,p);
    result(r,a,p);

}
