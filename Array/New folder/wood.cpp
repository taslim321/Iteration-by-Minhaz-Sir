#include<iostream>
using namespace std;


int  getDrawer()
{
    int d;
    cout << "Enter the number of Drawer:";
    cin >> d;
    return d;
}

char getWoodType()
{
    cout<< "Enter m for Mahogany, o for oak and p for pine";
    char w;
    cin >> w;
    return w;
}


int costCalculator(int d, char w)
{
    int c;

    if(w=='p')
    {
        c=100;
    }
    else if(w=='o')
    {
        c=140;
    }
    else
    {
        c=180;
    }

    c = c+ 30*d;
    return c;
}


void displayCost(int c)
{
    cout << "The total cost of the desk: "<< c << endl;
}

int main()
{
    int d =  getDrawer();
    char w = getWoodType();
    int c= costCalculator(d,w);
    displayCost(c);
    return 0;

}
