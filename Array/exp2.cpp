#include<iostream>
using namespace std;
void read(int [],int);
void display(int [],int);
int main()
{
     int n;
    cout<<"How many numbers:";
    cin>>n;
using namespace std;
void read(int [],int);
void display(int [],int);
int main()
{
     int n;
    cout<<"How many numbers:";
    cin>>n;
    int a[n]= {0};
    read(a,n);
    display(a,n);
}
void read(int a[],int n)
{
    for(int i=0; i<n; i++) /// "for" is a vehicle
    {
        cout << "\nEnter the value of a["<<i<<"]:";
        cin >>a[i];
    }
}
void display(int a [],int n)
{
    cout<<endl;
    for(int i=0; i<n; i++) /// "for" is a vehicle
    {
        cout << "The value of a["<<i<<"]:";
        cout<<a[i];
        cout<<endl;
    }
}

    int a[n]= {0};
    read(a,n);
    display(a,n);
}
void read(int a[],int n)
{
    for(int i=0; i<n; i++) /// "for" is a vehicle
    {
        cout << "\nEnter the value of a["<<i<<"]:";
        cin >>a[i];
    }
}
void display(int a [],int n)
{
    cout<<endl;
    for(int i=0; i<n; i++) /// "for" is a vehicle
    {
        cout << "The value of a["<<i<<"]:";
        cout<<a[i];
        cout<<endl;
    }
}
