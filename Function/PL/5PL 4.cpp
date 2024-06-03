#include <iostream>
#include <cmath>
using namespace std;

void compute_sphere (float& v, float& s, float r);

int main()
{
    float radius, volume, surface_area;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    compute_sphere(volume, surface_area, radius);

    cout << "The volume of the sphere is: " << volume << endl;
    cout << "The surface area of the sphere is: " << surface_area << endl;

    return 0;
}

void compute_sphere (float& v, float& s, float r)
{
    const float PI = 3.14159265358979323846;

    v = (4.0 / 3.0) * PI * pow(r, 3);
    s = 4.0 * PI * pow(r, 2);
}
