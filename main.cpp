#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>



int BinarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        int element = arr[mid];

        if (element = key)
        {
            return mid;
        }
    
        if (element < key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}





int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 76};
    int size = 7 ;
    int key = 2;

    int index = BinarySearch(arr, size, key);

    if (index == -1)
    {
        std::cout << "not found" << std::endl;
    }
    else
    {
        std::cout << "Found" << std::endl;
    }
}











 