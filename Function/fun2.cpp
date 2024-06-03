#include <iostream>
#include <cstdlib> /// srand()
#include <ctime>   /// time()
using namespace std;

void cricket(); /// Function Declaration/Protorype
int innings(int, int &);
void result(int, int, int, int);
int over(int &);
int main()
{
    srand(time(0)); /// random number series asolei random hoy.
    cricket();      /// Function calling
    return 0;
}

void cricket() /// Function Definition
{
    int t1 = 0, t2 = 0, w1 = 0, w2 = 0;
    t1 = innings(t2, w1);
    t2 = innings(t1, w2);
    result(t1, t2, w1, w2);
}

int over(int &w)
{
    int r = 0;
    for (int i = 1; i <= 6; i++)
    {
        int d = rand() % 100;
        if (d > 91)
        {
            w++;
            if (w == 10)
            {
                return r;
            }
            continue;
        }

        r = r + rand() % 7;
    }
    return r;
}

int innings(int other, int &w)
{
    int r = 0; /// BE AWARE: Result or summation must be initialized 0.

    for (int i = 1; i <= 20; i++)
    {
        r = r + over(w);
        if (w == 10)
        {
            return r;
        }
        if (r > other && other != 0)
        {
            return r;
        }
    }
    return r;
}

void result(int t1, int t2, int w1, int w2)
{
    cout << "The score of team1: " << t1 << "/" << w1 << endl;
    cout << "The score of team2: " << t2 << "/" << w2 << endl;
    if (t1 > t2)
    {
        cout << "Team1 is the winner.";
    }
    else if (t1 == t2)
    {
        cout << " The match is Draw." << endl;
    }
    else
    {
        cout << "Team2 is the winner.";
    }
}
