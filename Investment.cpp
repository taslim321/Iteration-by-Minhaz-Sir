#include <bits/stdc++.h>
using namespace std;

int main(){
    double in;
    int y;
    cout<<"Enter an investment amount : "<<endl;
    cin>>in;
    cout<<"enter a number of years less than 1 or more than 30 \n otherwise you have to re-enter the year."<<endl;
    cin>>y;
    
    while(y<1 || y>30)
    {
        cin>>y;

    }
    for(int i = 1; i<=y; i++)
    {
        in += 0.08 * in;
        cout<<in<<endl;
    }
    
    return 0;
}
