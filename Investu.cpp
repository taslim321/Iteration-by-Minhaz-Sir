#include <iostream>
using namespace std;

struct Investment{
    int years;
    double initial_investment, final_value;
};

int main()
{
    Investment investment;
    cout << "Enter the amount of investment : ";
    cin >> investment.initial_investment;
    cout << "Enter investment years : ";
    cin >> investment.years;
    double value = investment.initial_investment;
    for(int i = 1; i <= investment.years; i++){
        value += value * 0.08;
        cout << "Value of investment after " << i << " years : " << value << endl;
    }
    investment.final_value = value;
    cout << "Initial investment : " << investment.initial_investment << endl;
    cout << "Investment in yaers : " << investment.years << endl;
    cout << "Final value : " << investment.final_value << endl;
    return 0;
}