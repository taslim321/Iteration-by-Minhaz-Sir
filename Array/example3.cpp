#include <iostream>
using namespace std;
void read(int [][2], int);  /// prototype
void display(int[][2],int); /// declaration
int main()
{
    int n=3;
    int a[n][2];
    read(a,n);
    display(a,n);
}

void display(int a[][2],int n)
{
    for(int i=0; i<n; i++) /// ROW Control
    {
        for(int j=0; j<n; j++) /// COL Control
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}


void read(int a[][2],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j] ;
        }
    }
}
