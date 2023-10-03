// Find a Pair (i,j) that Upon Addition gives Value Equals to SUM

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50};

    // Print All Pairs

    int sum = 50;

    int pairno = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = i + 1; j < arr.size(); j++) // j=1 :) Try FROM FUTURE :)
        {
            pairno++;
            cout << "pair no:" << pairno << " (" << element << "," << arr[j] << ")" << endl;
            if (element + arr[j] == sum)
            {
                cout << "Pair Found which gives sum  " << sum;
            }
        }
    }

    cout << "total No Pairs are : " << pairno;

    return 0;
}