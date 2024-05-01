#include <iostream> 
#include <cstdlib> 
using namespace std;

int main()
{
   srand(time(0)); // srand() sets the seed which is used by rand to generate “random” numbers.
   int rnd = rand() % (100 + 1); 
   int gss, count = 0;
   cout << "Guess a number betweeen 1-100 : ";
   cin >> gss;
   count++;
   while(gss != rnd){
    if(rnd > gss){
        count++;
        cout << "The number is too low. Guess again : ";
        cin >> gss;
    }else if(rnd < gss){
        count++;
        cout << "The number is too high. Guess again : ";
        cin >> gss;
    }
   }
   cout << "Correct! Congratulations, you won! That took only " << count << " tries!" << endl;
   return 0;
}