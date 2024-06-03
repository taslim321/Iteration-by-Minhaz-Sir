#include<iostream>
using namespace std;
void everything(int [],int);
int main()
{

    int n;
    cout<<"How many numbers:";
    cin>>n;
    int a[n]= {0};
    everything(a,n);
    return 0;
}

void everything(int a[],int n)
{
     int Max=0,Min=0,Sum=0;
    for(int i=0; i<n; i++) /// "for" is a vehicle
    {
        cout << "\nEnter the value of a["<<i<<"]:";cin >>a[i];

        if (i==0){
            Max= a[0]; Min = a[0];
        }

        if(a[i]> Max){
            Max = a[i];
        }

        if(a[i]< Min){
            Min = a[i];
        }
        Sum+= a[i];
    }
    for(int i=0; i<n; i++) /// "for" is a vehicle
    {
        cout << "a["<<i<<"]:"<<a[i] << endl;
    }
    cout << "The maximum: " << Max << endl;cout << "The minimum: " << Min << endl;
    cout << "The Average: " << Sum/n << endl;
}

