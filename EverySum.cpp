#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number from 1 to 50 :"<<endl;
    cin>>n;

    for(int i = 2; i<=n; i++)
    {
        cout<<"The sum of "<<(i-1)<<" and "<<i<<" is "<<(2*i-1)<<endl;
    }
    return 0;
}
