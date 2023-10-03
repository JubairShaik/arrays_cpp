#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Function to find and print unique elements
void findUniqueElements(vector<int> arr)
{
    unordered_map<int, int> elementCount;

    // Count the frequency of each element
    for (int num : arr)
    {
        elementCount[num]++;
    }

    // Print unique elements
    cout << "Unique elements: ";

        for (auto pair : elementCount)
    {
        if (pair.second == 1)
        {
            cout << pair.first << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter The Elements: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    findUniqueElements(arr);

    return 0;
}
