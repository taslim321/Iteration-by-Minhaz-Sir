#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

void sapLudo(); /// Declaration
void cahllange(int&);  /// REFERENCE

int main()
{
    srand(time(0));
    sapLudo();       /// Calling
    return 0;
}


void challange(int& p)
{
    if(p== 29)
    {
        p=8;
        cout << "Snake"<< endl;
    }
    else if(p== 14)
    {
        p=35;
        cout << "Ladder"<< endl;
    }

    else if(p== 22)
    {
        p=78;
        cout << "Ladder"<< endl;
    }

    else if(p== 76)
    {
        p=37;
        cout << "Snake"<< endl;
    }
    else
    {

    }

}



void sapLudo()    /// Definition
{
    int pos=0,d;
    while(pos<101)
    {
        cout << pos << ",";
        d= 1+ rand()%6;
        pos = pos + d;
        challange(pos);
    }
}
