#include<iostream>
#include <cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int cube(int);            /// function Prototype
void greeting();
int dice();
void showScore(int ,int,int );///          ///////////////////////////////////////

int main()
{
    srand(time(0));
    int x,y;
    greeting(); /// void, no_iput
    x= dice(); cout << "x= "<<x<<endl;
    y= cube(x); /// Function calling/ Function Usage
    cout << y << endl;
    showScore (50,210,8);                    /// ///////////////////////////////////
    greeting(); /// void, no_iput

    return 0;///
}

void showScore(int over, int run,int wic) /// /////////////////////////////////////////////////
{
    cout << "The score of the " << over << "over innings: " << run<< "/"<< wic << endl;
}

int dice()
{
    
    int d= 1+ rand()%6;

    return (d);
}
void greeting()
{
    cout << "Welcome to EEE 2110."<<endl;
}
int cube(int a)
{
    return (a*a*a); /// ferot dibe jekhane take daka hoyese
}
