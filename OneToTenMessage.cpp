#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter an ineger number between 1 and 10:"<<endl;
    cin>>n;

    for(int i = 1; ; i++)
    {
        if(n>=0 && n<= 10)
        {
            for(int j = 1; j <= n ; j++)
            {
                cout<<"Congratulations! You enter right number."<<endl;
            }
            break;
        }
        else
        {
            cout<<"Enter an ineger number between 1 and 10:"<<endl;
            cin>>n;
        }
    }
    return 0;
}
