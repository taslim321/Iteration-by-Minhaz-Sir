#include<iostream>
#include <iomanip>
using namespace std;

/// Array---> collection of variable sequentially maintained
/// Array index starts from 0 .. 1st element--> n[0]
/// to control/ traverse an array we need for loop
/// n[0], n[1],n[2],...... n[4]
//cout << "Sum:" << sum;

int main()
{
    int M=5;
    cout << "Enter the number of students:";
    cin >> M;
    int n[M],counter=0;

    for(int i=0; i<M; i++)
    {
        cout << "Enter the total mark for student "<< i+1 << " : ";
        cin >> n[i];
    }

    for(int i=0; i<M; i++)
    {
        if (n[i]>39)
        {
            counter++;
        }
    }
    cout << "The percentage of passing the exam: " << setprecision(4)
    << (counter/double (M))*100 << "%";
    return 0;
}
