#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

/// Parsing array into function is considered as Function calling by reference
void setTemparature(float t[], int N)
{
   for(int i=0;i<N;i++)
    {
        t[i]= 18.5 + (rand()% (40-18+1));
        cout << "The temperature for day "<< i+1 << " : " << t[i] <<endl;
    }
}



void calculateStat(float t[],int N,float& maxT,float& minT,float& sum,int& comfortCounter)
{
    for(int i=0;i<N;i++)
    {
        if(t[i]>maxT)
        {
           maxT = t[i];
        }

        if(t[i]<minT)
        {
           minT = t[i];
        }

        if(t[i]<=24.0)
        {
           comfortCounter++;
        }
        sum += t[i];
    }
}
void showResult(float maxT,float minT,float sum,int comfortCounter)
{
    cout << "The max Temp: " << maxT << endl;
    cout << "The min Temp: " << minT << endl;
    cout << "The avg Temp: " << sum/30.0 << endl;
    cout << "The Number of comfortable days : " << comfortCounter << endl;
}



int main()
{
    srand(time(0));
    float t[30], maxT, minT,sum = 0;
    int comfortCounter =0;
    setTemparature(t,30);///  array name, Number of array elements
    maxT= t[0]; minT= t[0];
    calculateStat(t,30,maxT,minT,sum,comfortCounter);///
    showResult(maxT,minT,sum,comfortCounter);
    return 0;

}
