#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cout<<"Enter A B C & Q :"<<endl;
    cin>>c;

    for(int i = 1; ; i++)
    {
        if(c=='A' || c == 'B' || c =='C')
    {
        cout<<"Enter A B C & Q :"<<endl;
        cin>>c;
        
    }else if(c=='Q')
    {
        break;
    }else
    {
        cout<<"error!"<<endl;
        break;
    }
    }

    return 0;
}
