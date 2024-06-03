#include<iostream>
using namespace std;


int main()
{
    int a[10]= {3070,4,19,8,7,670,560,45,34,897};

    for(int i=0;i<10;i++)
    {
        cout<< "Enter the "<< i+1 << "th element: ";
        cin >> a[i];
    }


    int m1,m2,m3;
    m1=a[0];

    for(int i=0;i<10;i++)
    {
        if(a[i]<m1)
        {
            m1=a[i];
        }
    }

    m2=m1;m3=m1;

    for(int i=0;i<10;i++)
    {
        if(a[i]>m1)
        {
            m1=a[i];
        }
    }


    for(int i=0;i<10;i++)
    {
        if(a[i]>m2 && a[i]!=m1)
        {
            m2=a[i];
        }
    }


    for(int i=0;i<10;i++)
    {
        if(a[i]>m3 && a[i]!=m1&& a[i]!=m2)
        {
            m3=a[i];
        }
    }

    cout << "The largest number:" << m1 << endl;
    cout << "The Second largest number:" << m2 << endl;
    cout << "The third largest number:" << m3 << endl;
}
