#include <iostream>
using namespace std ;

void findLargestThree(int arr[], int n)
{
    if (n < 3)
    {
        cout << "Array should have at least three elements." << endl;
        return;
    }

    int firstLargest = arr[0];
    int secondLargest = arr[1];
    int thirdLargest = arr[2];

    for (int i = 3; i < n; ++i)
    {
        if (arr[i] > firstLargest)
        {
            thirdLargest = secondLargest;
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            thirdLargest = secondLargest;
            secondLargest = arr[i];
        }
        else if (arr[i] > thirdLargest)
        {
            thirdLargest = arr[i];
        }
    }

    cout << "The three largest elements are: " << firstLargest << " , " << secondLargest << " , " << thirdLargest << endl;
}

int main()
{
    const int size = 6;
    int array[size] = {12, 45, 78, 23, 56, 89};

    findLargestThree(array, size);

    return 0;
}
