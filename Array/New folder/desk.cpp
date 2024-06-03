#include<iostream>
using namespace std;

int getDrawer()
{
    int d;
    cout<< "Enter the number of drawer:";
    cin >> d;
    return d;
}
char getWoodType()
{
    char w;
    cout<< "Enter the type of wood, m for mahogany,p for pine, o for oak:";
    cin >> w;
    return w;
}
int costCalculator(int d, char w)
{
    int cost;
    if(w=='p')
    {
        cost=100;
    }

    else if(w=='o')
    {
        cost=140;
    }
    else
    {
        cost=180;
    }
    cost = cost+ d*30;
    return cost;
}
void displayCost(int cost)
{
    cout << "The cost of the desk: "<< cost << endl;
}

int main()
{
    int d;
    char w;
    int cost;

    d= getDrawer();
    w= getWoodType();
    cost =costCalculator(d,w);
    displayCost(cost);
    return 0;
}
