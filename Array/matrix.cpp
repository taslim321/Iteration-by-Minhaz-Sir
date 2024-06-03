#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int m[3][3] ={{1,2,3},{11,21,31},{41,24,43}};
    int sum =0;

/*
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout << "Enter m["<<r<<"]["<<c<<"]:" ;
            cin >> m[r][c];
        }
    }

*/
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(r==2)
            {
                cout <<setw(5) <<m[r][c];
                sum+=m[r][c];
            }
            else
            {
                cout <<setw(5) << ".";
            }

        }
        cout << endl;
    }
}
