#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    for (;;) {
        cout << "Enter a number: ";
        cin >> n;

        if (n < 0)
            break;

        sum += n;
    }

    cout << "Sum = " << sum ;

    return 0;
}
