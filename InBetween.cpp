#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cin>>b;
    }

    for(int i = a; i <= b; i++ )
    {
        if(i%1==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
