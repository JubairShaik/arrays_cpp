#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {100, 2, 4, 45, 56, 56, 54, 32};
    int size = 8;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++)

    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The Minimum Number in the array is " << min << endl;

    cout << "The Maximum Number in the array is " << max << endl;

    return 0;
}

