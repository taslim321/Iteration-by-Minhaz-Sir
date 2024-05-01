#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    cout<<"<----------------------Quiz-------------------->"<<endl;
    cout<<"\t01. What is your hobby?"<<endl;
    cout<<"a. Football   b. Cricket   c. Singing    d. Traveling\n"<<endl;
    char mcq1;
    cin>>mcq1;

    while(mcq1!='a' && mcq1 != 'b' && mcq1 !='c' && mcq1 !='d')
    {
        cout<<"invalid character"<<endl;
        cin>>mcq1;

    }

    if(mcq1=='a' || mcq1 == 'b' || mcq1 =='c' || mcq1 =='d')
    {
        if(mcq1=='a')
        {
            cout<<"Correct"<<endl;
            count++;
        }else
        {
            cout<<"Incorrect"<<endl;
            cout<<"correct Answer is : a"<<endl;
        }
    }
    
    
    cout<<"\t02. Below, which book would you like to read? "<<endl;
    cout<<"a. Harry pother     b. Eat That Frog\n"<<endl;
    char mcq2;
    cin>>mcq2;

    while(mcq2!='a' && mcq2 != 'b' )
    {
        cout<<"invalid character"<<endl;
        cin>>mcq2;

    }

    if(mcq2=='a' || mcq2 == 'b' )
    {
        if(mcq2=='b')
        {
            cout<<"Correct"<<endl;
            count++;
        }else
        {
            cout<<"Incorrect"<<endl;
            cout<<"correct Answer is : b"<<endl;
        }
    }
    cout<<"\t03.Do you want to be an astronot?(y/n)"<<endl;
    char mcq3;
    cin>>mcq3;

    while(mcq3!='y' && mcq3 != 'n' )
    {
        cout<<"invalid character"<<endl;
        cin>>mcq3;

    }

    if(mcq3=='y' || mcq3 == 'n' )
    {
        if(mcq3=='n')
        {
            cout<<"Correct"<<endl;
            count++;
        }else
        {
            cout<<"Incorrect"<<endl;
            cout<<"correct Answer is : No"<<endl;
        }
    }
    cout<<" the number of correct answer is "<<count<<endl;


    return 0;
}
