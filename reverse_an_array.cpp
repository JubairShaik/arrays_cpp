// reverseing the elements in the Given Array !

// we can swap the first elememt with the last elements in the array !
// i.e swaping arr[start] with arr[end]
// start ++
// end ++
// so we have to use a loop in order to print an array
 




#include <iostream>
using namespace std;

int main()
{
    // defining an array
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int size = 9;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        // swap
        swap(arr[start], arr[end]);

        // step2
        start++;
        end--;
    }

    // printing the output array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
