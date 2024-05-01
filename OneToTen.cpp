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
        cout<<"Congratulations! You enter right number.";
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
